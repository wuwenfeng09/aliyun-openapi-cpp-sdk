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

#include <alibabacloud/emr/model/CreateUserRequest.h>

using AlibabaCloud::Emr::Model::CreateUserRequest;

CreateUserRequest::CreateUserRequest() :
	RpcServiceRequest("emr", "2016-04-08", "CreateUser")
{}

CreateUserRequest::~CreateUserRequest()
{}

long CreateUserRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateUserRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateUserRequest::getUserType()const
{
	return userType_;
}

void CreateUserRequest::setUserType(const std::string& userType)
{
	userType_ = userType;
	setCoreParameter("UserType", userType);
}

std::string CreateUserRequest::getDescription()const
{
	return description_;
}

void CreateUserRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string CreateUserRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateUserRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::vector<CreateUserRequest::UserAccountParamList> CreateUserRequest::getUserAccountParamList()const
{
	return userAccountParamList_;
}

void CreateUserRequest::setUserAccountParamList(const std::vector<UserAccountParamList>& userAccountParamList)
{
	userAccountParamList_ = userAccountParamList;
	int i = 0;
	for(int i = 0; i!= userAccountParamList.size(); i++)	{
		auto obj = userAccountParamList.at(i);
		std::string str ="UserAccountParamList."+ std::to_string(i);
		setCoreParameter(str + ".AccountType", obj.accountType);
		setCoreParameter(str + ".AuthType", obj.authType);
		setCoreParameter(str + ".AccountPassword", obj.accountPassword);
	}
}

std::vector<long> CreateUserRequest::getGroupIdList()const
{
	return groupIdList_;
}

void CreateUserRequest::setGroupIdList(const std::vector<long>& groupIdList)
{
	groupIdList_ = groupIdList;
	for(int i = 0; i!= groupIdList.size(); i++)
		setCoreParameter("GroupIdList."+ std::to_string(i), std::to_string(groupIdList.at(i)));
}

std::string CreateUserRequest::getRegionId()const
{
	return regionId_;
}

void CreateUserRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::vector<long> CreateUserRequest::getRoleIdList()const
{
	return roleIdList_;
}

void CreateUserRequest::setRoleIdList(const std::vector<long>& roleIdList)
{
	roleIdList_ = roleIdList;
	for(int i = 0; i!= roleIdList.size(); i++)
		setCoreParameter("RoleIdList."+ std::to_string(i), std::to_string(roleIdList.at(i)));
}

std::string CreateUserRequest::getAliyunUserId()const
{
	return aliyunUserId_;
}

void CreateUserRequest::setAliyunUserId(const std::string& aliyunUserId)
{
	aliyunUserId_ = aliyunUserId;
	setCoreParameter("AliyunUserId", aliyunUserId);
}

std::string CreateUserRequest::getUserName()const
{
	return userName_;
}

void CreateUserRequest::setUserName(const std::string& userName)
{
	userName_ = userName;
	setCoreParameter("UserName", userName);
}

std::string CreateUserRequest::getStatus()const
{
	return status_;
}

void CreateUserRequest::setStatus(const std::string& status)
{
	status_ = status;
	setCoreParameter("Status", status);
}

