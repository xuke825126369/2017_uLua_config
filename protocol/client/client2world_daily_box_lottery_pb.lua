-- Generated By protoc-gen-lua Do not Edit
local protobuf = require "protobuf/protobuf"
local client2world_msg_type_pb = require("client2world_msg_type_pb")
local msg_type_def_pb = require("msg_type_def_pb")
local msg_info_def_pb = require("msg_info_def_pb")
module('client2world_daily_box_lottery_pb')


PACKETC2W_REQ_LOTTERY_BOX = protobuf.Descriptor();
local PACKETC2W_REQ_LOTTERY_BOX_PACKET_ID_FIELD = protobuf.FieldDescriptor();
local PACKETC2W_REQ_LOTTERY_BOX_BOXINDEX_FIELD = protobuf.FieldDescriptor();
local PACKETC2W_REQ_LOTTERY_BOX_USETICKET_FIELD = protobuf.FieldDescriptor();
PACKETW2C_REQ_LOTTERY_BOX_RESULT = protobuf.Descriptor();
local PACKETW2C_REQ_LOTTERY_BOX_RESULT_PACKET_ID_FIELD = protobuf.FieldDescriptor();
local PACKETW2C_REQ_LOTTERY_BOX_RESULT_RESULT_FIELD = protobuf.FieldDescriptor();
local PACKETW2C_REQ_LOTTERY_BOX_RESULT_USETICKET_FIELD = protobuf.FieldDescriptor();
local PACKETW2C_REQ_LOTTERY_BOX_RESULT_REWARDTYPE_FIELD = protobuf.FieldDescriptor();
PACKETC2W_THANKYOU_EXCHANGE_TICKET = protobuf.Descriptor();
local PACKETC2W_THANKYOU_EXCHANGE_TICKET_PACKET_ID_FIELD = protobuf.FieldDescriptor();
PACKETW2C_THANKYOU_EXCHANGE_TICKET_RESULT = protobuf.Descriptor();
local PACKETW2C_THANKYOU_EXCHANGE_TICKET_RESULT_PACKET_ID_FIELD = protobuf.FieldDescriptor();
local PACKETW2C_THANKYOU_EXCHANGE_TICKET_RESULT_RESULT_FIELD = protobuf.FieldDescriptor();

PACKETC2W_REQ_LOTTERY_BOX_PACKET_ID_FIELD.name = "packet_id"
PACKETC2W_REQ_LOTTERY_BOX_PACKET_ID_FIELD.full_name = ".client2world_protocols.packetc2w_req_lottery_box.packet_id"
PACKETC2W_REQ_LOTTERY_BOX_PACKET_ID_FIELD.number = 1
PACKETC2W_REQ_LOTTERY_BOX_PACKET_ID_FIELD.index = 0
PACKETC2W_REQ_LOTTERY_BOX_PACKET_ID_FIELD.label = 1
PACKETC2W_REQ_LOTTERY_BOX_PACKET_ID_FIELD.enum_type = client2world_msg_type_pb.E_SERVER_MSG_TYPE
PACKETC2W_REQ_LOTTERY_BOX_PACKET_ID_FIELD.has_default_value = true
PACKETC2W_REQ_LOTTERY_BOX_PACKET_ID_FIELD.default_value = client2world_msg_type_pb.e_mst_c2w_req_lottery_box
PACKETC2W_REQ_LOTTERY_BOX_PACKET_ID_FIELD.type = 14
PACKETC2W_REQ_LOTTERY_BOX_PACKET_ID_FIELD.cpp_type = 8

PACKETC2W_REQ_LOTTERY_BOX_BOXINDEX_FIELD.name = "boxIndex"
PACKETC2W_REQ_LOTTERY_BOX_BOXINDEX_FIELD.full_name = ".client2world_protocols.packetc2w_req_lottery_box.boxIndex"
PACKETC2W_REQ_LOTTERY_BOX_BOXINDEX_FIELD.number = 2
PACKETC2W_REQ_LOTTERY_BOX_BOXINDEX_FIELD.index = 1
PACKETC2W_REQ_LOTTERY_BOX_BOXINDEX_FIELD.label = 1
PACKETC2W_REQ_LOTTERY_BOX_BOXINDEX_FIELD.has_default_value = false
PACKETC2W_REQ_LOTTERY_BOX_BOXINDEX_FIELD.default_value = 0
PACKETC2W_REQ_LOTTERY_BOX_BOXINDEX_FIELD.type = 5
PACKETC2W_REQ_LOTTERY_BOX_BOXINDEX_FIELD.cpp_type = 1

