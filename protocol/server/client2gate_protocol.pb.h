// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: client2gate_protocol.proto

#ifndef PROTOBUF_client2gate_5fprotocol_2eproto__INCLUDED
#define PROTOBUF_client2gate_5fprotocol_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "client2gate_msg_type.pb.h"
#include "msg_type_def.pb.h"
// @@protoc_insertion_point(includes)

namespace client2gate_protocols {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_client2gate_5fprotocol_2eproto();
void protobuf_AssignDesc_client2gate_5fprotocol_2eproto();
void protobuf_ShutdownFile_client2gate_5fprotocol_2eproto();

class packetc2g_heartbeat;
class msg_packet;
class packet_g2c_send_msglist;
class packetc2g_select_gate;
class packetg2c_select_gate_result;

// ===================================================================

class packetc2g_heartbeat : public ::google::protobuf::Message {
 public:
  packetc2g_heartbeat();
  virtual ~packetc2g_heartbeat();

  packetc2g_heartbeat(const packetc2g_heartbeat& from);

  inline packetc2g_heartbeat& operator=(const packetc2g_heartbeat& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const packetc2g_heartbeat& default_instance();

  void Swap(packetc2g_heartbeat* other);

  // implements Message ----------------------------------------------

  packetc2g_heartbeat* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const packetc2g_heartbeat& from);
  void MergeFrom(const packetc2g_heartbeat& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .client2gate_protocols.e_server_msg_type packet_id = 1 [default = e_mst_c2g_heartbeat];
  inline bool has_packet_id() const;
  inline void clear_packet_id();
  static const int kPacketIdFieldNumber = 1;
  inline ::client2gate_protocols::e_server_msg_type packet_id() const;
  inline void set_packet_id(::client2gate_protocols::e_server_msg_type value);

  // @@protoc_insertion_point(class_scope:client2gate_protocols.packetc2g_heartbeat)
 private:
  inline void set_has_packet_id();
  inline void clear_has_packet_id();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  int packet_id_;
  friend void  protobuf_AddDesc_client2gate_5fprotocol_2eproto();
  friend void protobuf_AssignDesc_client2gate_5fprotocol_2eproto();
  friend void protobuf_ShutdownFile_client2gate_5fprotocol_2eproto();

  void InitAsDefaultInstance();
  static packetc2g_heartbeat* default_instance_;
};
// -------------------------------------------------------------------

class msg_packet : public ::google::protobuf::Message {
 public:
  msg_packet();
  virtual ~msg_packet();

  msg_packet(const msg_packet& from);

  inline msg_packet& operator=(const msg_packet& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const msg_packet& default_instance();

  void Swap(msg_packet* other);

  // implements Message ----------------------------------------------

  msg_packet* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const msg_packet& from);
  void MergeFrom(const msg_packet& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 msgid = 1;
  inline bool has_msgid() const;
  inline void clear_msgid();
  static const int kMsgidFieldNumber = 1;
  inline ::google::protobuf::int32 msgid() const;
  inline void set_msgid(::google::protobuf::int32 value);

  // optional bytes msginfo = 2;
  inline bool has_msginfo() const;
  inline void clear_msginfo();
  static const int kMsginfoFieldNumber = 2;
  inline const ::std::string& msginfo() const;
  inline void set_msginfo(const ::std::string& value);
  inline void set_msginfo(const char* value);
  inline void set_msginfo(const void* value, size_t size);
  inline ::std::string* mutable_msginfo();
  inline ::std::string* release_msginfo();
  inline void set_allocated_msginfo(::std::string* msginfo);

  // @@protoc_insertion_point(class_scope:client2gate_protocols.msg_packet)
 private:
  inline void set_has_msgid();
  inline void clear_has_msgid();
  inline void set_has_msginfo();
  inline void clear_has_msginfo();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* msginfo_;
  ::google::protobuf::int32 msgid_;
  friend void  protobuf_AddDesc_client2gate_5fprotocol_2eproto();
  friend void protobuf_AssignDesc_client2gate_5fprotocol_2eproto();
  friend void protobuf_ShutdownFile_client2gate_5fprotocol_2eproto();

  void InitAsDefaultInstance();
  static msg_packet* default_instance_;
};
// -------------------------------------------------------------------

class packet_g2c_send_msglist : public ::google::protobuf::Message {
 public:
  packet_g2c_send_msglist();
  virtual ~packet_g2c_send_msglist();

