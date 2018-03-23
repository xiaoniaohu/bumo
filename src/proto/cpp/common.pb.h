// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: common.proto

#ifndef PROTOBUF_common_2eproto__INCLUDED
#define PROTOBUF_common_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protocol {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_common_2eproto();
void protobuf_AssignDesc_common_2eproto();
void protobuf_ShutdownFile_common_2eproto();

class KeyPair;
class LedgerUpgrade;
class Ping;
class Pong;
class Signature;
class WsMessage;

enum ERRORCODE {
  ERRCODE_SUCCESS = 0,
  ERRCODE_INTERNAL_ERROR = 1,
  ERRCODE_INVALID_PARAMETER = 2,
  ERRCODE_ALREADY_EXIST = 3,
  ERRCODE_NOT_EXIST = 4,
  ERRCODE_TX_TIMEOUT = 5,
  ERRCODE_ACCESS_DENIED = 6,
  ERRCODE_EXPR_CONDITION_RESULT_FALSE = 20,
  ERRCODE_EXPR_CONDITION_SYNTAX_ERROR = 21,
  ERRCODE_INVALID_PUBKEY = 90,
  ERRCODE_INVALID_PRIKEY = 91,
  ERRCODE_ASSET_INVALID = 92,
  ERRCODE_INVALID_SIGNATURE = 93,
  ERRCODE_INVALID_ADDRESS = 94,
  ERRCODE_MISSING_OPERATIONS = 97,
  ERRCODE_BAD_SEQUENCE = 99,
  ERRCODE_ACCOUNT_LOW_RESERVE = 100,
  ERRCODE_ACCOUNT_SOURCEDEST_EQUAL = 101,
  ERRCODE_ACCOUNT_DEST_EXIST = 102,
  ERRCODE_ACCOUNT_NOT_EXIST = 103,
  ERRCODE_ACCOUNT_ASSET_LOW_RESERVE = 104,
  ERRCODE_ACCOUNT_ASSET_AMOUNT_TOO_LARGE = 105,
  ERRCODE_ACCOUNT_INIT_LOW_RESERVE = 106,
  ERRCODE_FEE_NOT_ENOUGH = 111,
  ERRCODE_OUT_OF_TXCACHE = 114,
  ERRCODE_WEIGHT_NOT_VALID = 120,
  ERRCODE_THRESHOLD_NOT_VALID = 121,
  ERRCODE_INVALID_DATAVERSION = 144,
  ERRCODE_TX_SIZE_TOO_BIG = 146,
  ERRCODE_CONTRACT_EXECUTE_FAIL = 151,
  ERRCODE_CONTRACT_SYNTAX_ERROR = 152,
  ERRCODE_CONTRACT_TOO_MANY_RECURSION = 153,
  ERRCODE_CONTRACT_TOO_MANY_TRANSACTIONS = 154,
  ERRCODE_CONTRACT_EXECUTE_EXPIRED = 155,
  ERRCODE_TX_INSERT_QUEUE_FAIL = 160,
  ERRORCODE_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  ERRORCODE_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool ERRORCODE_IsValid(int value);
const ERRORCODE ERRORCODE_MIN = ERRCODE_SUCCESS;
const ERRORCODE ERRORCODE_MAX = ERRCODE_TX_INSERT_QUEUE_FAIL;
const int ERRORCODE_ARRAYSIZE = ERRORCODE_MAX + 1;

const ::google::protobuf::EnumDescriptor* ERRORCODE_descriptor();
inline const ::std::string& ERRORCODE_Name(ERRORCODE value) {
  return ::google::protobuf::internal::NameOfEnum(
    ERRORCODE_descriptor(), value);
}
inline bool ERRORCODE_Parse(
    const ::std::string& name, ERRORCODE* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ERRORCODE>(
    ERRORCODE_descriptor(), name, value);
}
// ===================================================================

class KeyPair : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:protocol.KeyPair) */ {
 public:
  KeyPair();
  virtual ~KeyPair();

  KeyPair(const KeyPair& from);

