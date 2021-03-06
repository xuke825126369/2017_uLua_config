M_FreeLotteryCFG = {}

function M_FreeLotteryCFG:getData(key)
	if self.datas == nil then
		return nil
	end
	return self.datas[key]
end

function M_FreeLotteryCFG:init()
	self.datas = {}
	self.datas[1] = {ID = 1, Info = "普通抽奖", BaseGold = 0, AwardIcon = "Common2/M_Lottery_Box1.png", AwardTitle = "Common2/M_Lottery_Title1.png", AwardItem1 = {11,1}, AwardItem2 = {1,200}, AwardItem3 = {1,200}, AwardItem4 = {1,2000}, AwardItem5 = {1,200}}
	self.datas[2] = {ID = 2, Info = "青铜抽奖", BaseGold = 5000, AwardIcon = "Common2/M_Lottery_Box2.png", AwardTitle = "Common2/M_Lottery_Title2.png", AwardItem1 = {11,3}, AwardItem2 = {2,5}, AwardItem3 = {2,1}, AwardItem4 = {1,10000}, AwardItem5 = {1,1000}}
	self.datas[3] = {ID = 3, Info = "白银抽奖", BaseGold = 20000, AwardIcon = "Common2/M_Lottery_Box3.png", AwardTitle = "Common2/M_Lottery_Title3.png", AwardItem1 = {11,10}, AwardItem2 = {2,15}, AwardItem3 = {2,2}, AwardItem4 = {1,50000}, AwardItem5 = {1,5000}}
	self.datas[4] = {ID = 4, Info = "黄金抽奖", BaseGold = 80000, AwardIcon = "Common2/M_Lottery_Box4.png", AwardTitle = "Common2/M_Lottery_Title4.png", AwardItem1 = {11,20}, AwardItem2 = {2,30}, AwardItem3 = {2,5}, AwardItem4 = {1,100000}, AwardItem5 = {1,10000}}
	self.datas[5] = {ID = 5, Info = "钻石抽奖", BaseGold = 300000, AwardIcon = "Common2/M_Lottery_Box5.png", AwardTitle = "Common2/M_Lottery_Title5.png", AwardItem1 = {11,50}, AwardItem2 = {2,50}, AwardItem3 = {2,10}, AwardItem4 = {1,500000}, AwardItem5 = {1,80000}}
end

M_FreeLotteryCFG:init()
