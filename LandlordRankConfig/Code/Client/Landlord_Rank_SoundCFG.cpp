#include "stdafx.h"
#include "tinyxml2/tinyxml2.h"
#include "LuaCfgHelper.h"
#include <iostream>
#include <boost/algorithm/string.hpp>
#include "Landlord_Rank_SoundCFG.h"
std::auto_ptr<Landlord_Rank_SoundCFG> Landlord_Rank_SoundCFG::msSingleton(nullptr);

int Landlord_Rank_SoundCFG::GetCount()
{
	return (int)mMapData.size();
}

const Landlord_Rank_SoundCFGData* Landlord_Rank_SoundCFG::GetData(int SoundID)
{
	auto it = mMapData.find(SoundID);
	if (it != mMapData.end())
	{
		return &it->second;
	}
	return NULL;
}

const std::map<int, Landlord_Rank_SoundCFGData>& Landlord_Rank_SoundCFG::GetMapData()
{
	return mMapData;
}

void Landlord_Rank_SoundCFG::Load()
{
	tinyxml2::XMLDocument xmlDoc;
	std::string content = FileUtils::getInstance()->getStringFromFile("Config/Landlord_Rank_SoundCFG.xml");
	auto result = xmlDoc.Parse(content.c_str(), content.length());
	if (result != tinyxml2::XML_SUCCESS)
	{
		CCLOGERROR("Result:%d", result);
		CCASSERT(false, "result != tinyxml2::XML_SUCCESS");
		return;
	}
	auto root = xmlDoc.RootElement();
	if (root == NULL)
	{
		CCASSERT(false, "root == NULL");
		return;
	}
	auto element = root->FirstChildElement("Data");
	while (element != NULL)
	{
		Landlord_Rank_SoundCFGData data;
		data.mSoundID = element->IntAttribute("SoundID");
		data.mSoundName = element->Attribute("SoundName");
		data.mSoundPath = element->Attribute("SoundPath");
		data.mSoundTime = element->IntAttribute("SoundTime");
		if (mMapData.find(data.mSoundID) != mMapData.end())std::cout <<"data refind:" << data.mSoundID << std::endl;
		CCASSERT(mMapData.find(data.mSoundID) == mMapData.end(), "data.mSoundID is exists");
		mMapData.insert(std::make_pair(data.mSoundID, data));
		element = element->NextSiblingElement();
	}
	CCLOG("Landlord_Rank_SoundCFG Loaded. Load Data:%u", mMapData.size());
}

void Landlord_Rank_SoundCFG::LoadLua()
{
	LuaEngine::getInstance()->executeScriptFile("Config/Landlord_Rank_SoundCFG");
	lua_State* L = LuaEngine::getInstance()->getLuaStack()->getLuaState();
	lua_getglobal(L, "Landlord_Rank_SoundCFG");
	CCASSERT(lua_istable(L, -1) == 1, "is not table");
	lua_pushstring(L, "datas");
	lua_gettable(L, -2);
	CCASSERT(lua_istable(L, -1) == 1, "is not table");
	lua_pushnil(L);
	while(lua_next(L, 2))
	{
		CCASSERT(lua_istable(L, -1) == 1, "is not table");
		Landlord_Rank_SoundCFGData data;
		LuaCfgHelper::readInt(L, "SoundID", data.mSoundID);
		LuaCfgHelper::readString(L, "SoundName", data.mSoundName);
		LuaCfgHelper::readString(L, "SoundPath", data.mSoundPath);
		LuaCfgHelper::readInt(L, "SoundTime", data.mSoundTime);
		if (mMapData.find(data.mSoundID) != mMapData.end())std::cout <<"data refind:" << data.mSoundID << std::endl;
		CCASSERT(mMapData.find(data.mSoundID) == mMapData.end(), "data.mSoundID is exists");
		mMapData.insert(std::make_pair(data.mSoundID, data));
		lua_pop(L, 1);
	}
	lua_settop(L, 0);
	CCLOG("Landlord_Rank_SoundCFG Loaded. Load Data:%u", mMapData.size());
}

void Landlord_Rank_SoundCFG::Reload()
{
	mMapData.clear();
	Load();
}

Landlord_Rank_SoundCFG* Landlord_Rank_SoundCFG::GetSingleton()
{
	if (msSingleton.get() == nullptr)
	{
		msSingleton.reset(new Landlord_Rank_SoundCFG());
	}
	return msSingleton.get();
}