  inline KeyPair& operator=(const KeyPair& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const KeyPair& default_instance();

  void Swap(KeyPair* other);

  // implements Message ----------------------------------------------

  inline KeyPair* New() const { return New(NULL); }

  KeyPair* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const KeyPair& from);
  void MergeFrom(const KeyPair& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(KeyPair* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string key = 1;
  void clear_key();
  static const int kKeyFieldNumber = 1;
  const ::std::string& key() const;
  void set_key(const ::std::string& value);
  void set_key(const char* value);
  void set_key(const char* value, size_t size);
  ::std::string* mutable_key();
  ::std::string* release_key();
  void set_allocated_key(::std::string* key);

  // optional string value = 2;
  void clear_value();
  static const int kValueFieldNumber = 2;
  const ::std::string& value() const;
  void set_value(const ::std::string& value);
  void set_value(const char* value);
  void set_value(const char* value, size_t size);
  ::std::string* mutable_value();
  ::std::string* release_value();
  void set_allocated_value(::std::string* value);

  // optional int64 version = 3;
  void clear_version();
  static const int kVersionFieldNumber = 3;
  ::google::protobuf::int64 version() const;
  void set_version(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:protocol.KeyPair)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr key_;
  ::google::protobuf::internal::ArenaStringPtr value_;
  ::google::protobuf::int64 version_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_common_2eproto();
  friend void protobuf_AssignDesc_common_2eproto();
  friend void protobuf_ShutdownFile_common_2eproto();

  void InitAsDefaultInstance();
  static KeyPair* default_instance_;
};
// -------------------------------------------------------------------

class Signature : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:protocol.Signature) */ {
 public:
  Signature();
  virtual ~Signature();

  Signature(const Signature& from);

  inline Signature& operator=(const Signature& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Signature& default_instance();

  void Swap(Signature* other);

  // implements Message ----------------------------------------------

  inline Signature* New() const { return New(NULL); }

  Signature* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Signature& from);
  void MergeFrom(const Signature& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Signature* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string public_key = 1;
  void clear_public_key();
  static const int kPublicKeyFieldNumber = 1;
  const ::std::string& public_key() const;
  void set_public_key(const ::std::string& value);
  void set_public_key(const char* value);
  void set_public_key(const char* value, size_t size);
  ::std::string* mutable_public_key();
  ::std::string* release_public_key();
  void set_allocated_public_key(::std::string* public_key);

  // optional bytes sign_data = 2;
  void clear_sign_data();
  static const int kSignDataFieldNumber = 2;
  const ::std::string& sign_data() const;
  void set_sign_data(const ::std::string& value);
  void set_sign_data(const char* value);
  void set_sign_data(const void* value, size_t size);
  ::std::string* mutable_sign_data();
  ::std::string* release_sign_data();
  void set_allocated_sign_data(::std::string* sign_data);

  // @@protoc_insertion_point(class_scope:protocol.Signature)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr public_key_;
  ::google::protobuf::internal::ArenaStringPtr sign_data_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_common_2eproto();
  friend void protobuf_AssignDesc_common_2eproto();
  friend void protobuf_ShutdownFile_common_2eproto();

  void InitAsDefaultInstance();
  static Signature* default_instance_;
};
// -------------------------------------------------------------------

class LedgerUpgrade : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:protocol.LedgerUpgrade) */ {
 public:
  LedgerUpgrade();
  virtual ~LedgerUpgrade();

  LedgerUpgrade(const LedgerUpgrade& from);

  inline LedgerUpgrade& operator=(const LedgerUpgrade& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const LedgerUpgrade& default_instance();

  void Swap(LedgerUpgrade* other);

  // implements Message ----------------------------------------------

  inline LedgerUpgrade* New() const { return New(NULL); }

  LedgerUpgrade* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const LedgerUpgrade& from);
  void MergeFrom(const LedgerUpgrade& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(LedgerUpgrade* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int64 new_ledger_version = 1;
  void clear_new_ledger_version();
  static const int kNewLedgerVersionFieldNumber = 1;
  ::google::protobuf::int64 new_ledger_version() const;
  void set_new_ledger_version(::google::protobuf::int64 value);

  // optional string new_validator = 2;
  void clear_new_validator();
  static const int kNewValidatorFieldNumber = 2;
  const ::std::string& new_validator() const;
  void set_new_validator(const ::std::string& value);
  void set_new_validator(const char* value);
  void set_new_validator(const char* value, size_t size);
  ::std::string* mutable_new_validator();
  ::std::string* release_new_validator();
  void set_allocated_new_validator(::std::string* new_validator);

  // @@protoc_insertion_point(class_scope:protocol.LedgerUpgrade)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::int64 new_ledger_version_;
  ::google::protobuf::internal::ArenaStringPtr new_validator_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_common_2eproto();
  friend void protobuf_AssignDesc_common_2eproto();
  friend void protobuf_ShutdownFile_common_2eproto();

  void InitAsDefaultInstance();
  static LedgerUpgrade* default_instance_;
};
// -------------------------------------------------------------------

class WsMessage : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:protocol.WsMessage) */ {
 public:
  WsMessage();
  virtual ~WsMessage();