PACKETC2W_REQ_LOTTERY_BOX_USETICKET_FIELD.name = "useTicket"
PACKETC2W_REQ_LOTTERY_BOX_USETICKET_FIELD.full_name = ".client2world_protocols.packetc2w_req_lottery_box.useTicket"
PACKETC2W_REQ_LOTTERY_BOX_USETICKET_FIELD.number = 3
PACKETC2W_REQ_LOTTERY_BOX_USETICKET_FIELD.index = 2
PACKETC2W_REQ_LOTTERY_BOX_USETICKET_FIELD.label = 1
PACKETC2W_REQ_LOTTERY_BOX_USETICKET_FIELD.has_default_value = false
PACKETC2W_REQ_LOTTERY_BOX_USETICKET_FIELD.default_value = false
PACKETC2W_REQ_LOTTERY_BOX_USETICKET_FIELD.type = 8
PACKETC2W_REQ_LOTTERY_BOX_USETICKET_FIELD.cpp_type = 7

PACKETC2W_REQ_LOTTERY_BOX.name = "packetc2w_req_lottery_box"
PACKETC2W_REQ_LOTTERY_BOX.full_name = ".client2world_protocols.packetc2w_req_lottery_box"
PACKETC2W_REQ_LOTTERY_BOX.nested_types = {}
PACKETC2W_REQ_LOTTERY_BOX.enum_types = {}
PACKETC2W_REQ_LOTTERY_BOX.fields = {PACKETC2W_REQ_LOTTERY_BOX_PACKET_ID_FIELD, PACKETC2W_REQ_LOTTERY_BOX_BOXINDEX_FIELD, PACKETC2W_REQ_LOTTERY_BOX_USETICKET_FIELD}
PACKETC2W_REQ_LOTTERY_BOX.is_extendable = false
PACKETC2W_REQ_LOTTERY_BOX.extensions = {}
PACKETW2C_REQ_LOTTERY_BOX_RESULT_PACKET_ID_FIELD.name = "packet_id"
PACKETW2C_REQ_LOTTERY_BOX_RESULT_PACKET_ID_FIELD.full_name = ".client2world_protocols.packetw2c_req_lottery_box_result.packet_id"
PACKETW2C_REQ_LOTTERY_BOX_RESULT_PACKET_ID_FIELD.number = 1
PACKETW2C_REQ_LOTTERY_BOX_RESULT_PACKET_ID_FIELD.index = 0
PACKETW2C_REQ_LOTTERY_BOX_RESULT_PACKET_ID_FIELD.label = 1
PACKETW2C_REQ_LOTTERY_BOX_RESULT_PACKET_ID_FIELD.enum_type = client2world_msg_type_pb.E_SERVER_MSG_TYPE
PACKETW2C_REQ_LOTTERY_BOX_RESULT_PACKET_ID_FIELD.has_default_value = true
PACKETW2C_REQ_LOTTERY_BOX_RESULT_PACKET_ID_FIELD.default_value = client2world_msg_type_pb.e_mst_w2c_req_lottery_box_result
PACKETW2C_REQ_LOTTERY_BOX_RESULT_PACKET_ID_FIELD.type = 14
PACKETW2C_REQ_LOTTERY_BOX_RESULT_PACKET_ID_FIELD.cpp_type = 8

PACKETW2C_REQ_LOTTERY_BOX_RESULT_RESULT_FIELD.name = "result"
PACKETW2C_REQ_LOTTERY_BOX_RESULT_RESULT_FIELD.full_name = ".client2world_protocols.packetw2c_req_lottery_box_result.result"
PACKETW2C_REQ_LOTTERY_BOX_RESULT_RESULT_FIELD.number = 2
PACKETW2C_REQ_LOTTERY_BOX_RESULT_RESULT_FIELD.index = 1
PACKETW2C_REQ_LOTTERY_BOX_RESULT_RESULT_FIELD.label = 1
PACKETW2C_REQ_LOTTERY_BOX_RESULT_RESULT_FIELD.has_default_value = false
PACKETW2C_REQ_LOTTERY_BOX_RESULT_RESULT_FIELD.default_value = 0
PACKETW2C_REQ_LOTTERY_BOX_RESULT_RESULT_FIELD.type = 5
PACKETW2C_REQ_LOTTERY_BOX_RESULT_RESULT_FIELD.cpp_type = 1

