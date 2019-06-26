// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: robot_states.proto

#include "robot_states.pb.h"

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
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace revolve {
namespace msgs {
class RobotStateDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<RobotState>
      _instance;
} _RobotState_default_instance_;
class RobotStatesDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<RobotStates>
      _instance;
} _RobotStates_default_instance_;
}  // namespace msgs
}  // namespace revolve
namespace protobuf_robot_5fstates_2eproto {
void InitDefaultsRobotStateImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  protobuf_pose_2eproto::InitDefaultsPose();
  {
    void* ptr = &::revolve::msgs::_RobotState_default_instance_;
    new (ptr) ::revolve::msgs::RobotState();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::revolve::msgs::RobotState::InitAsDefaultInstance();
}

void InitDefaultsRobotState() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsRobotStateImpl);
}

void InitDefaultsRobotStatesImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  protobuf_time_2eproto::InitDefaultsTime();
  protobuf_robot_5fstates_2eproto::InitDefaultsRobotState();
  {
    void* ptr = &::revolve::msgs::_RobotStates_default_instance_;
    new (ptr) ::revolve::msgs::RobotStates();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::revolve::msgs::RobotStates::InitAsDefaultInstance();
}

void InitDefaultsRobotStates() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsRobotStatesImpl);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::revolve::msgs::RobotState, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::revolve::msgs::RobotState, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::revolve::msgs::RobotState, id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::revolve::msgs::RobotState, name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::revolve::msgs::RobotState, pose_),
  2,
  0,
  1,
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::revolve::msgs::RobotStates, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::revolve::msgs::RobotStates, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::revolve::msgs::RobotStates, time_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::revolve::msgs::RobotStates, robot_state_),
  0,
  ~0u,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, sizeof(::revolve::msgs::RobotState)},
  { 11, 18, sizeof(::revolve::msgs::RobotStates)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::revolve::msgs::_RobotState_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::revolve::msgs::_RobotStates_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "robot_states.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\022robot_states.proto\022\014revolve.msgs\032\ntime"
      ".proto\032\npose.proto\"G\n\nRobotState\022\n\n\002id\030\001"
      " \002(\r\022\014\n\004name\030\002 \002(\t\022\037\n\004pose\030\003 \002(\0132\021.gazeb"
      "o.msgs.Pose\"]\n\013RobotStates\022\037\n\004time\030\001 \002(\013"
      "2\021.gazebo.msgs.Time\022-\n\013robot_state\030\002 \003(\013"
      "2\030.revolve.msgs.RobotState"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 226);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "robot_states.proto", &protobuf_RegisterTypes);
  ::protobuf_time_2eproto::AddDescriptors();
  ::protobuf_pose_2eproto::AddDescriptors();
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_robot_5fstates_2eproto
namespace revolve {
namespace msgs {

// ===================================================================

void RobotState::InitAsDefaultInstance() {
  ::revolve::msgs::_RobotState_default_instance_._instance.get_mutable()->pose_ = const_cast< ::gazebo::msgs::Pose*>(
      ::gazebo::msgs::Pose::internal_default_instance());
}
void RobotState::clear_pose() {
  if (pose_ != NULL) pose_->Clear();
  clear_has_pose();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int RobotState::kIdFieldNumber;
const int RobotState::kNameFieldNumber;
const int RobotState::kPoseFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

RobotState::RobotState()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_robot_5fstates_2eproto::InitDefaultsRobotState();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:revolve.msgs.RobotState)
}
RobotState::RobotState(const RobotState& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_name()) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.has_pose()) {
    pose_ = new ::gazebo::msgs::Pose(*from.pose_);
  } else {
    pose_ = NULL;
  }
  id_ = from.id_;
  // @@protoc_insertion_point(copy_constructor:revolve.msgs.RobotState)
}

void RobotState::SharedCtor() {
  _cached_size_ = 0;
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&pose_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&id_) -
      reinterpret_cast<char*>(&pose_)) + sizeof(id_));
}

RobotState::~RobotState() {
  // @@protoc_insertion_point(destructor:revolve.msgs.RobotState)
  SharedDtor();
}