  WsMessage(const WsMessage& from);

  inline WsMessage& operator=(const WsMessage& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const WsMessage& default_instance();

  void Swap(WsMessage* other);

  // implements Message ----------------------------------------------

  inline WsMessage* New() const { return New(NULL); }

  WsMessage* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const WsMessage& from);
  void MergeFrom(const WsMessage& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(WsMessage* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int64 type = 1;
  void clear_type();
  static const int kTypeFieldNumber = 1;
  ::google::protobuf::int64 type() const;
  void set_type(::google::protobuf::int64 value);

  // optional bool request = 2;
  void clear_request();
  static const int kRequestFieldNumber = 2;
  bool request() const;
  void set_request(bool value);

  // optional int64 sequence = 3;
  void clear_sequence();
  static const int kSequenceFieldNumber = 3;
  ::google::protobuf::int64 sequence() const;
  void set_sequence(::google::protobuf::int64 value);

  // optional bytes data = 4;
  void clear_data();
  static const int kDataFieldNumber = 4;
  const ::std::string& data() const;
  void set_data(const ::std::string& value);
  void set_data(const char* value);
  void set_data(const void* value, size_t size);
  ::std::string* mutable_data();
  ::std::string* release_data();
  void set_allocated_data(::std::string* data);

  // @@protoc_insertion_point(class_scope:protocol.WsMessage)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::int64 type_;
  ::google::protobuf::int64 sequence_;
  ::google::protobuf::internal::ArenaStringPtr data_;
  bool request_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_common_2eproto();
  friend void protobuf_AssignDesc_common_2eproto();
  friend void protobuf_ShutdownFile_common_2eproto();

  void InitAsDefaultInstance();
  static WsMessage* default_instance_;
};
// -------------------------------------------------------------------

class Ping : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:protocol.Ping) */ {
 public:
  Ping();
  virtual ~Ping();

  Ping(const Ping& from);

  inline Ping& operator=(const Ping& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Ping& default_instance();

  void Swap(Ping* other);

  // implements Message ----------------------------------------------

  inline Ping* New() const { return New(NULL); }

  Ping* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Ping& from);
  void MergeFrom(const Ping& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Ping* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int64 nonce = 1;
  void clear_nonce();
  static const int kNonceFieldNumber = 1;
  ::google::protobuf::int64 nonce() const;
  void set_nonce(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:protocol.Ping)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::int64 nonce_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_common_2eproto();
  friend void protobuf_AssignDesc_common_2eproto();
  friend void protobuf_ShutdownFile_common_2eproto();

  void InitAsDefaultInstance();
  static Ping* default_instance_;
};
// -------------------------------------------------------------------

class Pong : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:protocol.Pong) */ {
 public:
  Pong();
  virtual ~Pong();

  Pong(const Pong& from);

