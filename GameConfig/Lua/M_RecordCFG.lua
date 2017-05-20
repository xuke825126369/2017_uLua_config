M_RecordCFG = {}

function M_RecordCFG:getData(key)
	if self.datas == nil then
		return nil
	end
	return self.datas[key]
end

function M_RecordCFG:init()
	self.datas = {}
	self.datas[1] = {RecordID = 1, RecordName = "个人记录", RecordInfoList = {"金币最大持有记录","礼券最大持有记录"}}
	self.datas[2] = {RecordID = 2, RecordName = "捕鱼", RecordInfoList = {"单场获得最大金币数","累计击中黑龙","累计击中蓝龙","累计击中金龙炸弹"}}
	self.datas[3] = {RecordID = 3, RecordName = "鳄鱼", RecordInfoList = {"单场获得最大金币数","累计押中彩金次数","累计押中射灯次数","累计押中人人有奖次数"}}
	self.datas[4] = {RecordID = 4, RecordName = "骰宝", RecordInfoList = {"单局获得最大金币数","累计押中豹子次数","最大连续押中次数"}}
end

M_RecordCFG:init()
