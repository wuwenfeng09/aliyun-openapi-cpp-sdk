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

#include <alibabacloud/emr/model/ListBackupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListBackupsResult::ListBackupsResult() :
	ServiceResult()
{}

ListBackupsResult::ListBackupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListBackupsResult::~ListBackupsResult()
{}

void ListBackupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["Item"];
	for (auto valueItemsItem : allItemsNode)
	{
		Item itemsObject;
		if(!valueItemsItem["Id"].isNull())
			itemsObject.id = valueItemsItem["Id"].asString();
		if(!valueItemsItem["BackupPlanId"].isNull())
			itemsObject.backupPlanId = valueItemsItem["BackupPlanId"].asString();
		if(!valueItemsItem["ClusterId"].isNull())
			itemsObject.clusterId = valueItemsItem["ClusterId"].asString();
		if(!valueItemsItem["CreateTime"].isNull())
			itemsObject.createTime = std::stol(valueItemsItem["CreateTime"].asString());
		if(!valueItemsItem["Md5"].isNull())
			itemsObject.md5 = valueItemsItem["Md5"].asString();
		if(!valueItemsItem["TarFileName"].isNull())
			itemsObject.tarFileName = valueItemsItem["TarFileName"].asString();
		if(!valueItemsItem["StorePath"].isNull())
			itemsObject.storePath = valueItemsItem["StorePath"].asString();
		if(!valueItemsItem["Status"].isNull())
			itemsObject.status = valueItemsItem["Status"].asString();
		auto metadataInfoNode = value["MetadataInfo"];
		if(!metadataInfoNode["MetadataType"].isNull())
			itemsObject.metadataInfo.metadataType = metadataInfoNode["MetadataType"].asString();
		if(!metadataInfoNode["Properties"].isNull())
			itemsObject.metadataInfo.properties = metadataInfoNode["Properties"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListBackupsResult::getTotalCount()const
{
	return totalCount_;
}

int ListBackupsResult::getPageSize()const
{
	return pageSize_;
}

int ListBackupsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListBackupsResult::Item> ListBackupsResult::getItems()const
{
	return items_;
}

