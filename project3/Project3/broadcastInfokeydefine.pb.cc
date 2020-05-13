// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: broadcastInfokeydefine.proto

#include "broadcastInfokeydefine.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
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

namespace BroadCastInfoKeyDefine {
}  // namespace BroadCastInfoKeyDefine
namespace protobuf_broadcastInfokeydefine_2eproto {
void InitDefaults() {
}

const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];
const ::google::protobuf::uint32 TableStruct::offsets[1] = {};
static const ::google::protobuf::internal::MigrationSchema* schemas = NULL;
static const ::google::protobuf::Message* const* file_default_instances = NULL;

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "broadcastInfokeydefine.proto", schemas, file_default_instances, TableStruct::offsets,
      NULL, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\034broadcastInfokeydefine.proto\022\026BroadCas"
      "tInfoKeyDefine*\322\n\n\020BroadcastInfoKey\022\031\n\025R"
      "ecorder_Train_In_Out\020\000\022\027\n\023CommonTimeRefe"
      "rence\020\001\022\021\n\rPlayer_Status\020\002\022\020\n\014Player_Gro"
      "up\020\003\022\021\n\rPlayer_Camera\020\004\022\017\n\013Player_Type\020\005"
      "\022\020\n\014Player_Speed\020\006\022\023\n\017Player_Consigne\020\007\022"
      "\017\n\013Player_Mode\020\010\022\032\n\026Player_Extend_Playli"
      "st\020\t\022\017\n\013Camera_Type\020\n\022\027\n\023Player_Limit_In"
      "_Out\020\013\022\024\n\020Player_Loop_Mode\020\014\022\025\n\021Player_L"
      "oop_Count\020\r\022\026\n\022Player_Playlist_ID\020\016\022\036\n\032P"
      "layer_Playlist_Element_ID\020\017\022\014\n\010DVE_Mode\020"
      "\020\022\014\n\010DVE_Type\020\021\022\017\n\013DVE_Channel\020\022\022\013\n\007DVE_"
      "Num\020\023\022\013\n\007DVE_Den\020\024\022\024\n\020DVE_CutThreshold\020\025"
      "\022\033\n\027DVE_Custom_Transparency\020\026\022\016\n\nRTD_Sta"
      "tus\020\027\022\014\n\010RTD_Type\020\030\022\020\n\014RTD_Position\020\031\022\016\n"
      "\nGFX_Status\020\032\022\020\n\014GFX_Position\020\033\022\034\n\030GFX_F"
      "ade_In_Out_Duration\020\034\022\023\n\017GFX_Loop_In_Out"
      "\020\035\022\022\n\016GFX_Loop_Count\020\036\022\026\n\022GFX_Preload_St"
      "atus\020\037\022\037\n\033HealthInfo_Storage_Capacity\020 \022"
      "\026\n\022HealthInfo_Version\020!\022\033\n\027HealthInfo_Mi"
      "xer_Status\020\"\022 \n\034HealthInfo_Network_Bandw"
      "idth\020#\022\036\n\032HealthInfo_GPU_Temperature\020$\022\031"
      "\n\025HealthInfo_AJA_Status\020%\022\031\n\025HealthInfo_"
      "HDD_Status\020&\022\032\n\026HealthInfo_ASIO_Status\020\'"
      "\022 \n\034HealthInfo_External_TimeCode\020(\022\027\n\023Cu"
      "stomInfoBroadcast\020)\022\017\n\013BMR_Setting\020*\022\032\n\026"
      "VuMeter_Live_Mixer_PGM\020+\022\032\n\026Recorder_Clo"
      "se_Caption\020,\022\030\n\024Player_Close_Caption\020-\022\024"
      "\n\020CustomInfoNotify\020.\022\030\n\024Player_AudioPres"
      "etId\020/\022\016\n\nPiP_Status\0200\022\034\n\030HealthInfo_Ser"
      "ver_Memory\0201\022#\n\037Cache_ReplayPlayer_HighR"
      "esVideo\0202\022$\n Cache_ReplayPlayer_External"
      "Audio\0203\022\036\n\032HealthInfo_ReferenceStatus\0204\022"
      "\033\n\027HealthInfo_SerialNumber\0205\022\"\n\036HealthIn"
      "fo_RemainingTimePerCam\0206\022\026\n\022Film_Effect_"
      "Status\0207\022\t\n\005Tally\0208b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 1427);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "broadcastInfokeydefine.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_broadcastInfokeydefine_2eproto
namespace BroadCastInfoKeyDefine {
const ::google::protobuf::EnumDescriptor* BroadcastInfoKey_descriptor() {
  protobuf_broadcastInfokeydefine_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_broadcastInfokeydefine_2eproto::file_level_enum_descriptors[0];
}
bool BroadcastInfoKey_IsValid(int value) {
  switch (value) {
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
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 31:
    case 32:
    case 33:
    case 34:
    case 35:
    case 36:
    case 37:
    case 38:
    case 39:
    case 40:
    case 41:
    case 42:
    case 43:
    case 44:
    case 45:
    case 46:
    case 47:
    case 48:
    case 49:
    case 50:
    case 51:
    case 52:
    case 53:
    case 54:
    case 55:
    case 56:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace BroadCastInfoKeyDefine
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)