  packet_g2c_send_msglist(const packet_g2c_send_msglist& from);

  inline packet_g2c_send_msglist& operator=(const packet_g2c_send_msglist& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const packet_g2c_send_msglist& default_instance();

  void Swap(packet_g2c_send_msglist* other);

  // implements Message ----------------------------------------------

  packet_g2c_send_msglist* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const packet_g2c_send_msglist& from);
  void MergeFrom(const packet_g2c_send_msglist& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .client2gate_protocols.e_server_msg_type packet_id = 1 [default = e_mst_g2c_send_msglist];
  inline bool has_packet_id() const;
  inline void clear_packet_id();
  static const int kPacketIdFieldNumber = 1;
  inline ::client2gate_protocols::e_server_msg_type packet_id() const;
  inline void set_packet_id(::client2gate_protocols::e_server_msg_type value);

  // repeated .client2gate_protocols.msg_packet msgpaks = 3;
  inline int msgpaks_size() const;
  inline void clear_msgpaks();
  static const int kMsgpaksFieldNumber = 3;
  inline const ::client2gate_protocols::msg_packet& msgpaks(int index) const;
  inline ::client2gate_protocols::msg_packet* mutable_msgpaks(int index);
  inline ::client2gate_protocols::msg_packet* add_msgpaks();
  inline const ::google::protobuf::RepeatedPtrField< ::client2gate_protocols::msg_packet >&
      msgpaks() const;
  inline ::google::protobuf::RepeatedPtrField< ::client2gate_protocols::msg_packet >*
      mutable_msgpaks();

  // @@protoc_insertion_point(class_scope:client2gate_protocols.packet_g2c_send_msglist)
 private:
  inline void set_has_packet_id();
  inline void clear_has_packet_id();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::client2gate_protocols::msg_packet > msgpaks_;
  int packet_id_;
  friend void  protobuf_AddDesc_client2gate_5fprotocol_2eproto();
  friend void protobuf_AssignDesc_client2gate_5fprotocol_2eproto();
  friend void protobuf_ShutdownFile_client2gate_5fprotocol_2eproto();

  void InitAsDefaultInstance();
  static packet_g2c_send_msglist* default_instance_;
};
// -------------------------------------------------------------------

class packetc2g_select_gate : public ::google::protobuf::Message {
 public:
  packetc2g_select_gate();
  virtual ~packetc2g_select_gate();

  packetc2g_select_gate(const packetc2g_select_gate& from);

  inline packetc2g_select_gate& operator=(const packetc2g_select_gate& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const packetc2g_select_gate& default_instance();

  void Swap(packetc2g_select_gate* other);

  // implements Message ----------------------------------------------

  packetc2g_select_gate* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const packetc2g_select_gate& from);
  void MergeFrom(const packetc2g_select_gate& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .client2gate_protocols.e_server_msg_type packet_id = 1 [default = e_mst_c2g_select_gate];
  inline bool has_packet_id() const;
  inline void clear_packet_id();
  static const int kPacketIdFieldNumber = 1;
  inline ::client2gate_protocols::e_server_msg_type packet_id() const;
  inline void set_packet_id(::client2gate_protocols::e_server_msg_type value);

  // @@protoc_insertion_point(class_scope:client2gate_protocols.packetc2g_select_gate)
 private:
  inline void set_has_packet_id();
  inline void clear_has_packet_id();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  int packet_id_;
  friend void  protobuf_AddDesc_client2gate_5fprotocol_2eproto();
  friend void protobuf_AssignDesc_client2gate_5fprotocol_2eproto();
  friend void protobuf_ShutdownFile_client2gate_5fprotocol_2eproto();

  void InitAsDefaultInstance();
  static packetc2g_select_gate* default_instance_;
};
// -------------------------------------------------------------------

class packetg2c_select_gate_result : public ::google::protobuf::Message {
 public:
  packetg2c_select_gate_result();
  virtual ~packetg2c_select_gate_result();

