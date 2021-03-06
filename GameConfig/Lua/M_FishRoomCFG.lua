M_FishRoomCFG = {}

function M_FishRoomCFG:getData(key)
	if self.datas == nil then
		return nil
	end
	return self.datas[key]
end

function M_FishRoomCFG:init()
	self.datas = {}
	self.datas[1] = {RoomID = 1, RoomName = "初级场", RoomImage = "Fish/fishRoomBG1.png", ArmatureName = "", ArmaturePath = "", GoldCondition = 0, VipCondition = 0, TicketCondition = 0, LevelCondition = 0, MinRate = 1, MaxRate = 10, StepRate = 1, TableCount = 200, IsOpen = true, PowerParam = 10, BuyPowerCost = 1, MissileCost = 1, OpenProtect = false, CanGetExp = false, CheckOpenRate = false, FreeItem = false}
	self.datas[2] = {RoomID = 2, RoomName = "中级场", RoomImage = "", ArmatureName = "BUYUzhongjichang", ArmaturePath = "Fish/BUYUzhongjichang.ExportJson", GoldCondition = 0, VipCondition = 0, TicketCondition = 0, LevelCondition = 10, MinRate = 10, MaxRate = 100, StepRate = 10, TableCount = 100, IsOpen = true, PowerParam = 100, BuyPowerCost = 1, MissileCost = 2, OpenProtect = false, CanGetExp = false, CheckOpenRate = false, FreeItem = false}
	self.datas[3] = {RoomID = 3, RoomName = "高级场", RoomImage = "", ArmatureName = "BUYUgaojichang", ArmaturePath = "Fish/BUYUgaojichang.ExportJson", GoldCondition = 0, VipCondition = 0, TicketCondition = 0, LevelCondition = 19, MinRate = 100, MaxRate = 1000, StepRate = 50, TableCount = 50, IsOpen = true, PowerParam = 500, BuyPowerCost = 5, MissileCost = 10, OpenProtect = false, CanGetExp = false, CheckOpenRate = false, FreeItem = false}
	self.datas[4] = {RoomID = 4, RoomName = "大师场", RoomImage = "", ArmatureName = "BUYUvipzhuanchang", ArmaturePath = "Fish/BUYUvipzhuanchang.ExportJson", GoldCondition = 1000000, VipCondition = 0, TicketCondition = 0, LevelCondition = 0, MinRate = 10000, MaxRate = 10000, StepRate = 0, TableCount = 50, IsOpen = true, PowerParam = 1000, BuyPowerCost = 10, MissileCost = 20, OpenProtect = false, CanGetExp = false, CheckOpenRate = false, FreeItem = true}
	self.datas[5] = {RoomID = 5, RoomName = "初级达人", RoomImage = "Fish/fishRoomBG5.png", ArmatureName = "", ArmaturePath = "", GoldCondition = 2000000, VipCondition = 0, TicketCondition = 0, LevelCondition = 0, MinRate = 20000, MaxRate = 20000, StepRate = 0, TableCount = 50, IsOpen = true, PowerParam = 2000, BuyPowerCost = 20, MissileCost = 40, OpenProtect = false, CanGetExp = false, CheckOpenRate = false, FreeItem = true}
	self.datas[6] = {RoomID = 6, RoomName = "中级达人", RoomImage = "Fish/fishRoomBG6.png", ArmatureName = "", ArmaturePath = "", GoldCondition = 5000000, VipCondition = 0, TicketCondition = 0, LevelCondition = 0, MinRate = 50000, MaxRate = 50000, StepRate = 0, TableCount = 50, IsOpen = true, PowerParam = 5000, BuyPowerCost = 50, MissileCost = 100, OpenProtect = false, CanGetExp = false, CheckOpenRate = false, FreeItem = true}
	self.datas[7] = {RoomID = 7, RoomName = "高级达人", RoomImage = "Fish/fishRoomBG7.png", ArmatureName = "", ArmaturePath = "", GoldCondition = 10000000, VipCondition = 0, TicketCondition = 0, LevelCondition = 0, MinRate = 100000, MaxRate = 100000, StepRate = 0, TableCount = 50, IsOpen = true, PowerParam = 10000, BuyPowerCost = 100, MissileCost = 200, OpenProtect = false, CanGetExp = false, CheckOpenRate = false, FreeItem = true}
end

M_FishRoomCFG:init()
