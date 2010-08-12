// Copyright 2010 Google Inc.
// 
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// 
//      http://www.apache.org/licenses/LICENSE-2.0
// 
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
// ------------------------------------------------------------------------

#include "openssl/md5.h"

#include "public/hash_map.h"

const uint32 kHashSeed32 = 0x3a04f49fU;
const uint64 kHashSeed64 = (uint64(0xe87b36beU) << 32) | 0x6e2e58dcU;

uint32 Hash32StringWithSeed(const char *s, uint32 len, uint32 seed);
uint64 Hash64StringWithSeed(const char *s, uint32 len, uint64 seed);
uint32 Hash32NumWithSeed(uint32 num, uint32 seed);
uint64 Hash64NumWithSeed(uint64 num, uint64 seed);
uint32 Hash32PointerWithSeed(const void* p, uint32 seed);


const Fprint kMaxFprint = static_cast<Fprint>(kuint64max);
const Fprint kIllegalFprint = static_cast<Fprint>(0);

uint64 FingerprintString(const char *s, uint32 len);
uint64 FingerprintString(const string& s);

inline uint64 FingerprintCat(uint64 fp1, uint64 fp2) {
  return Hash64NumWithSeed(fp1, fp2);
}

inline uint64 Fingerprint(uint64 c) {
  return Hash64NumWithSeed(static_cast<uint64>(c), kHashSeed64);
}


// ============================================================================
// General utilities related to hash.

void MD5Digest(const void* data, size_t length,
               uint8 (*digest)[MD5_DIGEST_LENGTH]);


inline uint32 local_bswap_32(uint32 x) {
  return ((x & 0x000000FF) << 24 ) |
         ((x & 0x0000FF00) << 8  ) |
         ((x & 0x00FF0000) >> 8  ) |
         ((x & 0xFF000000) >> 24);
}

inline uint64 local_bswap_64(uint64 host_int) {
#if defined(COMPILER_GCC3) && defined(__x86_64__)
  // Adapted from /usr/include/byteswap.h.
  if (__builtin_constant_p(host_int)) {
    return __bswap_64(host_int);
  } else {
    register uint64 result;
    __asm__ ("bswap %0" : "=r" (result) : "0" (host_int));
    return result;
  }
#elif defined(bswap_64)
  return bswap_64(host_int);
#else
  return
    static_cast<uint64>(local_bswap_32(static_cast<uint32>(host_int >> 32))) |
    (static_cast<uint64>(local_bswap_32(static_cast<uint32>(host_int))) << 32);
#endif  // bswap_64
}

// Returns the bit number of the highest bit set, or -1 if none.
// Do not use in time-critical code.
inline int Log2Int(uint64 x) {
  int count = -1;
  while (x != 0) {
    count++;
    x >>= 1;
  }
  return count;
}


// ============================================================================
// Key value manipulation.


// Converts a fingerprint to an 8-byte string key, as big endian.
inline void KeyFromUint64(uint64 fp, string* key) {
#ifdef IS_LITTLE_ENDIAN
  uint64 norder = local_bswap_64(fp);
#else
  uint64& norder = fp;
#endif
  key->assign(pun_cast<const char*>(&norder), sizeof(norder));
}


inline string Uint64ToKey(uint64 fp) {
  string key;
  KeyFromUint64(fp, &key);
  return key;
}


// Converts an 8-byte string key (typically generated by Uint64ToKey or
// KeyFromUint64) into a uint64 value
inline uint64 KeyToUint64(const string& key) {
  DCHECK_EQ(key.size(), sizeof(uint64));
#ifdef IS_LITTLE_ENDIAN
  return local_bswap_64(*pun_cast<const uint64*>(key.data()));
#else
  return *pun_cast<const uint64*>(key.data());
#endif
}


// Converts a double value to an 8-byte string key, so that
// the string keys sort in the same order as the original double values.
inline void KeyFromDouble(double d, string* key) {
  int64 n = *pun_cast<const int64*>(&d);
  if (n >= 0) 
    n ^= int64(-1) << 63;
  else
    n = -n;
  KeyFromUint64(n, key);
}


// Converts key generated by KeyFromDouble() back to double.
inline double KeyToDouble(const string& key) {
  DCHECK_EQ(key.size(), sizeof(uint64));
  DCHECK_EQ(key.size(), sizeof(double));
  int64 n = KeyToUint64(key);
  if (n & (int64(-1) << 63))
    n ^= int64(-1) << 63;
  else
    n = -n;
  return *pun_cast<const double*>(&n);
}


// Converts a double value to an 8-byte string key, using the raw data
// in native endian format.
inline string EncodeDouble(double d) {
  return string(pun_cast<const char*>(&d), sizeof(d));
}


// ============================================================================

// Hash specializations.  We specialize our own hash template used by
// our derived hash_map and hash_set, because we cannot easily enter
// the namespace containing the library version of hash (and besides,
// strictly speaking, adding specializations there is not allowed).

namespace SzlHash {

typedef uint32 Hash32;
typedef uint16 Hash16;
typedef unsigned char  Hash8;

const Hash32 kIllegalHash32 = static_cast<Hash32>(4294967295UL);    // 2^32-1
const Hash16 kIllegalHash16 = static_cast<Hash16>(65535U);          // 2^16-1
const Hash8  kIllegalHash8 = static_cast<Hash8>(255);               // 2^8-1

inline uint32 HashTo32(const char* s, uint32 slen) {
  uint32 retval = Hash32StringWithSeed(s, slen, kHashSeed32);
  return retval == kIllegalHash32 ? retval-1 : retval;
}

// Allow us to hash pointers as if they were int's
template<class T> struct hash<T*> {
  COMPILE_ASSERT(sizeof(void*) == sizeof(size_t),
                 size_t_and_pointers_are_not_the_same_size);
  size_t operator()(T *x) const { return *pun_cast<const size_t*>(&x); }
};

// Use our nice hash function for strings
template<class _CharT, class _Traits, class _Alloc>
struct hash<basic_string<_CharT, _Traits, _Alloc> > {
  size_t operator()(const basic_string<_CharT, _Traits, _Alloc>& k) const {
    return HashTo32(k.data(), k.length());
  }
};

// they don't define a hash for const string at all
template<> struct hash<const string> {
  size_t operator()(const string& k) const {
    return HashTo32(k.data(), k.length());
  }
};

}  // namespace SzlHash
