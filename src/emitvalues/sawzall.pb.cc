// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "emitvalues/sawzall.pb.h"
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace sawzall {

namespace {

const ::google::protobuf::Descriptor* SzlFieldProto_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  SzlFieldProto_reflection_ = NULL;
const ::google::protobuf::Descriptor* SzlTypeProto_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  SzlTypeProto_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* SzlTypeProto_KIND_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_emitvalues_2fsawzall_2eproto() {
  protobuf_AddDesc_emitvalues_2fsawzall_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "emitvalues/sawzall.proto");
  GOOGLE_CHECK(file != NULL);
  SzlFieldProto_descriptor_ = file->message_type(0);
  static const int SzlFieldProto_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SzlFieldProto, label_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SzlFieldProto, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SzlFieldProto, tag_),
  };
  SzlFieldProto_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      SzlFieldProto_descriptor_,
      SzlFieldProto::default_instance_,
      SzlFieldProto_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SzlFieldProto, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SzlFieldProto, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(SzlFieldProto));
  SzlTypeProto_descriptor_ = file->message_type(1);
  static const int SzlTypeProto_offsets_[7] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SzlTypeProto, kind_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SzlTypeProto, table_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SzlTypeProto, param_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SzlTypeProto, indices_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SzlTypeProto, fields_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SzlTypeProto, element_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SzlTypeProto, weight_),
  };
  SzlTypeProto_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      SzlTypeProto_descriptor_,
      SzlTypeProto::default_instance_,
      SzlTypeProto_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SzlTypeProto, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SzlTypeProto, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(SzlTypeProto));
  SzlTypeProto_KIND_descriptor_ = SzlTypeProto_descriptor_->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_emitvalues_2fsawzall_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    SzlFieldProto_descriptor_, &SzlFieldProto::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    SzlTypeProto_descriptor_, &SzlTypeProto::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_emitvalues_2fsawzall_2eproto() {
  delete SzlFieldProto::default_instance_;
  delete SzlFieldProto_reflection_;
  delete SzlTypeProto::default_instance_;
  delete SzlTypeProto_reflection_;
}

void protobuf_AddDesc_emitvalues_2fsawzall_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\030emitvalues/sawzall.proto\022\007sawzall\"9\n\rS"
    "zlFieldProto\022\r\n\005Label\030\001 \002(\t\022\014\n\004Type\030\002 \002("
    "\t\022\013\n\003Tag\030\003 \001(\005\"\202\003\n\014SzlTypeProto\022\014\n\004Kind\030"
    "\001 \002(\005\022\r\n\005Table\030\002 \001(\t\022\r\n\005Param\030\003 \001(\005\022\'\n\007I"
    "ndices\030\004 \003(\0132\026.sawzall.SzlFieldProto\022&\n\006"
    "Fields\030\005 \003(\0132\026.sawzall.SzlFieldProto\022\'\n\007"
    "Element\030\006 \001(\0132\026.sawzall.SzlFieldProto\022&\n"
    "\006Weight\030\007 \001(\0132\026.sawzall.SzlFieldProto\"\243\001"
    "\n\004KIND\022\010\n\004VOID\020\000\022\010\n\004BOOL\020\001\022\t\n\005BYTES\020\002\022\017\n"
    "\013FINGERPRINT\020\003\022\t\n\005FLOAT\020\004\022\007\n\003INT\020\005\022\n\n\006ST"
    "RING\020\006\022\010\n\004TIME\020\007\022\t\n\005TUPLE\020\010\022\t\n\005ARRAY\020\t\022\007"
    "\n\003MAP\020\n\022\t\n\005TABLE\020\013\022\014\n\010FUNCTION\020\014\022\t\n\005NKIN"
    "D\020\r", 483);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "emitvalues/sawzall.proto", &protobuf_RegisterTypes);
  SzlFieldProto::default_instance_ = new SzlFieldProto();
  SzlTypeProto::default_instance_ = new SzlTypeProto();
  SzlFieldProto::default_instance_->InitAsDefaultInstance();
  SzlTypeProto::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_emitvalues_2fsawzall_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_emitvalues_2fsawzall_2eproto {
  StaticDescriptorInitializer_emitvalues_2fsawzall_2eproto() {
    protobuf_AddDesc_emitvalues_2fsawzall_2eproto();
  }
} static_descriptor_initializer_emitvalues_2fsawzall_2eproto_;