void RobotState::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete pose_;
}

void RobotState::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RobotState::descriptor() {
  ::protobuf_robot_5fstates_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_robot_5fstates_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const RobotState& RobotState::default_instance() {
  ::protobuf_robot_5fstates_2eproto::InitDefaultsRobotState();
  return *internal_default_instance();
}

RobotState* RobotState::New(::google::protobuf::Arena* arena) const {
  RobotState* n = new RobotState;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void RobotState::Clear() {
// @@protoc_insertion_point(message_clear_start:revolve.msgs.RobotState)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(!name_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*name_.UnsafeRawStringPointer())->clear();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(pose_ != NULL);
      pose_->Clear();
    }
  }
  id_ = 0u;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool RobotState::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:revolve.msgs.RobotState)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          set_has_id();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required string name = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->name().data(), static_cast<int>(this->name().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "revolve.msgs.RobotState.name");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required .gazebo.msgs.Pose pose = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_pose()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:revolve.msgs.RobotState)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:revolve.msgs.RobotState)
  return false;
#undef DO_
}

void RobotState::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:revolve.msgs.RobotState)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required uint32 id = 1;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->id(), output);
  }

  // required string name = 2;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "revolve.msgs.RobotState.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->name(), output);
  }

  // required .gazebo.msgs.Pose pose = 3;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, *this->pose_, output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:revolve.msgs.RobotState)
}

::google::protobuf::uint8* RobotState::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:revolve.msgs.RobotState)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required uint32 id = 1;
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->id(), target);
  }

  // required string name = 2;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "revolve.msgs.RobotState.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->name(), target);
  }

  // required .gazebo.msgs.Pose pose = 3;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, *this->pose_, deterministic, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:revolve.msgs.RobotState)
  return target;
}

size_t RobotState::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:revolve.msgs.RobotState)
  size_t total_size = 0;

  if (has_name()) {
    // required string name = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  if (has_pose()) {
    // required .gazebo.msgs.Pose pose = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *this->pose_);
  }

  if (has_id()) {
    // required uint32 id = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->id());
  }

  return total_size;
}
size_t RobotState::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:revolve.msgs.RobotState)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (((_has_bits_[0] & 0x00000007) ^ 0x00000007) == 0) {  // All required fields are present.
    // required string name = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());

    // required .gazebo.msgs.Pose pose = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *this->pose_);

    // required uint32 id = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->id());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void RobotState::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:revolve.msgs.RobotState)
  GOOGLE_DCHECK_NE(&from, this);
  const RobotState* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const RobotState>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:revolve.msgs.RobotState)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:revolve.msgs.RobotState)
    MergeFrom(*source);
  }
}

void RobotState::MergeFrom(const RobotState& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:revolve.msgs.RobotState)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 7u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_name();
      name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
    }
    if (cached_has_bits & 0x00000002u) {
      mutable_pose()->::gazebo::msgs::Pose::MergeFrom(from.pose());
    }
    if (cached_has_bits & 0x00000004u) {
      id_ = from.id_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void RobotState::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:revolve.msgs.RobotState)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RobotState::CopyFrom(const RobotState& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:revolve.msgs.RobotState)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RobotState::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;
  if (has_pose()) {
    if (!this->pose_->IsInitialized()) return false;
  }
  return true;
}

