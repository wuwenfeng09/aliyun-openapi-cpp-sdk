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

#include <alibabacloud/vpc/model/CreateIpv6GatewayRequest.h>

using AlibabaCloud::Vpc::Model::CreateIpv6GatewayRequest;

CreateIpv6GatewayRequest::CreateIpv6GatewayRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "CreateIpv6Gateway")
{}

CreateIpv6GatewayRequest::~CreateIpv6GatewayRequest()
{}

long CreateIpv6GatewayRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateIpv6GatewayRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateIpv6GatewayRequest::getClientToken()const
{
	return clientToken_;
}

void CreateIpv6GatewayRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string CreateIpv6GatewayRequest::getDescription()const
{
	return description_;
}

void CreateIpv6GatewayRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string CreateIpv6GatewayRequest::getSpec()const
{
	return spec_;
}

void CreateIpv6GatewayRequest::setSpec(const std::string& spec)
{
	spec_ = spec;
	setCoreParameter("Spec", spec);
}

std::string CreateIpv6GatewayRequest::getRegionId()const
{
	return regionId_;
}

void CreateIpv6GatewayRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateIpv6GatewayRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateIpv6GatewayRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateIpv6GatewayRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateIpv6GatewayRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long CreateIpv6GatewayRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateIpv6GatewayRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateIpv6GatewayRequest::getVpcId()const
{
	return vpcId_;
}

void CreateIpv6GatewayRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setCoreParameter("VpcId", vpcId);
}

std::string CreateIpv6GatewayRequest::getName()const
{
	return name_;
}

void CreateIpv6GatewayRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

