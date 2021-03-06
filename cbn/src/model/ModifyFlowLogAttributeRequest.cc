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

#include <alibabacloud/cbn/model/ModifyFlowLogAttributeRequest.h>

using AlibabaCloud::Cbn::Model::ModifyFlowLogAttributeRequest;

ModifyFlowLogAttributeRequest::ModifyFlowLogAttributeRequest() :
	RpcServiceRequest("cbn", "2017-09-12", "ModifyFlowLogAttribute")
{}

ModifyFlowLogAttributeRequest::~ModifyFlowLogAttributeRequest()
{}

long ModifyFlowLogAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyFlowLogAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyFlowLogAttributeRequest::getClientToken()const
{
	return clientToken_;
}

void ModifyFlowLogAttributeRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string ModifyFlowLogAttributeRequest::getCenId()const
{
	return cenId_;
}

void ModifyFlowLogAttributeRequest::setCenId(const std::string& cenId)
{
	cenId_ = cenId;
	setCoreParameter("CenId", cenId);
}

std::string ModifyFlowLogAttributeRequest::getDescription()const
{
	return description_;
}

void ModifyFlowLogAttributeRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string ModifyFlowLogAttributeRequest::getRegionId()const
{
	return regionId_;
}

void ModifyFlowLogAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyFlowLogAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyFlowLogAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyFlowLogAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyFlowLogAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long ModifyFlowLogAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyFlowLogAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyFlowLogAttributeRequest::getFlowLogId()const
{
	return flowLogId_;
}

void ModifyFlowLogAttributeRequest::setFlowLogId(const std::string& flowLogId)
{
	flowLogId_ = flowLogId;
	setCoreParameter("FlowLogId", flowLogId);
}

std::string ModifyFlowLogAttributeRequest::getFlowLogName()const
{
	return flowLogName_;
}

void ModifyFlowLogAttributeRequest::setFlowLogName(const std::string& flowLogName)
{
	flowLogName_ = flowLogName;
	setCoreParameter("FlowLogName", flowLogName);
}