  inline Pong& operator=(const Pong& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Pong& default_instance();

  void Swap(Pong* other);

  // implements Message ----------------------------------------------

  inline Pong* New() const { return New(NULL); }

  Pong* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Pong& from);
  void MergeFrom(const Pong& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Pong* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int64 nonce = 1;
  void clear_nonce();
  static const int kNonceFieldNumber = 1;
  ::google::protobuf::int64 nonce() const;
  void set_nonce(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:protocol.Pong)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::int64 nonce_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_common_2eproto();
  friend void protobuf_AssignDesc_common_2eproto();
  friend void protobuf_ShutdownFile_common_2eproto();

  void InitAsDefaultInstance();
  static Pong* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// KeyPair

// optional string key = 1;
inline void KeyPair::clear_key() {
  key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& KeyPair::key() const {
  // @@protoc_insertion_point(field_get:protocol.KeyPair.key)
  return key_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void KeyPair::set_key(const ::std::string& value) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.KeyPair.key)
}
inline void KeyPair::set_key(const char* value) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.KeyPair.key)
}
inline void KeyPair::set_key(const char* value, size_t size) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.KeyPair.key)
}
inline ::std::string* KeyPair::mutable_key() {
  
  // @@protoc_insertion_point(field_mutable:protocol.KeyPair.key)
  return key_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* KeyPair::release_key() {
  // @@protoc_insertion_point(field_release:protocol.KeyPair.key)
  
  return key_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void KeyPair::set_allocated_key(::std::string* key) {
  if (key != NULL) {
    
  } else {
    
  }
  key_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), key);
  // @@protoc_insertion_point(field_set_allocated:protocol.KeyPair.key)
}

// optional string value = 2;
inline void KeyPair::clear_value() {
  value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& KeyPair::value() const {
  // @@protoc_insertion_point(field_get:protocol.KeyPair.value)
  return value_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void KeyPair::set_value(const ::std::string& value) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.KeyPair.value)
}
inline void KeyPair::set_value(const char* value) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.KeyPair.value)
}
inline void KeyPair::set_value(const char* value, size_t size) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.KeyPair.value)
}
inline ::std::string* KeyPair::mutable_value() {
  
  // @@protoc_insertion_point(field_mutable:protocol.KeyPair.value)
  return value_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* KeyPair::release_value() {
  // @@protoc_insertion_point(field_release:protocol.KeyPair.value)
  
  return value_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void KeyPair::set_allocated_value(::std::string* value) {
  if (value != NULL) {
    
  } else {
    
  }
  value_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set_allocated:protocol.KeyPair.value)
}

// optional int64 version = 3;
inline void KeyPair::clear_version() {
  version_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 KeyPair::version() const {
  // @@protoc_insertion_point(field_get:protocol.KeyPair.version)
  return version_;
}
inline void KeyPair::set_version(::google::protobuf::int64 value) {
  
  version_ = value;
  // @@protoc_insertion_point(field_set:protocol.KeyPair.version)
}

// -------------------------------------------------------------------

// Signature

// optional string public_key = 1;
inline void Signature::clear_public_key() {
  public_key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Signature::public_key() const {
  // @@protoc_insertion_point(field_get:protocol.Signature.public_key)
  return public_key_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Signature::set_public_key(const ::std::string& value) {
  
  public_key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.Signature.public_key)
}
inline void Signature::set_public_key(const char* value) {
  
  public_key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.Signature.public_key)
}
inline void Signature::set_public_key(const char* value, size_t size) {
  
  public_key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.Signature.public_key)
}
inline ::std::string* Signature::mutable_public_key() {
  
  // @@protoc_insertion_point(field_mutable:protocol.Signature.public_key)
  return public_key_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Signature::release_public_key() {
  // @@protoc_insertion_point(field_release:protocol.Signature.public_key)
  
  return public_key_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Signature::set_allocated_public_key(::std::string* public_key) {
  if (public_key != NULL) {
    
  } else {
    
  }
  public_key_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), public_key);
  // @@protoc_insertion_point(field_set_allocated:protocol.Signature.public_key)
}

// optional bytes sign_data = 2;
inline void Signature::clear_sign_data() {
  sign_data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Signature::sign_data() const {
  // @@protoc_insertion_point(field_get:protocol.Signature.sign_data)
  return sign_data_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Signature::set_sign_data(const ::std::string& value) {
  
  sign_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.Signature.sign_data)
}
inline void Signature::set_sign_data(const char* value) {
  
  sign_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.Signature.sign_data)
}
inline void Signature::set_sign_data(const void* value, size_t size) {
  
  sign_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.Signature.sign_data)
}
inline ::std::string* Signature::mutable_sign_data() {
  
  // @@protoc_insertion_point(field_mutable:protocol.Signature.sign_data)
  return sign_data_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Signature::release_sign_data() {
  // @@protoc_insertion_point(field_release:protocol.Signature.sign_data)
  
  return sign_data_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Signature::set_allocated_sign_data(::std::string* sign_data) {
  if (sign_data != NULL) {
    
  } else {
    
  }
  sign_data_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), sign_data);
  // @@protoc_insertion_point(field_set_allocated:protocol.Signature.sign_data)
}

// -------------------------------------------------------------------

// LedgerUpgrade

