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

#include <alibabacloud/adb/model/ModifyDBClusterMaintainTimeRequest.h>

using AlibabaCloud::Adb::Model::ModifyDBClusterMaintainTimeRequest;

ModifyDBClusterMaintainTimeRequest::ModifyDBClusterMaintainTimeRequest() :
	RpcServiceRequest("adb", "2019-03-15", "ModifyDBClusterMaintainTime")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyDBClusterMaintainTimeRequest::~ModifyDBClusterMaintainTimeRequest()
{}

long ModifyDBClusterMaintainTimeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyDBClusterMaintainTimeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyDBClusterMaintainTimeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyDBClusterMaintainTimeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ModifyDBClusterMaintainTimeRequest::getMaintainTime()const
{
	return maintainTime_;
}

void ModifyDBClusterMaintainTimeRequest::setMaintainTime(const std::string& maintainTime)
{
	maintainTime_ = maintainTime;
	setCoreParameter("MaintainTime", maintainTime);
}

std::string ModifyDBClusterMaintainTimeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyDBClusterMaintainTimeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyDBClusterMaintainTimeRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void ModifyDBClusterMaintainTimeRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setCoreParameter("DBClusterId", dBClusterId);
}

std::string ModifyDBClusterMaintainTimeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyDBClusterMaintainTimeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long ModifyDBClusterMaintainTimeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyDBClusterMaintainTimeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