// ===================================================================

const ::std::string SzlFieldProto::_default_label_;
const ::std::string SzlFieldProto::_default_type_;
#ifndef _MSC_VER
const int SzlFieldProto::kLabelFieldNumber;
const int SzlFieldProto::kTypeFieldNumber;
const int SzlFieldProto::kTagFieldNumber;
#endif  // !_MSC_VER

SzlFieldProto::SzlFieldProto()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void SzlFieldProto::InitAsDefaultInstance() {
}

SzlFieldProto::SzlFieldProto(const SzlFieldProto& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void SzlFieldProto::SharedCtor() {
  _cached_size_ = 0;
  label_ = const_cast< ::std::string*>(&_default_label_);
  type_ = const_cast< ::std::string*>(&_default_type_);
  tag_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SzlFieldProto::~SzlFieldProto() {
  SharedDtor();
}

void SzlFieldProto::SharedDtor() {
  if (label_ != &_default_label_) {
    delete label_;
  }
  if (type_ != &_default_type_) {
    delete type_;
  }
  if (this != default_instance_) {
  }
}

void SzlFieldProto::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SzlFieldProto::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SzlFieldProto_descriptor_;
}

const SzlFieldProto& SzlFieldProto::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_emitvalues_2fsawzall_2eproto();  return *default_instance_;
}

SzlFieldProto* SzlFieldProto::default_instance_ = NULL;

SzlFieldProto* SzlFieldProto::New() const {
  return new SzlFieldProto;
}

