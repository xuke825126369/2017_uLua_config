// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: msg_type_def.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "msg_type_def.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace msg_type_def {

namespace {

const ::google::protobuf::EnumDescriptor* e_msg_result_def_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* e_item_type_def_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* e_sex_def_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* ENotifyType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* BoxLotteryResult_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_msg_5ftype_5fdef_2eproto() {
  protobuf_AddDesc_msg_5ftype_5fdef_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "msg_type_def.proto");
  GOOGLE_CHECK(file != NULL);
  e_msg_result_def_descriptor_ = file->enum_type(0);
  e_item_type_def_descriptor_ = file->enum_type(1);
  e_sex_def_descriptor_ = file->enum_type(2);
  ENotifyType_descriptor_ = file->enum_type(3);
  BoxLotteryResult_descriptor_ = file->enum_type(4);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_msg_5ftype_5fdef_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace

void protobuf_ShutdownFile_msg_5ftype_5fdef_2eproto() {
}

void protobuf_AddDesc_msg_5ftype_5fdef_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\022msg_type_def.proto\022\014msg_type_def*\270\021\n\020e"
    "_msg_result_def\022\020\n\014e_rmt_unknow\020\000\022\021\n\re_r"
    "mt_success\020\001\022\016\n\ne_rmt_fail\020\002\022\025\n\021e_rmt_ch"
    "ange_gate\020\003\022\026\n\022e_rmt_connect_full\020\004\022\024\n\020e"
    "_rmt_player_max\020\005\022\032\n\026e_rmt_has_dial_lott"
    "ery\020\006\022\030\n\024e_rmt_error_nickname\020\007\022\027\n\023e_rmt"
    "_same_nickname\020\010\022\035\n\031e_rmt_length_beyond_"
    "range\020\t\022\031\n\025e_rmt_gold_not_enough\020\n\022\033\n\027e_"
    "rmt_ticket_not_enough\020\013\022\023\n\017e_rmt_room_fu"
    "ll\020\014\022\023\n\017e_rmt_vip_under\020\r\022\025\n\021e_rmt_level"
    "_under\020\016\022\025\n\021e_rmt_friend_full\020\017\022\027\n\023e_rmt"
    "_exists_friend\020\020\022\033\n\027e_rmt_player_not_exi"
    "sts\020\021\022\026\n\022e_rmt_runout_count\020\022\022\031\n\025e_rmt_t"
    "ime_not_arrive\020\023\022\024\n\020e_rmt_no_can_bet\020\024\022\031"
    "\n\025e_rmt_bet_index_error\020\025\022\031\n\025e_rmt_outof"
    "_bet_limit\020\026\022\027\n\023e_rmt_no_find_table\020\027\022\026\n"
    "\022e_rmt_pwd_not_same\020\030\022\030\n\024e_rmt_format_in"
    "valid\020\031\022\026\n\022e_rmt_need_set_pwd\020\032\022\023\n\017e_rmt"
    "_pwd_error\020\033\022\027\n\023e_rmt_not_find_item\020\034\022\030\n"
    "\024e_rmt_friend_offline\020\035\022\025\n\021e_rmt_not_in_"
    "game\020\036\022\026\n\022e_rmt_cant_buyitem\020\037\022\031\n\025e_rmt_"
    "cannot_add_self\020 \022\030\n\024e_rmt_chat_too_ofte"
    "n\020!\022\030\n\024e_rmt_exp_not_enough\020\"\022\023\n\017e_rmt_l"
    "evel_max\020#\022\030\n\024e_rmt_cannot_collect\020$\022\030\n\024"
    "e_rmt_has_bind_phone\020%\022\024\n\020e_rmt_code_err"
    "or\020&\022\026\n\022e_rmt_beyond_limit\020\'\022\030\n\024e_rmt_no"
    "t_bind_phone\020(\022\034\n\030e_rmt_cannot_sendto_se"
    "lf\020)\022\026\n\022e_rmt_room_notopen\020*\022\022\n\016e_rmt_be"
    "t_full\020+\022\024\n\020e_rmt_game_begun\020,\022\030\n\024e_rmt_"
    "banker_not_bet\020-\022\030\n\024e_rmt_banker_is_full"
    "\020.\022\027\n\023e_rmt_can_not_leave\020/\022\034\n\030e_rmt_has"
    "_receive_reward\0200\022\026\n\022e_rmt_not_recharge\020"
    "1\022\036\n\032e_rmt_custom_head_freezing\0202\022\032\n\026e_r"
    "mt_now_banker_first\0203\022\034\n\030e_rmt_has_in_ba"
    "nker_list\0204\022\027\n\023e_rmt_now_is_banker\0205\022\027\n\023"
    "e_rmt_is_not_banker\0206\022\033\n\027e_rmt_haven_app"
    "ly_leave\0207\022\033\n\027e_rmt_banker_not_enough\0208\022"
    " \n\034e_rmt_banker_betgold_is_full\0209\022\037\n\033e_r"
    "mt_other_betgold_is_full\020:\022\032\n\026e_rmt_erro"
    "r_game_state\020;\022\027\n\023e_rmt_box_not_exist\020<\022"
    "\030\n\024e_rmt_box_has_opened\020=\022\036\n\032e_rmt_thank"
    "_you_not_enough\020>\022\024\n\020e_rmt_now_is_you\020\?\022"
    "\030\n\024e_rmt_banker_protect\020@\022\027\n\023e_rmt_snatc"
    "h_is_you\020A\022\027\n\023e_rmt_snatch_is_low\020B\022!\n\035e"
    "_rmt_last_speaker_not_finish\020C\022\"\n\036e_rmt_"
    "speaker_beyond_max_count\020D\022\025\n\021e_rmt_ropi"
    "ng_over\020E\022\034\n\030e_rmt_activity_outofdate\020F\022"
    "#\n\037e_rmt_activity_not_satisfy_cond\020G\022\023\n\017"
    "e_rmt_time_over\020H\022\024\n\020e_rmt_not_follow\020I\022"
    "\033\n\027e_rmt_not_follow_roping\020J\022\031\n\025e_rmt_ch"
    "ip_not_enough\020K\022\035\n\031e_rmt_month_card_out_"
    "date\020L\022\037\n\033e_rmt_not_follow_prize_claw\020M\022"
    "\027\n\023e_rmt_no_empty_seat\020N\022\031\n\025e_rmt_player"
    "_prohibit\020O\022&\n\"e_rmt_can_not_change_tabl"
    "e_setting\020P\022$\n e_rmt_player_have_no_enou"
    "gh_gold\020Q\022\034\n\030e_rmt_player_absent_room\020R\022"
    "\034\n\030e_rmt_player_absent_desk\020S*\341\002\n\017e_item"
    "_type_def\022\016\n\ne_itd_gold\020\001\022\020\n\014e_itd_ticke"
    "t\020\002\022\016\n\ne_itd_gift\020\003\022\022\n\016e_itd_exchange\020\004\022"
    "\024\n\020e_itd_photoframe\020\005\022\r\n\te_itd_sex\020\006\022\r\n\t"
    "e_itd_vip\020\007\022\024\n\020e_itd_iconcustom\020\010\022\022\n\016e_i"
    "td_nickname\020\t\022\023\n\017e_itd_monthcard\020\n\022\016\n\ne_"
    "itd_chip\020\013\022\017\n\013e_itd_lucky\020\014\022\024\n\020e_itd_tem"
    "pincome\020\r\022\025\n\021e_itd_totalincome\020\016\022\023\n\017e_it"
    "d_privilege\020\017\022\023\n\017e_itd_firstgift\020c\022\035\n\031e_"
    "itd_vip_experience_card\020d*D\n\te_sex_def\022\017"
    "\n\013sex_unknown\020\000\022\013\n\007sex_boy\020\001\022\014\n\010sex_girl"
    "\020\002\022\013\n\007sex_max\020\003*\223\001\n\013ENotifyType\022\022\n\rNotif"
    "yTypeSys\020\310\001\022\034\n\027NotifyTypePlayerSpeaker\020\307"
    "\001\022\033\n\026NotifyTypeWinningPrize\020\306\001\022\037\n\032Notify"
    "TypeImportantConsume\020\305\001\022\024\n\017NotifyTypeRob"
    "ot\020\304\001*V\n\020BoxLotteryResult\022\024\n\020result_big_"
    "prize\020\000\022\026\n\022result_samll_prize\020\001\022\024\n\020resul"
    "t_thank_you\020\002", 2933);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "msg_type_def.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_msg_5ftype_5fdef_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_msg_5ftype_5fdef_2eproto {
  StaticDescriptorInitializer_msg_5ftype_5fdef_2eproto() {
    protobuf_AddDesc_msg_5ftype_5fdef_2eproto();
  }
} static_descriptor_initializer_msg_5ftype_5fdef_2eproto_;
const ::google::protobuf::EnumDescriptor* e_msg_result_def_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return e_msg_result_def_descriptor_;
}
bool e_msg_result_def_IsValid(int value) {
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
    case 57:
    case 58:
    case 59:
    case 60:
    case 61:
    case 62:
    case 63:
    case 64:
    case 65:
    case 66:
    case 67:
    case 68:
    case 69:
    case 70:
    case 71:
    case 72:
    case 73:
    case 74:
    case 75:
    case 76:
    case 77:
    case 78:
    case 79:
    case 80:
    case 81:
    case 82:
    case 83:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* e_item_type_def_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return e_item_type_def_descriptor_;
}
bool e_item_type_def_IsValid(int value) {
  switch(value) {
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
    case 99:
    case 100:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* e_sex_def_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return e_sex_def_descriptor_;
}
bool e_sex_def_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* ENotifyType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ENotifyType_descriptor_;
}
bool ENotifyType_IsValid(int value) {
  switch(value) {
    case 196:
    case 197:
    case 198:
    case 199:
    case 200:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* BoxLotteryResult_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return BoxLotteryResult_descriptor_;
}
bool BoxLotteryResult_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace msg_type_def

// @@protoc_insertion_point(global_scope)
