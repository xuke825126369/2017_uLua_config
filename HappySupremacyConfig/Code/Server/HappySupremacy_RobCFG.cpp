#include "stdafx.h"
#include <cassert>
#include <fstream>
#include <iostream>
#include <iostream>
#include <boost/smart_ptr.hpp>
#include <boost/algorithm/string.hpp>
#include "tinyxml2.h"
#include "HappySupremacy_RobCFG.h"
std::auto_ptr<HappySupremacy_RobCFG> HappySupremacy_RobCFG::msSingleton(nullptr);

int HappySupremacy_RobCFG::GetCount()
{
	return (int)mMapData.size();
}

const HappySupremacy_RobCFGData* HappySupremacy_RobCFG::GetData(int ID)
{
	auto it = mMapData.find(ID);
	if (it != mMapData.end())
	{
		return &it->second;
	}
	return NULL;
}

boost::unordered_map<int, HappySupremacy_RobCFGData>& HappySupremacy_RobCFG::GetMapData()
{
	return mMapData;
}

void HappySupremacy_RobCFG::Reload()
{
	mMapData.clear();
	Load();
}

void HappySupremacy_RobCFG::Load()
{
	std::ifstream readStream("../Config/HappySupremacy_RobCFG.xml", std::ios::binary);
	if (!readStream.is_open())
	{
		assert(false);
		return;
	}
	readStream.seekg(0, std::ios::end);
	int fileSize = readStream.tellg();
	boost::shared_array<char> buffer(new char[fileSize+1]);
	buffer.get()[fileSize] = '\0';
	readStream.seekg(0, std::ios::beg);
	readStream.read(buffer.get(), fileSize);
	readStream.close();
	tinyxml2::XMLDocument xmlDoc;
	auto result = xmlDoc.Parse(buffer.get(), fileSize);
	if (result != tinyxml2::XML_SUCCESS)
	{
		assert(false);
		return;
	}
	auto root = xmlDoc.RootElement();
	if (root == NULL)
	{
		assert(false);
		return;
	}
	auto element = root->FirstChildElement("Data");
	while (element != NULL)
	{
		HappySupremacy_RobCFGData data;
		data.mID = element->IntAttribute("ID");
		data.mName = element->Attribute("Name");
		data.mGoldMin = element->IntAttribute("GoldMin");
		data.mGoldMax = element->IntAttribute("GoldMax");
		data.mVipMin = element->IntAttribute("VipMin");
		data.mVipMax = element->IntAttribute("VipMax");
		if (mMapData.find(data.mID) != mMapData.end())std::cout <<"data refind:" << data.mID << std::endl;
		assert(mMapData.find(data.mID) == mMapData.end());
		mMapData.insert(std::make_pair(data.mID, data));
		element = element->NextSiblingElement();
	}
}

HappySupremacy_RobCFG* HappySupremacy_RobCFG::GetSingleton()
{
	if (msSingleton.get() == nullptr)
	{
		msSingleton.reset(new HappySupremacy_RobCFG());
	}
	return msSingleton.get();
}