void RobotState::Swap(RobotState* other) {
  if (other == this) return;
  InternalSwap(other);
}
void RobotState::InternalSwap(RobotState* other) {
  using std::swap;
  name_.Swap(&other->name_);
  swap(pose_, other->pose_);
  swap(id_, other->id_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata RobotState::GetMetadata() const {
  protobuf_robot_5fstates_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_robot_5fstates_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void RobotStates::InitAsDefaultInstance() {
  ::revolve::msgs::_RobotStates_default_instance_._instance.get_mutable()->time_ = const_cast< ::gazebo::msgs::Time*>(
      ::gazebo::msgs::Time::internal_default_instance());
}
void RobotStates::clear_time() {
  if (time_ != NULL) time_->Clear();
  clear_has_time();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int RobotStates::kTimeFieldNumber;
const int RobotStates::kRobotStateFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

RobotStates::RobotStates()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_robot_5fstates_2eproto::InitDefaultsRobotStates();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:revolve.msgs.RobotStates)
}
RobotStates::RobotStates(const RobotStates& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0),
      robot_state_(from.robot_state_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_time()) {
    time_ = new ::gazebo::msgs::Time(*from.time_);
  } else {
    time_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:revolve.msgs.RobotStates)
}

void RobotStates::SharedCtor() {
  _cached_size_ = 0;
  time_ = NULL;
}

RobotStates::~RobotStates() {
  // @@protoc_insertion_point(destructor:revolve.msgs.RobotStates)
  SharedDtor();
}

void RobotStates::SharedDtor() {
  if (this != internal_default_instance()) delete time_;
}

void RobotStates::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RobotStates::descriptor() {
  ::protobuf_robot_5fstates_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_robot_5fstates_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const RobotStates& RobotStates::default_instance() {
  ::protobuf_robot_5fstates_2eproto::InitDefaultsRobotStates();
  return *internal_default_instance();
}

RobotStates* RobotStates::New(::google::protobuf::Arena* arena) const {
  RobotStates* n = new RobotStates;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void RobotStates::Clear() {
// @@protoc_insertion_point(message_clear_start:revolve.msgs.RobotStates)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  robot_state_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    GOOGLE_DCHECK(time_ != NULL);
    time_->Clear();
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool RobotStates::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:revolve.msgs.RobotStates)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .gazebo.msgs.Time time = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_time()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .revolve.msgs.RobotState robot_state = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(input, add_robot_state()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:revolve.msgs.RobotStates)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:revolve.msgs.RobotStates)
  return false;
#undef DO_
}

void RobotStates::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:revolve.msgs.RobotStates)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required .gazebo.msgs.Time time = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->time_, output);
  }

  // repeated .revolve.msgs.RobotState robot_state = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->robot_state_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->robot_state(static_cast<int>(i)), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:revolve.msgs.RobotStates)
}

::google::protobuf::uint8* RobotStates::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:revolve.msgs.RobotStates)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required .gazebo.msgs.Time time = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, *this->time_, deterministic, target);
  }

  // repeated .revolve.msgs.RobotState robot_state = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->robot_state_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, this->robot_state(static_cast<int>(i)), deterministic, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:revolve.msgs.RobotStates)
  return target;
}

size_t RobotStates::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:revolve.msgs.RobotStates)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  // required .gazebo.msgs.Time time = 1;
  if (has_time()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *this->time_);
  }
  // repeated .revolve.msgs.RobotState robot_state = 2;
  {
    unsigned int count = static_cast<unsigned int>(this->robot_state_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->robot_state(static_cast<int>(i)));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void RobotStates::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:revolve.msgs.RobotStates)
  GOOGLE_DCHECK_NE(&from, this);
  const RobotStates* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const RobotStates>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:revolve.msgs.RobotStates)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:revolve.msgs.RobotStates)
    MergeFrom(*source);
  }
}

void RobotStates::MergeFrom(const RobotStates& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:revolve.msgs.RobotStates)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  robot_state_.MergeFrom(from.robot_state_);
  if (from.has_time()) {
    mutable_time()->::gazebo::msgs::Time::MergeFrom(from.time());
  }
}

void RobotStates::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:revolve.msgs.RobotStates)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RobotStates::CopyFrom(const RobotStates& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:revolve.msgs.RobotStates)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RobotStates::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  if (!::google::protobuf::internal::AllAreInitialized(this->robot_state())) return false;
  if (has_time()) {
    if (!this->time_->IsInitialized()) return false;
  }
  return true;
}

void RobotStates::Swap(RobotStates* other) {
  if (other == this) return;
  InternalSwap(other);
}
void RobotStates::InternalSwap(RobotStates* other) {
  using std::swap;
  robot_state_.InternalSwap(&other->robot_state_);
  swap(time_, other->time_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata RobotStates::GetMetadata() const {
  protobuf_robot_5fstates_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_robot_5fstates_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace revolve

// @@protoc_insertion_point(global_scope)