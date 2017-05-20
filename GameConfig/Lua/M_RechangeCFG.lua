M_RechangeCFG = {}

function M_RechangeCFG:getData(key)
	if self.datas == nil then
		return nil
	end
	return self.datas[key]
end

function M_RechangeCFG:init()
	self.datas = {}
	self.datas[1] = {ID = 1, Name = "328钻石", Desc = "", NameIcon = "Common2/M_ShopName2.png", Icon = "Common2/M_DiamondIcon7.png", PayType = 1, Type = 1, Price = 328, Gold = 0, FirstGold = 0, GiveGold = 0, GiveTicket = 328, VIPExp = 328, Index = 3, ShopType = 2, Flag = false, AppStoreID = "com_fish_win_appstore_1"}
	self.datas[2] = {ID = 2, Name = "198钻石", Desc = "", NameIcon = "Common2/M_ShopName2.png", Icon = "Common2/M_DiamondIcon6.png", PayType = 1, Type = 1, Price = 198, Gold = 0, FirstGold = 0, GiveGold = 0, GiveTicket = 198, VIPExp = 198, Index = 4, ShopType = 2, Flag = false, AppStoreID = "com_fish_win_appstore_2"}
	self.datas[3] = {ID = 3, Name = "98钻石", Desc = "", NameIcon = "Common2/M_ShopName2.png", Icon = "Common2/M_DiamondIcon5.png", PayType = 1, Type = 1, Price = 98, Gold = 0, FirstGold = 0, GiveGold = 0, GiveTicket = 98, VIPExp = 98, Index = 5, ShopType = 2, Flag = false, AppStoreID = "com_fish_win_appstore_3"}
	self.datas[4] = {ID = 4, Name = "50钻石", Desc = "", NameIcon = "Common2/M_ShopName2.png", Icon = "Common2/M_DiamondIcon4.png", PayType = 1, Type = 1, Price = 50, Gold = 0, FirstGold = 0, GiveGold = 0, GiveTicket = 50, VIPExp = 50, Index = 6, ShopType = 2, Flag = true, AppStoreID = "com_fish_win_appstore_4"}
	self.datas[5] = {ID = 5, Name = "30钻石", Desc = "", NameIcon = "Common2/M_ShopName2.png", Icon = "Common2/M_DiamondIcon3.png", PayType = 1, Type = 1, Price = 30, Gold = 0, FirstGold = 0, GiveGold = 0, GiveTicket = 30, VIPExp = 30, Index = 7, ShopType = 2, Flag = false, AppStoreID = "com_fish_win_appstore_5"}
	self.datas[6] = {ID = 6, Name = "12钻石", Desc = "", NameIcon = "Common2/M_ShopName2.png", Icon = "Common2/M_DiamondIcon2.png", PayType = 1, Type = 1, Price = 12, Gold = 0, FirstGold = 0, GiveGold = 0, GiveTicket = 12, VIPExp = 12, Index = 8, ShopType = 2, Flag = true, AppStoreID = "com_fish_win_appstore_6"}
	self.datas[7] = {ID = 7, Name = "6钻石", Desc = "", NameIcon = "Common2/M_ShopName2.png", Icon = "Common2/M_DiamondIcon1.png", PayType = 1, Type = 1, Price = 6, Gold = 0, FirstGold = 0, GiveGold = 0, GiveTicket = 6, VIPExp = 6, Index = 9, ShopType = 2, Flag = false, AppStoreID = "com_fish_win_appstore_7"}
	self.datas[8] = {ID = 8, Name = "1钻石", Desc = "", NameIcon = "Common2/M_ShopName2.png", Icon = "Common2/M_DiamondIcon1.png", PayType = 1, Type = 99, Price = 1, Gold = 0, FirstGold = 0, GiveGold = 0, GiveTicket = 1, VIPExp = 1, Index = 10, ShopType = 2, Flag = false, AppStoreID = "com_fish_win_appstore_8"}
end

M_RechangeCFG:init()