void SzlFieldProto::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (_has_bit(0)) {
      if (label_ != &_default_label_) {
        label_->clear();
      }
    }
    if (_has_bit(1)) {
      if (type_ != &_default_type_) {
        type_->clear();
      }
    }
    tag_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool SzlFieldProto::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string Label = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_label()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->label().data(), this->label().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_Type;
        break;
      }
      
      // required string Type = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_Type:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_type()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->type().data(), this->type().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_Tag;
        break;
      }
      
      // optional int32 Tag = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_Tag:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &tag_)));
          _set_bit(2);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void SzlFieldProto::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string Label = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->label().data(), this->label().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->label(), output);
  }
  
  // required string Type = 2;
  if (_has_bit(1)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->type().data(), this->type().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->type(), output);
  }
  
  // optional int32 Tag = 3;
  if (_has_bit(2)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->tag(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* SzlFieldProto::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required string Label = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->label().data(), this->label().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->label(), target);
  }
  
  // required string Type = 2;
  if (_has_bit(1)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->type().data(), this->type().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->type(), target);
  }
  
  // optional int32 Tag = 3;
  if (_has_bit(2)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->tag(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int SzlFieldProto::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string Label = 1;
    if (has_label()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->label());
    }
    
    // required string Type = 2;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->type());
    }
    
    // optional int32 Tag = 3;
    if (has_tag()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->tag());
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SzlFieldProto::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const SzlFieldProto* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const SzlFieldProto*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void SzlFieldProto::MergeFrom(const SzlFieldProto& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      set_label(from.label());
    }
    if (from._has_bit(1)) {
      set_type(from.type());
    }
    if (from._has_bit(2)) {
      set_tag(from.tag());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void SzlFieldProto::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SzlFieldProto::CopyFrom(const SzlFieldProto& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SzlFieldProto::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  
  return true;
}

void SzlFieldProto::Swap(SzlFieldProto* other) {
  if (other != this) {
    std::swap(label_, other->label_);
    std::swap(type_, other->type_);
    std::swap(tag_, other->tag_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata SzlFieldProto::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = SzlFieldProto_descriptor_;
  metadata.reflection = SzlFieldProto_reflection_;
  return metadata;
}


// ===================================================================

const ::google::protobuf::EnumDescriptor* SzlTypeProto_KIND_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SzlTypeProto_KIND_descriptor_;
}
bool SzlTypeProto_KIND_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const SzlTypeProto_KIND SzlTypeProto::VOID;
const SzlTypeProto_KIND SzlTypeProto::BOOL;
const SzlTypeProto_KIND SzlTypeProto::BYTES;
const SzlTypeProto_KIND SzlTypeProto::FINGERPRINT;
const SzlTypeProto_KIND SzlTypeProto::FLOAT;
const SzlTypeProto_KIND SzlTypeProto::INT;
const SzlTypeProto_KIND SzlTypeProto::STRING;
const SzlTypeProto_KIND SzlTypeProto::TIME;
const SzlTypeProto_KIND SzlTypeProto::TUPLE;
const SzlTypeProto_KIND SzlTypeProto::ARRAY;
const SzlTypeProto_KIND SzlTypeProto::MAP;
const SzlTypeProto_KIND SzlTypeProto::TABLE;
const SzlTypeProto_KIND SzlTypeProto::FUNCTION;
const SzlTypeProto_KIND SzlTypeProto::NKIND;
const SzlTypeProto_KIND SzlTypeProto::KIND_MIN;
const SzlTypeProto_KIND SzlTypeProto::KIND_MAX;
const int SzlTypeProto::KIND_ARRAYSIZE;
#endif  // _MSC_VER
const ::std::string SzlTypeProto::_default_table_;
#ifndef _MSC_VER
const int SzlTypeProto::kKindFieldNumber;
const int SzlTypeProto::kTableFieldNumber;
const int SzlTypeProto::kParamFieldNumber;
const int SzlTypeProto::kIndicesFieldNumber;
const int SzlTypeProto::kFieldsFieldNumber;
const int SzlTypeProto::kElementFieldNumber;
const int SzlTypeProto::kWeightFieldNumber;
#endif  // !_MSC_VER

SzlTypeProto::SzlTypeProto()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void SzlTypeProto::InitAsDefaultInstance() {
  element_ = const_cast< ::sawzall::SzlFieldProto*>(&::sawzall::SzlFieldProto::default_instance());
  weight_ = const_cast< ::sawzall::SzlFieldProto*>(&::sawzall::SzlFieldProto::default_instance());
}

SzlTypeProto::SzlTypeProto(const SzlTypeProto& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void SzlTypeProto::SharedCtor() {
  _cached_size_ = 0;
  kind_ = 0;
  table_ = const_cast< ::std::string*>(&_default_table_);
  param_ = 0;
  element_ = NULL;
  weight_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SzlTypeProto::~SzlTypeProto() {
  SharedDtor();
}

void SzlTypeProto::SharedDtor() {
  if (table_ != &_default_table_) {
    delete table_;
  }
  if (this != default_instance_) {
    delete element_;
    delete weight_;
  }
}

void SzlTypeProto::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SzlTypeProto::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SzlTypeProto_descriptor_;
}

const SzlTypeProto& SzlTypeProto::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_emitvalues_2fsawzall_2eproto();  return *default_instance_;
}

SzlTypeProto* SzlTypeProto::default_instance_ = NULL;

SzlTypeProto* SzlTypeProto::New() const {
  return new SzlTypeProto;
}

void SzlTypeProto::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    kind_ = 0;
    if (_has_bit(1)) {
      if (table_ != &_default_table_) {
        table_->clear();
      }
    }
    param_ = 0;
    if (_has_bit(5)) {
      if (element_ != NULL) element_->::sawzall::SzlFieldProto::Clear();
    }
    if (_has_bit(6)) {
      if (weight_ != NULL) weight_->::sawzall::SzlFieldProto::Clear();
    }
  }
  indices_.Clear();
  fields_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool SzlTypeProto::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 Kind = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &kind_)));
          _set_bit(0);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_Table;
        break;
      }
      
      // optional string Table = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_Table:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_table()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->table().data(), this->table().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_Param;
        break;
      }
      
      // optional int32 Param = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_Param:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &param_)));
          _set_bit(2);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_Indices;
        break;
      }
      
      // repeated .sawzall.SzlFieldProto Indices = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_Indices:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_indices()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_Indices;
        if (input->ExpectTag(42)) goto parse_Fields;
        break;
      }
      
      // repeated .sawzall.SzlFieldProto Fields = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_Fields:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_fields()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(42)) goto parse_Fields;
        if (input->ExpectTag(50)) goto parse_Element;
        break;
      }
      
      // optional .sawzall.SzlFieldProto Element = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_Element:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_element()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(58)) goto parse_Weight;
        break;
      }
      
      // optional .sawzall.SzlFieldProto Weight = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_Weight:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_weight()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void SzlTypeProto::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required int32 Kind = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->kind(), output);
  }
  
  // optional string Table = 2;
  if (_has_bit(1)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->table().data(), this->table().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->table(), output);
  }
  
  // optional int32 Param = 3;
  if (_has_bit(2)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->param(), output);
  }
  
  // repeated .sawzall.SzlFieldProto Indices = 4;
  for (int i = 0; i < this->indices_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->indices(i), output);
  }
  
  // repeated .sawzall.SzlFieldProto Fields = 5;
  for (int i = 0; i < this->fields_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, this->fields(i), output);
  }
  
  // optional .sawzall.SzlFieldProto Element = 6;
  if (_has_bit(5)) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      6, this->element(), output);
  }
  
  // optional .sawzall.SzlFieldProto Weight = 7;
  if (_has_bit(6)) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      7, this->weight(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* SzlTypeProto::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required int32 Kind = 1;
  if (_has_bit(0)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->kind(), target);
  }
  
  // optional string Table = 2;
  if (_has_bit(1)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->table().data(), this->table().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->table(), target);
  }
  
  // optional int32 Param = 3;
  if (_has_bit(2)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->param(), target);
  }
  
  // repeated .sawzall.SzlFieldProto Indices = 4;
  for (int i = 0; i < this->indices_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        4, this->indices(i), target);
  }
  
  // repeated .sawzall.SzlFieldProto Fields = 5;
  for (int i = 0; i < this->fields_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        5, this->fields(i), target);
  }
  
  // optional .sawzall.SzlFieldProto Element = 6;
  if (_has_bit(5)) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        6, this->element(), target);
  }
  
  // optional .sawzall.SzlFieldProto Weight = 7;
  if (_has_bit(6)) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        7, this->weight(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int SzlTypeProto::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 Kind = 1;
    if (has_kind()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->kind());
    }
    
    // optional string Table = 2;
    if (has_table()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->table());
    }
    
    // optional int32 Param = 3;
    if (has_param()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->param());
    }
    
    // optional .sawzall.SzlFieldProto Element = 6;
    if (has_element()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->element());
    }
    
    // optional .sawzall.SzlFieldProto Weight = 7;
    if (has_weight()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->weight());
    }
    
  }
  // repeated .sawzall.SzlFieldProto Indices = 4;
  total_size += 1 * this->indices_size();
  for (int i = 0; i < this->indices_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->indices(i));
  }
  
  // repeated .sawzall.SzlFieldProto Fields = 5;
  total_size += 1 * this->fields_size();
  for (int i = 0; i < this->fields_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->fields(i));
  }
  
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SzlTypeProto::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const SzlTypeProto* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const SzlTypeProto*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void SzlTypeProto::MergeFrom(const SzlTypeProto& from) {
  GOOGLE_CHECK_NE(&from, this);
  indices_.MergeFrom(from.indices_);
  fields_.MergeFrom(from.fields_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      set_kind(from.kind());
    }
    if (from._has_bit(1)) {
      set_table(from.table());
    }
    if (from._has_bit(2)) {
      set_param(from.param());
    }
    if (from._has_bit(5)) {
      mutable_element()->::sawzall::SzlFieldProto::MergeFrom(from.element());
    }
    if (from._has_bit(6)) {
      mutable_weight()->::sawzall::SzlFieldProto::MergeFrom(from.weight());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void SzlTypeProto::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SzlTypeProto::CopyFrom(const SzlTypeProto& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SzlTypeProto::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  
  for (int i = 0; i < indices_size(); i++) {
    if (!this->indices(i).IsInitialized()) return false;
  }
  for (int i = 0; i < fields_size(); i++) {
    if (!this->fields(i).IsInitialized()) return false;
  }
  if (has_element()) {
    if (!this->element().IsInitialized()) return false;
  }
  if (has_weight()) {
    if (!this->weight().IsInitialized()) return false;
  }
  return true;
}

void SzlTypeProto::Swap(SzlTypeProto* other) {
  if (other != this) {
    std::swap(kind_, other->kind_);
    std::swap(table_, other->table_);
    std::swap(param_, other->param_);
    indices_.Swap(&other->indices_);
    fields_.Swap(&other->fields_);
    std::swap(element_, other->element_);
    std::swap(weight_, other->weight_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata SzlTypeProto::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = SzlTypeProto_descriptor_;
  metadata.reflection = SzlTypeProto_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sawzall

// @@protoc_insertion_point(global_scope)