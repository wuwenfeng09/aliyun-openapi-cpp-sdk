/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/dds/model/DescribeAvailableResourceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dds;
using namespace AlibabaCloud::Dds::Model;

DescribeAvailableResourceResult::DescribeAvailableResourceResult() :
	ServiceResult()
{}

DescribeAvailableResourceResult::DescribeAvailableResourceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAvailableResourceResult::~DescribeAvailableResourceResult()
{}

void DescribeAvailableResourceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAvailableZonesNode = value["AvailableZones"]["AvailableZone"];
	for (auto valueAvailableZonesAvailableZone : allAvailableZonesNode)
	{
		AvailableZone availableZonesObject;
		if(!valueAvailableZonesAvailableZone["RegionId"].isNull())
			availableZonesObject.regionId = valueAvailableZonesAvailableZone["RegionId"].asString();
		if(!valueAvailableZonesAvailableZone["ZoneId"].isNull())
			availableZonesObject.zoneId = valueAvailableZonesAvailableZone["ZoneId"].asString();
		auto allSupportedEngineVersionsNode = allAvailableZonesNode["SupportedEngineVersions"]["SupportedEngineVersion"];
		for (auto allAvailableZonesNodeSupportedEngineVersionsSupportedEngineVersion : allSupportedEngineVersionsNode)
		{
			AvailableZone::SupportedEngineVersion supportedEngineVersionsObject;
			if(!allAvailableZonesNodeSupportedEngineVersionsSupportedEngineVersion["Version"].isNull())
				supportedEngineVersionsObject.version = allAvailableZonesNodeSupportedEngineVersionsSupportedEngineVersion["Version"].asString();
			auto allSupportedEnginesNode = allSupportedEngineVersionsNode["SupportedEngines"]["SupportedEngine"];
			for (auto allSupportedEngineVersionsNodeSupportedEnginesSupportedEngine : allSupportedEnginesNode)
			{
				AvailableZone::SupportedEngineVersion::SupportedEngine supportedEnginesObject;
				if(!allSupportedEngineVersionsNodeSupportedEnginesSupportedEngine["Engine"].isNull())
					supportedEnginesObject.engine = allSupportedEngineVersionsNodeSupportedEnginesSupportedEngine["Engine"].asString();
				auto allSupportedNodeTypesNode = allSupportedEnginesNode["SupportedNodeTypes"]["SupportedNodeType"];
				for (auto allSupportedEnginesNodeSupportedNodeTypesSupportedNodeType : allSupportedNodeTypesNode)
				{
					AvailableZone::SupportedEngineVersion::SupportedEngine::SupportedNodeType supportedNodeTypesObject;
					if(!allSupportedEnginesNodeSupportedNodeTypesSupportedNodeType["NodeType"].isNull())
						supportedNodeTypesObject.nodeType = allSupportedEnginesNodeSupportedNodeTypesSupportedNodeType["NodeType"].asString();
					if(!allSupportedEnginesNodeSupportedNodeTypesSupportedNodeType["NetworkTypes"].isNull())
						supportedNodeTypesObject.networkTypes = allSupportedEnginesNodeSupportedNodeTypesSupportedNodeType["NetworkTypes"].asString();
					auto allAvailableResourcesNode = allSupportedNodeTypesNode["AvailableResources"]["AvailableResource"];
					for (auto allSupportedNodeTypesNodeAvailableResourcesAvailableResource : allAvailableResourcesNode)
					{
						AvailableZone::SupportedEngineVersion::SupportedEngine::SupportedNodeType::AvailableResource availableResourcesObject;
						if(!allSupportedNodeTypesNodeAvailableResourcesAvailableResource["InstanceClass"].isNull())
							availableResourcesObject.instanceClass = allSupportedNodeTypesNodeAvailableResourcesAvailableResource["InstanceClass"].asString();
						supportedNodeTypesObject.availableResources.push_back(availableResourcesObject);
					}
					supportedEnginesObject.supportedNodeTypes.push_back(supportedNodeTypesObject);
				}
				supportedEngineVersionsObject.supportedEngines.push_back(supportedEnginesObject);
			}
			availableZonesObject.supportedEngineVersions.push_back(supportedEngineVersionsObject);
		}
		availableZones_.push_back(availableZonesObject);
	}

}

std::vector<DescribeAvailableResourceResult::AvailableZone> DescribeAvailableResourceResult::getAvailableZones()const
{
	return availableZones_;
}