PACKETW2C_REQ_LOTTERY_BOX_RESULT_USETICKET_FIELD.name = "useTicket"
PACKETW2C_REQ_LOTTERY_BOX_RESULT_USETICKET_FIELD.full_name = ".client2world_protocols.packetw2c_req_lottery_box_result.useTicket"
PACKETW2C_REQ_LOTTERY_BOX_RESULT_USETICKET_FIELD.number = 3
PACKETW2C_REQ_LOTTERY_BOX_RESULT_USETICKET_FIELD.index = 2
PACKETW2C_REQ_LOTTERY_BOX_RESULT_USETICKET_FIELD.label = 1
PACKETW2C_REQ_LOTTERY_BOX_RESULT_USETICKET_FIELD.has_default_value = false
PACKETW2C_REQ_LOTTERY_BOX_RESULT_USETICKET_FIELD.default_value = false
PACKETW2C_REQ_LOTTERY_BOX_RESULT_USETICKET_FIELD.type = 8
PACKETW2C_REQ_LOTTERY_BOX_RESULT_USETICKET_FIELD.cpp_type = 7

PACKETW2C_REQ_LOTTERY_BOX_RESULT_REWARDTYPE_FIELD.name = "rewardType"
PACKETW2C_REQ_LOTTERY_BOX_RESULT_REWARDTYPE_FIELD.full_name = ".client2world_protocols.packetw2c_req_lottery_box_result.rewardType"
PACKETW2C_REQ_LOTTERY_BOX_RESULT_REWARDTYPE_FIELD.number = 4
PACKETW2C_REQ_LOTTERY_BOX_RESULT_REWARDTYPE_FIELD.index = 3
PACKETW2C_REQ_LOTTERY_BOX_RESULT_REWARDTYPE_FIELD.label = 1
PACKETW2C_REQ_LOTTERY_BOX_RESULT_REWARDTYPE_FIELD.has_default_value = false
PACKETW2C_REQ_LOTTERY_BOX_RESULT_REWARDTYPE_FIELD.default_value = 0
PACKETW2C_REQ_LOTTERY_BOX_RESULT_REWARDTYPE_FIELD.type = 5
PACKETW2C_REQ_LOTTERY_BOX_RESULT_REWARDTYPE_FIELD.cpp_type = 1

PACKETW2C_REQ_LOTTERY_BOX_RESULT.name = "packetw2c_req_lottery_box_result"
PACKETW2C_REQ_LOTTERY_BOX_RESULT.full_name = ".client2world_protocols.packetw2c_req_lottery_box_result"
PACKETW2C_REQ_LOTTERY_BOX_RESULT.nested_types = {}
PACKETW2C_REQ_LOTTERY_BOX_RESULT.enum_types = {}
PACKETW2C_REQ_LOTTERY_BOX_RESULT.fields = {PACKETW2C_REQ_LOTTERY_BOX_RESULT_PACKET_ID_FIELD, PACKETW2C_REQ_LOTTERY_BOX_RESULT_RESULT_FIELD, PACKETW2C_REQ_LOTTERY_BOX_RESULT_USETICKET_FIELD, PACKETW2C_REQ_LOTTERY_BOX_RESULT_REWARDTYPE_FIELD}
PACKETW2C_REQ_LOTTERY_BOX_RESULT.is_extendable = false
PACKETW2C_REQ_LOTTERY_BOX_RESULT.extensions = {}
PACKETC2W_THANKYOU_EXCHANGE_TICKET_PACKET_ID_FIELD.name = "packet_id"
PACKETC2W_THANKYOU_EXCHANGE_TICKET_PACKET_ID_FIELD.full_name = ".client2world_protocols.packetc2w_thankyou_exchange_ticket.packet_id"
PACKETC2W_THANKYOU_EXCHANGE_TICKET_PACKET_ID_FIELD.number = 1
PACKETC2W_THANKYOU_EXCHANGE_TICKET_PACKET_ID_FIELD.index = 0
PACKETC2W_THANKYOU_EXCHANGE_TICKET_PACKET_ID_FIELD.label = 1
PACKETC2W_THANKYOU_EXCHANGE_TICKET_PACKET_ID_FIELD.enum_type = client2world_msg_type_pb.E_SERVER_MSG_TYPE
PACKETC2W_THANKYOU_EXCHANGE_TICKET_PACKET_ID_FIELD.has_default_value = true
PACKETC2W_THANKYOU_EXCHANGE_TICKET_PACKET_ID_FIELD.default_value = client2world_msg_type_pb.e_mst_c2w_thankyou_exchange_ticket
PACKETC2W_THANKYOU_EXCHANGE_TICKET_PACKET_ID_FIELD.type = 14
PACKETC2W_THANKYOU_EXCHANGE_TICKET_PACKET_ID_FIELD.cpp_type = 8

