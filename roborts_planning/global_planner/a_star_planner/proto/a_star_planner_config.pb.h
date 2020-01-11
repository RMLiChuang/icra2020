// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: a_star_planner_config.proto

#ifndef PROTOBUF_a_5fstar_5fplanner_5fconfig_2eproto__INCLUDED
#define PROTOBUF_a_5fstar_5fplanner_5fconfig_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)

namespace roborts_global_planner {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_a_5fstar_5fplanner_5fconfig_2eproto();
void protobuf_AssignDesc_a_5fstar_5fplanner_5fconfig_2eproto();
void protobuf_ShutdownFile_a_5fstar_5fplanner_5fconfig_2eproto();

class AStarPlannerConfig;

// ===================================================================

class AStarPlannerConfig : public ::google::protobuf::Message {
 public:
  AStarPlannerConfig();
  virtual ~AStarPlannerConfig();

  AStarPlannerConfig(const AStarPlannerConfig& from);

  inline AStarPlannerConfig& operator=(const AStarPlannerConfig& from) {
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
  static const AStarPlannerConfig& default_instance();

  void Swap(AStarPlannerConfig* other);

  // implements Message ----------------------------------------------

  AStarPlannerConfig* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const AStarPlannerConfig& from);
  void MergeFrom(const AStarPlannerConfig& from);
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

  // optional uint32 inaccessible_cost = 1 [default = 253];
  inline bool has_inaccessible_cost() const;
  inline void clear_inaccessible_cost();
  static const int kInaccessibleCostFieldNumber = 1;
  inline ::google::protobuf::uint32 inaccessible_cost() const;
  inline void set_inaccessible_cost(::google::protobuf::uint32 value);

  // optional float heuristic_factor = 2 [default = 1];
  inline bool has_heuristic_factor() const;
  inline void clear_heuristic_factor();
  static const int kHeuristicFactorFieldNumber = 2;
  inline float heuristic_factor() const;
  inline void set_heuristic_factor(float value);

  // optional float goal_search_tolerance = 3 [default = 0.25];
  inline bool has_goal_search_tolerance() const;
  inline void clear_goal_search_tolerance();
  static const int kGoalSearchToleranceFieldNumber = 3;
  inline float goal_search_tolerance() const;
  inline void set_goal_search_tolerance(float value);

  // @@protoc_insertion_point(class_scope:roborts_global_planner.AStarPlannerConfig)
 private:
  inline void set_has_inaccessible_cost();
  inline void clear_has_inaccessible_cost();
  inline void set_has_heuristic_factor();
  inline void clear_has_heuristic_factor();
  inline void set_has_goal_search_tolerance();
  inline void clear_has_goal_search_tolerance();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::uint32 inaccessible_cost_;
  float heuristic_factor_;
  float goal_search_tolerance_;
  friend void  protobuf_AddDesc_a_5fstar_5fplanner_5fconfig_2eproto();
  friend void protobuf_AssignDesc_a_5fstar_5fplanner_5fconfig_2eproto();
  friend void protobuf_ShutdownFile_a_5fstar_5fplanner_5fconfig_2eproto();

  void InitAsDefaultInstance();
  static AStarPlannerConfig* default_instance_;
};
// ===================================================================


// ===================================================================

// AStarPlannerConfig

// optional uint32 inaccessible_cost = 1 [default = 253];
inline bool AStarPlannerConfig::has_inaccessible_cost() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void AStarPlannerConfig::set_has_inaccessible_cost() {
  _has_bits_[0] |= 0x00000001u;
}
inline void AStarPlannerConfig::clear_has_inaccessible_cost() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void AStarPlannerConfig::clear_inaccessible_cost() {
  inaccessible_cost_ = 253u;
  clear_has_inaccessible_cost();
}
inline ::google::protobuf::uint32 AStarPlannerConfig::inaccessible_cost() const {
  // @@protoc_insertion_point(field_get:roborts_global_planner.AStarPlannerConfig.inaccessible_cost)
  return inaccessible_cost_;
}
inline void AStarPlannerConfig::set_inaccessible_cost(::google::protobuf::uint32 value) {
  set_has_inaccessible_cost();
  inaccessible_cost_ = value;
  // @@protoc_insertion_point(field_set:roborts_global_planner.AStarPlannerConfig.inaccessible_cost)
}

// optional float heuristic_factor = 2 [default = 1];
inline bool AStarPlannerConfig::has_heuristic_factor() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void AStarPlannerConfig::set_has_heuristic_factor() {
  _has_bits_[0] |= 0x00000002u;
}
inline void AStarPlannerConfig::clear_has_heuristic_factor() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void AStarPlannerConfig::clear_heuristic_factor() {
  heuristic_factor_ = 1;
  clear_has_heuristic_factor();
}
inline float AStarPlannerConfig::heuristic_factor() const {
  // @@protoc_insertion_point(field_get:roborts_global_planner.AStarPlannerConfig.heuristic_factor)
  return heuristic_factor_;
}
inline void AStarPlannerConfig::set_heuristic_factor(float value) {
  set_has_heuristic_factor();
  heuristic_factor_ = value;
  // @@protoc_insertion_point(field_set:roborts_global_planner.AStarPlannerConfig.heuristic_factor)
}

// optional float goal_search_tolerance = 3 [default = 0.25];
inline bool AStarPlannerConfig::has_goal_search_tolerance() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void AStarPlannerConfig::set_has_goal_search_tolerance() {
  _has_bits_[0] |= 0x00000004u;
}
inline void AStarPlannerConfig::clear_has_goal_search_tolerance() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void AStarPlannerConfig::clear_goal_search_tolerance() {
  goal_search_tolerance_ = 0.25f;
  clear_has_goal_search_tolerance();
}
inline float AStarPlannerConfig::goal_search_tolerance() const {
  // @@protoc_insertion_point(field_get:roborts_global_planner.AStarPlannerConfig.goal_search_tolerance)
  return goal_search_tolerance_;
}
inline void AStarPlannerConfig::set_goal_search_tolerance(float value) {
  set_has_goal_search_tolerance();
  goal_search_tolerance_ = value;
  // @@protoc_insertion_point(field_set:roborts_global_planner.AStarPlannerConfig.goal_search_tolerance)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace roborts_global_planner

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_a_5fstar_5fplanner_5fconfig_2eproto__INCLUDED