// optional int64 new_ledger_version = 1;
inline void LedgerUpgrade::clear_new_ledger_version() {
  new_ledger_version_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 LedgerUpgrade::new_ledger_version() const {
  // @@protoc_insertion_point(field_get:protocol.LedgerUpgrade.new_ledger_version)
  return new_ledger_version_;
}
inline void LedgerUpgrade::set_new_ledger_version(::google::protobuf::int64 value) {
  
  new_ledger_version_ = value;
  // @@protoc_insertion_point(field_set:protocol.LedgerUpgrade.new_ledger_version)
}

// optional string new_validator = 2;
inline void LedgerUpgrade::clear_new_validator() {
  new_validator_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& LedgerUpgrade::new_validator() const {
  // @@protoc_insertion_point(field_get:protocol.LedgerUpgrade.new_validator)
  return new_validator_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LedgerUpgrade::set_new_validator(const ::std::string& value) {
  
  new_validator_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.LedgerUpgrade.new_validator)
}
inline void LedgerUpgrade::set_new_validator(const char* value) {
  
  new_validator_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.LedgerUpgrade.new_validator)
}
inline void LedgerUpgrade::set_new_validator(const char* value, size_t size) {
  
  new_validator_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.LedgerUpgrade.new_validator)
}
inline ::std::string* LedgerUpgrade::mutable_new_validator() {
  
  // @@protoc_insertion_point(field_mutable:protocol.LedgerUpgrade.new_validator)
  return new_validator_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* LedgerUpgrade::release_new_validator() {
  // @@protoc_insertion_point(field_release:protocol.LedgerUpgrade.new_validator)
  
  return new_validator_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LedgerUpgrade::set_allocated_new_validator(::std::string* new_validator) {
  if (new_validator != NULL) {
    
  } else {
    
  }
  new_validator_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), new_validator);
  // @@protoc_insertion_point(field_set_allocated:protocol.LedgerUpgrade.new_validator)
}

// -------------------------------------------------------------------

// WsMessage

// optional int64 type = 1;
inline void WsMessage::clear_type() {
  type_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 WsMessage::type() const {
  // @@protoc_insertion_point(field_get:protocol.WsMessage.type)
  return type_;
}
inline void WsMessage::set_type(::google::protobuf::int64 value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:protocol.WsMessage.type)
}

// optional bool request = 2;
inline void WsMessage::clear_request() {
  request_ = false;
}
inline bool WsMessage::request() const {
  // @@protoc_insertion_point(field_get:protocol.WsMessage.request)
  return request_;
}
inline void WsMessage::set_request(bool value) {
  
  request_ = value;
  // @@protoc_insertion_point(field_set:protocol.WsMessage.request)
}

// optional int64 sequence = 3;
inline void WsMessage::clear_sequence() {
  sequence_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 WsMessage::sequence() const {
  // @@protoc_insertion_point(field_get:protocol.WsMessage.sequence)
  return sequence_;
}
inline void WsMessage::set_sequence(::google::protobuf::int64 value) {
  
  sequence_ = value;
  // @@protoc_insertion_point(field_set:protocol.WsMessage.sequence)
}

// optional bytes data = 4;
inline void WsMessage::clear_data() {
  data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& WsMessage::data() const {
  // @@protoc_insertion_point(field_get:protocol.WsMessage.data)
  return data_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void WsMessage::set_data(const ::std::string& value) {
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.WsMessage.data)
}
inline void WsMessage::set_data(const char* value) {
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.WsMessage.data)
}
inline void WsMessage::set_data(const void* value, size_t size) {
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.WsMessage.data)
}
inline ::std::string* WsMessage::mutable_data() {
  
  // @@protoc_insertion_point(field_mutable:protocol.WsMessage.data)
  return data_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* WsMessage::release_data() {
  // @@protoc_insertion_point(field_release:protocol.WsMessage.data)
  
  return data_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void WsMessage::set_allocated_data(::std::string* data) {
  if (data != NULL) {
    
  } else {
    
  }
  data_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), data);
  // @@protoc_insertion_point(field_set_allocated:protocol.WsMessage.data)
}

// -------------------------------------------------------------------

// Ping

// optional int64 nonce = 1;
inline void Ping::clear_nonce() {
  nonce_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 Ping::nonce() const {
  // @@protoc_insertion_point(field_get:protocol.Ping.nonce)
  return nonce_;
}
inline void Ping::set_nonce(::google::protobuf::int64 value) {
  
  nonce_ = value;
  // @@protoc_insertion_point(field_set:protocol.Ping.nonce)
}

// -------------------------------------------------------------------

// Pong

// optional int64 nonce = 1;
inline void Pong::clear_nonce() {
  nonce_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 Pong::nonce() const {
  // @@protoc_insertion_point(field_get:protocol.Pong.nonce)
  return nonce_;
}
inline void Pong::set_nonce(::google::protobuf::int64 value) {
  
  nonce_ = value;
  // @@protoc_insertion_point(field_set:protocol.Pong.nonce)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace protocol

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::protocol::ERRORCODE> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::protocol::ERRORCODE>() {
  return ::protocol::ERRORCODE_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_common_2eproto__INCLUDED
