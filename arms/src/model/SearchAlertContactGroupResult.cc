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

#include <alibabacloud/arms/model/SearchAlertContactGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

SearchAlertContactGroupResult::SearchAlertContactGroupResult() :
	ServiceResult()
{}

SearchAlertContactGroupResult::SearchAlertContactGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SearchAlertContactGroupResult::~SearchAlertContactGroupResult()
{}

void SearchAlertContactGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allContactGroupsNode = value["ContactGroups"]["ContactGroup"];
	for (auto valueContactGroupsContactGroup : allContactGroupsNode)
	{
		ContactGroup contactGroupsObject;
		if(!valueContactGroupsContactGroup["ContactGroupId"].isNull())
			contactGroupsObject.contactGroupId = std::stol(valueContactGroupsContactGroup["ContactGroupId"].asString());
		if(!valueContactGroupsContactGroup["ContactGroupName"].isNull())
			contactGroupsObject.contactGroupName = valueContactGroupsContactGroup["ContactGroupName"].asString();
		if(!valueContactGroupsContactGroup["UserId"].isNull())
			contactGroupsObject.userId = valueContactGroupsContactGroup["UserId"].asString();
		if(!valueContactGroupsContactGroup["CreateTime"].isNull())
			contactGroupsObject.createTime = std::stol(valueContactGroupsContactGroup["CreateTime"].asString());
		if(!valueContactGroupsContactGroup["UpdateTime"].isNull())
			contactGroupsObject.updateTime = std::stol(valueContactGroupsContactGroup["UpdateTime"].asString());
		contactGroups_.push_back(contactGroupsObject);
	}

}

std::vector<SearchAlertContactGroupResult::ContactGroup> SearchAlertContactGroupResult::getContactGroups()const
{
	return contactGroups_;
}

