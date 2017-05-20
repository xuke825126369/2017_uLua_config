#pragma once
#include <map>
struct HappySupremacy_RoomStockCFGData
{
	//房间id
	int mRoomID;
	//抽水
	float mDeduct;
	//默认库存
	int mDefaultStock;
	//库存水位(10个)
	std::vector<int> mStock;
	//放分概率（10个）
	std::vector<int> mScoreId;
};

class HappySupremacy_RoomStockCFG
{
public:
private:
	static std::auto_ptr<HappySupremacy_RoomStockCFG> msSingleton;
public:
	int GetCount();
	const HappySupremacy_RoomStockCFGData* GetData(int RoomID);
	const std::map<int, HappySupremacy_RoomStockCFGData>& GetMapData();
	void Load();
	void LoadLua();
	void Reload();
	static HappySupremacy_RoomStockCFG* GetSingleton();
private:
	std::map<int, HappySupremacy_RoomStockCFGData> mMapData;
};
