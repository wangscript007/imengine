// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: counters.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "counters.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace zproto {

namespace {

const ::google::protobuf::Descriptor* AppCounters_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  AppCounters_reflection_ = NULL;
const ::google::protobuf::Descriptor* CountersChangedNotify_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CountersChangedNotify_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_counters_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_counters_2eproto() {
  protobuf_AddDesc_counters_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "counters.proto");
  GOOGLE_CHECK(file != NULL);
  AppCounters_descriptor_ = file->message_type(0);
  static const int AppCounters_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AppCounters, global_counter_),
  };
  AppCounters_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      AppCounters_descriptor_,
      AppCounters::default_instance_,
      AppCounters_offsets_,
      -1,
      -1,
      -1,
      sizeof(AppCounters),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AppCounters, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AppCounters, _is_default_instance_));
  CountersChangedNotify_descriptor_ = file->message_type(1);
  static const int CountersChangedNotify_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CountersChangedNotify, counters_),
  };
  CountersChangedNotify_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      CountersChangedNotify_descriptor_,
      CountersChangedNotify::default_instance_,
      CountersChangedNotify_offsets_,
      -1,
      -1,
      -1,
      sizeof(CountersChangedNotify),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CountersChangedNotify, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CountersChangedNotify, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_counters_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      AppCounters_descriptor_, &AppCounters::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      CountersChangedNotify_descriptor_, &CountersChangedNotify::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_counters_2eproto() {
  delete AppCounters::default_instance_;
  delete AppCounters_reflection_;
  delete CountersChangedNotify::default_instance_;
  delete CountersChangedNotify_reflection_;
}

void protobuf_AddDesc_counters_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_counters_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\016counters.proto\022\006zproto\"%\n\013AppCounters\022"
    "\026\n\016global_counter\030\001 \001(\005\">\n\025CountersChang"
    "edNotify\022%\n\010counters\030\001 \001(\0132\023.zproto.AppC"
    "ountersB+\n\027com.zchat.engine.zprotoB\016ZPro"
    "toCountersH\002b\006proto3", 180);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "counters.proto", &protobuf_RegisterTypes);
  AppCounters::default_instance_ = new AppCounters();
  CountersChangedNotify::default_instance_ = new CountersChangedNotify();
  AppCounters::default_instance_->InitAsDefaultInstance();
  CountersChangedNotify::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_counters_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_counters_2eproto {
  StaticDescriptorInitializer_counters_2eproto() {
    protobuf_AddDesc_counters_2eproto();
  }
} static_descriptor_initializer_counters_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int AppCounters::kGlobalCounterFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

AppCounters::AppCounters()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:zproto.AppCounters)
}

void AppCounters::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

AppCounters::AppCounters(const AppCounters& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:zproto.AppCounters)
}

void AppCounters::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  global_counter_ = 0;
}

AppCounters::~AppCounters() {
  // @@protoc_insertion_point(destructor:zproto.AppCounters)
  SharedDtor();
}

void AppCounters::SharedDtor() {
  if (this != default_instance_) {
  }
}

void AppCounters::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* AppCounters::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return AppCounters_descriptor_;
}

const AppCounters& AppCounters::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_counters_2eproto();
  return *default_instance_;
}

AppCounters* AppCounters::default_instance_ = NULL;

AppCounters* AppCounters::New(::google::protobuf::Arena* arena) const {
  AppCounters* n = new AppCounters;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void AppCounters::Swap(AppCounters* other) {
  if (other == this) return;
  InternalSwap(other);
}
void AppCounters::InternalSwap(AppCounters* other) {
  GetReflection()->Swap(this, other);}

::google::protobuf::Metadata AppCounters::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = AppCounters_descriptor_;
  metadata.reflection = AppCounters_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// AppCounters

// optional int32 global_counter = 1;
void AppCounters::clear_global_counter() {
  global_counter_ = 0;
}
 ::google::protobuf::int32 AppCounters::global_counter() const {
  // @@protoc_insertion_point(field_get:zproto.AppCounters.global_counter)
  return global_counter_;
}
 void AppCounters::set_global_counter(::google::protobuf::int32 value) {
  
  global_counter_ = value;
  // @@protoc_insertion_point(field_set:zproto.AppCounters.global_counter)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int CountersChangedNotify::kCountersFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

CountersChangedNotify::CountersChangedNotify()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:zproto.CountersChangedNotify)
}

void CountersChangedNotify::InitAsDefaultInstance() {
  _is_default_instance_ = true;
  counters_ = const_cast< ::zproto::AppCounters*>(&::zproto::AppCounters::default_instance());
}

CountersChangedNotify::CountersChangedNotify(const CountersChangedNotify& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:zproto.CountersChangedNotify)
}

void CountersChangedNotify::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  counters_ = NULL;
}

CountersChangedNotify::~CountersChangedNotify() {
  // @@protoc_insertion_point(destructor:zproto.CountersChangedNotify)
  SharedDtor();
}

void CountersChangedNotify::SharedDtor() {
  if (this != default_instance_) {
    delete counters_;
  }
}

void CountersChangedNotify::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CountersChangedNotify::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CountersChangedNotify_descriptor_;
}

const CountersChangedNotify& CountersChangedNotify::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_counters_2eproto();
  return *default_instance_;
}

CountersChangedNotify* CountersChangedNotify::default_instance_ = NULL;

CountersChangedNotify* CountersChangedNotify::New(::google::protobuf::Arena* arena) const {
  CountersChangedNotify* n = new CountersChangedNotify;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void CountersChangedNotify::Swap(CountersChangedNotify* other) {
  if (other == this) return;
  InternalSwap(other);
}
void CountersChangedNotify::InternalSwap(CountersChangedNotify* other) {
  GetReflection()->Swap(this, other);}

::google::protobuf::Metadata CountersChangedNotify::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = CountersChangedNotify_descriptor_;
  metadata.reflection = CountersChangedNotify_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// CountersChangedNotify

// optional .zproto.AppCounters counters = 1;
bool CountersChangedNotify::has_counters() const {
  return !_is_default_instance_ && counters_ != NULL;
}
void CountersChangedNotify::clear_counters() {
  if (GetArenaNoVirtual() == NULL && counters_ != NULL) delete counters_;
  counters_ = NULL;
}
const ::zproto::AppCounters& CountersChangedNotify::counters() const {
  // @@protoc_insertion_point(field_get:zproto.CountersChangedNotify.counters)
  return counters_ != NULL ? *counters_ : *default_instance_->counters_;
}
::zproto::AppCounters* CountersChangedNotify::mutable_counters() {
  
  if (counters_ == NULL) {
    counters_ = new ::zproto::AppCounters;
  }
  // @@protoc_insertion_point(field_mutable:zproto.CountersChangedNotify.counters)
  return counters_;
}
::zproto::AppCounters* CountersChangedNotify::release_counters() {
  // @@protoc_insertion_point(field_release:zproto.CountersChangedNotify.counters)
  
  ::zproto::AppCounters* temp = counters_;
  counters_ = NULL;
  return temp;
}
void CountersChangedNotify::set_allocated_counters(::zproto::AppCounters* counters) {
  delete counters_;
  counters_ = counters;
  if (counters) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:zproto.CountersChangedNotify.counters)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace zproto

// @@protoc_insertion_point(global_scope)