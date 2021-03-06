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

#include <alibabacloud/emr/model/DescribeUserGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

DescribeUserGroupResult::DescribeUserGroupResult() :
	ServiceResult()
{}

DescribeUserGroupResult::DescribeUserGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeUserGroupResult::~DescribeUserGroupResult()
{}

void DescribeUserGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRoleDTOListNode = value["RoleDTOList"]["RoleDTO"];
	for (auto valueRoleDTOListRoleDTO : allRoleDTOListNode)
	{
		RoleDTO roleDTOListObject;
		if(!valueRoleDTOListRoleDTO["Id"].isNull())
			roleDTOListObject.id = std::stol(valueRoleDTOListRoleDTO["Id"].asString());
		if(!valueRoleDTOListRoleDTO["Name"].isNull())
			roleDTOListObject.name = valueRoleDTOListRoleDTO["Name"].asString();
		if(!valueRoleDTOListRoleDTO["ResourceType"].isNull())
			roleDTOListObject.resourceType = valueRoleDTOListRoleDTO["ResourceType"].asString();
		if(!valueRoleDTOListRoleDTO["GmtCreate"].isNull())
			roleDTOListObject.gmtCreate = valueRoleDTOListRoleDTO["GmtCreate"].asString();
		if(!valueRoleDTOListRoleDTO["GmtModified"].isNull())
			roleDTOListObject.gmtModified = valueRoleDTOListRoleDTO["GmtModified"].asString();
		if(!valueRoleDTOListRoleDTO["Description"].isNull())
			roleDTOListObject.description = valueRoleDTOListRoleDTO["Description"].asString();
		roleDTOList_.push_back(roleDTOListObject);
	}
	if(!value["Paging"].isNull())
		paging_ = value["Paging"].asString() == "true";
	if(!value["Id"].isNull())
		id_ = std::stol(value["Id"].asString());
	if(!value["Type"].isNull())
		type_ = value["Type"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["GmtCreate"].isNull())
		gmtCreate_ = value["GmtCreate"].asString();

}

std::string DescribeUserGroupResult::getType()const
{
	return type_;
}

std::string DescribeUserGroupResult::getGmtCreate()const
{
	return gmtCreate_;
}

bool DescribeUserGroupResult::getPaging()const
{
	return paging_;
}

long DescribeUserGroupResult::getId()const
{
	return id_;
}

std::vector<DescribeUserGroupResult::RoleDTO> DescribeUserGroupResult::getRoleDTOList()const
{
	return roleDTOList_;
}

std::string DescribeUserGroupResult::getName()const
{
	return name_;
}