  packetg2c_select_gate_result(const packetg2c_select_gate_result& from);

  inline packetg2c_select_gate_result& operator=(const packetg2c_select_gate_result& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const packetg2c_select_gate_result& default_instance();

  void Swap(packetg2c_select_gate_result* other);

  // implements Message ----------------------------------------------

  packetg2c_select_gate_result* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const packetg2c_select_gate_result& from);
  void MergeFrom(const packetg2c_select_gate_result& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .client2gate_protocols.e_server_msg_type packet_id = 1 [default = e_mst_g2c_select_gate_result];
  inline bool has_packet_id() const;
  inline void clear_packet_id();
  static const int kPacketIdFieldNumber = 1;
  inline ::client2gate_protocols::e_server_msg_type packet_id() const;
  inline void set_packet_id(::client2gate_protocols::e_server_msg_type value);

  // optional .msg_type_def.e_msg_result_def result = 2 [default = e_rmt_success];
  inline bool has_result() const;
  inline void clear_result();
  static const int kResultFieldNumber = 2;
  inline ::msg_type_def::e_msg_result_def result() const;
  inline void set_result(::msg_type_def::e_msg_result_def value);

  // optional string new_ip = 3;
  inline bool has_new_ip() const;
  inline void clear_new_ip();
  static const int kNewIpFieldNumber = 3;
  inline const ::std::string& new_ip() const;
  inline void set_new_ip(const ::std::string& value);
  inline void set_new_ip(const char* value);
  inline void set_new_ip(const char* value, size_t size);
  inline ::std::string* mutable_new_ip();
  inline ::std::string* release_new_ip();
  inline void set_allocated_new_ip(::std::string* new_ip);

  // optional int32 new_port = 4;
  inline bool has_new_port() const;
  inline void clear_new_port();
  static const int kNewPortFieldNumber = 4;
  inline ::google::protobuf::int32 new_port() const;
  inline void set_new_port(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:client2gate_protocols.packetg2c_select_gate_result)
 private:
  inline void set_has_packet_id();
  inline void clear_has_packet_id();
  inline void set_has_result();
  inline void clear_has_result();
  inline void set_has_new_ip();
  inline void clear_has_new_ip();
  inline void set_has_new_port();
  inline void clear_has_new_port();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  int packet_id_;
  int result_;
  ::std::string* new_ip_;
  ::google::protobuf::int32 new_port_;
  friend void  protobuf_AddDesc_client2gate_5fprotocol_2eproto();
  friend void protobuf_AssignDesc_client2gate_5fprotocol_2eproto();
  friend void protobuf_ShutdownFile_client2gate_5fprotocol_2eproto();

  void InitAsDefaultInstance();
  static packetg2c_select_gate_result* default_instance_;
};
// ===================================================================


// ===================================================================

// packetc2g_heartbeat

// optional .client2gate_protocols.e_server_msg_type packet_id = 1 [default = e_mst_c2g_heartbeat];
inline bool packetc2g_heartbeat::has_packet_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void packetc2g_heartbeat::set_has_packet_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void packetc2g_heartbeat::clear_has_packet_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void packetc2g_heartbeat::clear_packet_id() {
  packet_id_ = 301;
  clear_has_packet_id();
}
inline ::client2gate_protocols::e_server_msg_type packetc2g_heartbeat::packet_id() const {
  // @@protoc_insertion_point(field_get:client2gate_protocols.packetc2g_heartbeat.packet_id)
  return static_cast< ::client2gate_protocols::e_server_msg_type >(packet_id_);
}
inline void packetc2g_heartbeat::set_packet_id(::client2gate_protocols::e_server_msg_type value) {
  assert(::client2gate_protocols::e_server_msg_type_IsValid(value));
  set_has_packet_id();
  packet_id_ = value;
  // @@protoc_insertion_point(field_set:client2gate_protocols.packetc2g_heartbeat.packet_id)
}

// -------------------------------------------------------------------

// msg_packet

// optional int32 msgid = 1;
inline bool msg_packet::has_msgid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void msg_packet::set_has_msgid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void msg_packet::clear_has_msgid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void msg_packet::clear_msgid() {
  msgid_ = 0;
  clear_has_msgid();
}
inline ::google::protobuf::int32 msg_packet::msgid() const {
  // @@protoc_insertion_point(field_get:client2gate_protocols.msg_packet.msgid)
  return msgid_;
}
inline void msg_packet::set_msgid(::google::protobuf::int32 value) {
  set_has_msgid();
  msgid_ = value;
  // @@protoc_insertion_point(field_set:client2gate_protocols.msg_packet.msgid)
}

// optional bytes msginfo = 2;
inline bool msg_packet::has_msginfo() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void msg_packet::set_has_msginfo() {
  _has_bits_[0] |= 0x00000002u;
}
inline void msg_packet::clear_has_msginfo() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void msg_packet::clear_msginfo() {
  if (msginfo_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    msginfo_->clear();
  }
  clear_has_msginfo();
}
inline const ::std::string& msg_packet::msginfo() const {
  // @@protoc_insertion_point(field_get:client2gate_protocols.msg_packet.msginfo)
  return *msginfo_;
}
inline void msg_packet::set_msginfo(const ::std::string& value) {
  set_has_msginfo();
  if (msginfo_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    msginfo_ = new ::std::string;
  }
  msginfo_->assign(value);
  // @@protoc_insertion_point(field_set:client2gate_protocols.msg_packet.msginfo)
}
inline void msg_packet::set_msginfo(const char* value) {
  set_has_msginfo();
  if (msginfo_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    msginfo_ = new ::std::string;
  }
  msginfo_->assign(value);
  // @@protoc_insertion_point(field_set_char:client2gate_protocols.msg_packet.msginfo)
}
inline void msg_packet::set_msginfo(const void* value, size_t size) {
  set_has_msginfo();
  if (msginfo_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    msginfo_ = new ::std::string;
  }
  msginfo_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:client2gate_protocols.msg_packet.msginfo)
}
inline ::std::string* msg_packet::mutable_msginfo() {
  set_has_msginfo();
  if (msginfo_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    msginfo_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:client2gate_protocols.msg_packet.msginfo)
  return msginfo_;
}
inline ::std::string* msg_packet::release_msginfo() {
  clear_has_msginfo();
  if (msginfo_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = msginfo_;
    msginfo_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void msg_packet::set_allocated_msginfo(::std::string* msginfo) {
  if (msginfo_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete msginfo_;
  }
  if (msginfo) {
    set_has_msginfo();
    msginfo_ = msginfo;
  } else {
    clear_has_msginfo();
    msginfo_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:client2gate_protocols.msg_packet.msginfo)
}

// -------------------------------------------------------------------

// packet_g2c_send_msglist

// optional .client2gate_protocols.e_server_msg_type packet_id = 1 [default = e_mst_g2c_send_msglist];
inline bool packet_g2c_send_msglist::has_packet_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void packet_g2c_send_msglist::set_has_packet_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void packet_g2c_send_msglist::clear_has_packet_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void packet_g2c_send_msglist::clear_packet_id() {
  packet_id_ = 402;
  clear_has_packet_id();
}
inline ::client2gate_protocols::e_server_msg_type packet_g2c_send_msglist::packet_id() const {
  // @@protoc_insertion_point(field_get:client2gate_protocols.packet_g2c_send_msglist.packet_id)
  return static_cast< ::client2gate_protocols::e_server_msg_type >(packet_id_);
}
inline void packet_g2c_send_msglist::set_packet_id(::client2gate_protocols::e_server_msg_type value) {
  assert(::client2gate_protocols::e_server_msg_type_IsValid(value));
  set_has_packet_id();
  packet_id_ = value;
  // @@protoc_insertion_point(field_set:client2gate_protocols.packet_g2c_send_msglist.packet_id)
}

// repeated .client2gate_protocols.msg_packet msgpaks = 3;
inline int packet_g2c_send_msglist::msgpaks_size() const {
  return msgpaks_.size();
}
inline void packet_g2c_send_msglist::clear_msgpaks() {
  msgpaks_.Clear();
}
inline const ::client2gate_protocols::msg_packet& packet_g2c_send_msglist::msgpaks(int index) const {
  // @@protoc_insertion_point(field_get:client2gate_protocols.packet_g2c_send_msglist.msgpaks)
  return msgpaks_.Get(index);
}
inline ::client2gate_protocols::msg_packet* packet_g2c_send_msglist::mutable_msgpaks(int index) {
  // @@protoc_insertion_point(field_mutable:client2gate_protocols.packet_g2c_send_msglist.msgpaks)
  return msgpaks_.Mutable(index);
}
inline ::client2gate_protocols::msg_packet* packet_g2c_send_msglist::add_msgpaks() {
  // @@protoc_insertion_point(field_add:client2gate_protocols.packet_g2c_send_msglist.msgpaks)
  return msgpaks_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::client2gate_protocols::msg_packet >&
packet_g2c_send_msglist::msgpaks() const {
  // @@protoc_insertion_point(field_list:client2gate_protocols.packet_g2c_send_msglist.msgpaks)
  return msgpaks_;
}
inline ::google::protobuf::RepeatedPtrField< ::client2gate_protocols::msg_packet >*
packet_g2c_send_msglist::mutable_msgpaks() {
  // @@protoc_insertion_point(field_mutable_list:client2gate_protocols.packet_g2c_send_msglist.msgpaks)
  return &msgpaks_;
}

// -------------------------------------------------------------------

// packetc2g_select_gate

// optional .client2gate_protocols.e_server_msg_type packet_id = 1 [default = e_mst_c2g_select_gate];
inline bool packetc2g_select_gate::has_packet_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void packetc2g_select_gate::set_has_packet_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void packetc2g_select_gate::clear_has_packet_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void packetc2g_select_gate::clear_packet_id() {
  packet_id_ = 302;
  clear_has_packet_id();
}
inline ::client2gate_protocols::e_server_msg_type packetc2g_select_gate::packet_id() const {
  // @@protoc_insertion_point(field_get:client2gate_protocols.packetc2g_select_gate.packet_id)
  return static_cast< ::client2gate_protocols::e_server_msg_type >(packet_id_);
}
inline void packetc2g_select_gate::set_packet_id(::client2gate_protocols::e_server_msg_type value) {
  assert(::client2gate_protocols::e_server_msg_type_IsValid(value));
  set_has_packet_id();
  packet_id_ = value;
  // @@protoc_insertion_point(field_set:client2gate_protocols.packetc2g_select_gate.packet_id)
}

// -------------------------------------------------------------------

// packetg2c_select_gate_result

// optional .client2gate_protocols.e_server_msg_type packet_id = 1 [default = e_mst_g2c_select_gate_result];
inline bool packetg2c_select_gate_result::has_packet_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void packetg2c_select_gate_result::set_has_packet_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void packetg2c_select_gate_result::clear_has_packet_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void packetg2c_select_gate_result::clear_packet_id() {
  packet_id_ = 401;
  clear_has_packet_id();
}
inline ::client2gate_protocols::e_server_msg_type packetg2c_select_gate_result::packet_id() const {
  // @@protoc_insertion_point(field_get:client2gate_protocols.packetg2c_select_gate_result.packet_id)
  return static_cast< ::client2gate_protocols::e_server_msg_type >(packet_id_);
}
inline void packetg2c_select_gate_result::set_packet_id(::client2gate_protocols::e_server_msg_type value) {
  assert(::client2gate_protocols::e_server_msg_type_IsValid(value));
  set_has_packet_id();
  packet_id_ = value;
  // @@protoc_insertion_point(field_set:client2gate_protocols.packetg2c_select_gate_result.packet_id)
}

// optional .msg_type_def.e_msg_result_def result = 2 [default = e_rmt_success];
inline bool packetg2c_select_gate_result::has_result() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void packetg2c_select_gate_result::set_has_result() {
  _has_bits_[0] |= 0x00000002u;
}
inline void packetg2c_select_gate_result::clear_has_result() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void packetg2c_select_gate_result::clear_result() {
  result_ = 1;
  clear_has_result();
}
inline ::msg_type_def::e_msg_result_def packetg2c_select_gate_result::result() const {
  // @@protoc_insertion_point(field_get:client2gate_protocols.packetg2c_select_gate_result.result)
  return static_cast< ::msg_type_def::e_msg_result_def >(result_);
}
inline void packetg2c_select_gate_result::set_result(::msg_type_def::e_msg_result_def value) {
  assert(::msg_type_def::e_msg_result_def_IsValid(value));
  set_has_result();
  result_ = value;
  // @@protoc_insertion_point(field_set:client2gate_protocols.packetg2c_select_gate_result.result)
}

// optional string new_ip = 3;
inline bool packetg2c_select_gate_result::has_new_ip() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void packetg2c_select_gate_result::set_has_new_ip() {
  _has_bits_[0] |= 0x00000004u;
}
inline void packetg2c_select_gate_result::clear_has_new_ip() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void packetg2c_select_gate_result::clear_new_ip() {
  if (new_ip_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    new_ip_->clear();
  }
  clear_has_new_ip();
}
inline const ::std::string& packetg2c_select_gate_result::new_ip() const {
  // @@protoc_insertion_point(field_get:client2gate_protocols.packetg2c_select_gate_result.new_ip)
  return *new_ip_;
}
inline void packetg2c_select_gate_result::set_new_ip(const ::std::string& value) {
  set_has_new_ip();
  if (new_ip_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    new_ip_ = new ::std::string;
  }
  new_ip_->assign(value);
  // @@protoc_insertion_point(field_set:client2gate_protocols.packetg2c_select_gate_result.new_ip)
}
inline void packetg2c_select_gate_result::set_new_ip(const char* value) {
  set_has_new_ip();
  if (new_ip_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    new_ip_ = new ::std::string;
  }
  new_ip_->assign(value);
  // @@protoc_insertion_point(field_set_char:client2gate_protocols.packetg2c_select_gate_result.new_ip)
}
inline void packetg2c_select_gate_result::set_new_ip(const char* value, size_t size) {
  set_has_new_ip();
  if (new_ip_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    new_ip_ = new ::std::string;
  }
  new_ip_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:client2gate_protocols.packetg2c_select_gate_result.new_ip)
}
inline ::std::string* packetg2c_select_gate_result::mutable_new_ip() {
  set_has_new_ip();
  if (new_ip_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    new_ip_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:client2gate_protocols.packetg2c_select_gate_result.new_ip)
  return new_ip_;
}
inline ::std::string* packetg2c_select_gate_result::release_new_ip() {
  clear_has_new_ip();
  if (new_ip_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = new_ip_;
    new_ip_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void packetg2c_select_gate_result::set_allocated_new_ip(::std::string* new_ip) {
  if (new_ip_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete new_ip_;
  }
  if (new_ip) {
    set_has_new_ip();
    new_ip_ = new_ip;
  } else {
    clear_has_new_ip();
    new_ip_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:client2gate_protocols.packetg2c_select_gate_result.new_ip)
}

// optional int32 new_port = 4;
inline bool packetg2c_select_gate_result::has_new_port() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void packetg2c_select_gate_result::set_has_new_port() {
  _has_bits_[0] |= 0x00000008u;
}
inline void packetg2c_select_gate_result::clear_has_new_port() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void packetg2c_select_gate_result::clear_new_port() {
  new_port_ = 0;
  clear_has_new_port();
}
inline ::google::protobuf::int32 packetg2c_select_gate_result::new_port() const {
  // @@protoc_insertion_point(field_get:client2gate_protocols.packetg2c_select_gate_result.new_port)
  return new_port_;
}
inline void packetg2c_select_gate_result::set_new_port(::google::protobuf::int32 value) {
  set_has_new_port();
  new_port_ = value;
  // @@protoc_insertion_point(field_set:client2gate_protocols.packetg2c_select_gate_result.new_port)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace client2gate_protocols

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_client2gate_5fprotocol_2eproto__INCLUDED