PACKETC2W_THANKYOU_EXCHANGE_TICKET.name = "packetc2w_thankyou_exchange_ticket"
PACKETC2W_THANKYOU_EXCHANGE_TICKET.full_name = ".client2world_protocols.packetc2w_thankyou_exchange_ticket"
PACKETC2W_THANKYOU_EXCHANGE_TICKET.nested_types = {}
PACKETC2W_THANKYOU_EXCHANGE_TICKET.enum_types = {}
PACKETC2W_THANKYOU_EXCHANGE_TICKET.fields = {PACKETC2W_THANKYOU_EXCHANGE_TICKET_PACKET_ID_FIELD}
PACKETC2W_THANKYOU_EXCHANGE_TICKET.is_extendable = false
PACKETC2W_THANKYOU_EXCHANGE_TICKET.extensions = {}
PACKETW2C_THANKYOU_EXCHANGE_TICKET_RESULT_PACKET_ID_FIELD.name = "packet_id"
PACKETW2C_THANKYOU_EXCHANGE_TICKET_RESULT_PACKET_ID_FIELD.full_name = ".client2world_protocols.packetw2c_thankyou_exchange_ticket_result.packet_id"
PACKETW2C_THANKYOU_EXCHANGE_TICKET_RESULT_PACKET_ID_FIELD.number = 1
PACKETW2C_THANKYOU_EXCHANGE_TICKET_RESULT_PACKET_ID_FIELD.index = 0
PACKETW2C_THANKYOU_EXCHANGE_TICKET_RESULT_PACKET_ID_FIELD.label = 1
PACKETW2C_THANKYOU_EXCHANGE_TICKET_RESULT_PACKET_ID_FIELD.enum_type = client2world_msg_type_pb.E_SERVER_MSG_TYPE
PACKETW2C_THANKYOU_EXCHANGE_TICKET_RESULT_PACKET_ID_FIELD.has_default_value = true
PACKETW2C_THANKYOU_EXCHANGE_TICKET_RESULT_PACKET_ID_FIELD.default_value = client2world_msg_type_pb.e_mst_w2c_thankyou_exchange_ticket_result
PACKETW2C_THANKYOU_EXCHANGE_TICKET_RESULT_PACKET_ID_FIELD.type = 14
PACKETW2C_THANKYOU_EXCHANGE_TICKET_RESULT_PACKET_ID_FIELD.cpp_type = 8

PACKETW2C_THANKYOU_EXCHANGE_TICKET_RESULT_RESULT_FIELD.name = "result"
PACKETW2C_THANKYOU_EXCHANGE_TICKET_RESULT_RESULT_FIELD.full_name = ".client2world_protocols.packetw2c_thankyou_exchange_ticket_result.result"
PACKETW2C_THANKYOU_EXCHANGE_TICKET_RESULT_RESULT_FIELD.number = 2
PACKETW2C_THANKYOU_EXCHANGE_TICKET_RESULT_RESULT_FIELD.index = 1
PACKETW2C_THANKYOU_EXCHANGE_TICKET_RESULT_RESULT_FIELD.label = 1
PACKETW2C_THANKYOU_EXCHANGE_TICKET_RESULT_RESULT_FIELD.has_default_value = false
PACKETW2C_THANKYOU_EXCHANGE_TICKET_RESULT_RESULT_FIELD.default_value = 0
PACKETW2C_THANKYOU_EXCHANGE_TICKET_RESULT_RESULT_FIELD.type = 5
PACKETW2C_THANKYOU_EXCHANGE_TICKET_RESULT_RESULT_FIELD.cpp_type = 1

PACKETW2C_THANKYOU_EXCHANGE_TICKET_RESULT.name = "packetw2c_thankyou_exchange_ticket_result"
PACKETW2C_THANKYOU_EXCHANGE_TICKET_RESULT.full_name = ".client2world_protocols.packetw2c_thankyou_exchange_ticket_result"
PACKETW2C_THANKYOU_EXCHANGE_TICKET_RESULT.nested_types = {}
PACKETW2C_THANKYOU_EXCHANGE_TICKET_RESULT.enum_types = {}
PACKETW2C_THANKYOU_EXCHANGE_TICKET_RESULT.fields = {PACKETW2C_THANKYOU_EXCHANGE_TICKET_RESULT_PACKET_ID_FIELD, PACKETW2C_THANKYOU_EXCHANGE_TICKET_RESULT_RESULT_FIELD}
PACKETW2C_THANKYOU_EXCHANGE_TICKET_RESULT.is_extendable = false
PACKETW2C_THANKYOU_EXCHANGE_TICKET_RESULT.extensions = {}

packetc2w_req_lottery_box = protobuf.Message(PACKETC2W_REQ_LOTTERY_BOX)
packetc2w_thankyou_exchange_ticket = protobuf.Message(PACKETC2W_THANKYOU_EXCHANGE_TICKET)
packetw2c_req_lottery_box_result = protobuf.Message(PACKETW2C_REQ_LOTTERY_BOX_RESULT)
packetw2c_thankyou_exchange_ticket_result = protobuf.Message(PACKETW2C_THANKYOU_EXCHANGE_TICKET_RESULT)

