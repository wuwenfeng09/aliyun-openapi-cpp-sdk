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

#include <alibabacloud/slb/model/AddListenerWhiteListItemRequest.h>

using AlibabaCloud::Slb::Model::AddListenerWhiteListItemRequest;

AddListenerWhiteListItemRequest::AddListenerWhiteListItemRequest() :
	RpcServiceRequest("slb", "2014-05-15", "AddListenerWhiteListItem")
{}

AddListenerWhiteListItemRequest::~AddListenerWhiteListItemRequest()
{}

std::string AddListenerWhiteListItemRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void AddListenerWhiteListItemRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setCoreParameter("Access_key_id", access_key_id);
}

long AddListenerWhiteListItemRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AddListenerWhiteListItemRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string AddListenerWhiteListItemRequest::getSourceItems()const
{
	return sourceItems_;
}

void AddListenerWhiteListItemRequest::setSourceItems(const std::string& sourceItems)
{
	sourceItems_ = sourceItems;
	setCoreParameter("SourceItems", sourceItems);
}

std::string AddListenerWhiteListItemRequest::getRegionId()const
{
	return regionId_;
}

void AddListenerWhiteListItemRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int AddListenerWhiteListItemRequest::getListenerPort()const
{
	return listenerPort_;
}

void AddListenerWhiteListItemRequest::setListenerPort(int listenerPort)
{
	listenerPort_ = listenerPort;
	setCoreParameter("ListenerPort", std::to_string(listenerPort));
}

std::string AddListenerWhiteListItemRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AddListenerWhiteListItemRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string AddListenerWhiteListItemRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AddListenerWhiteListItemRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long AddListenerWhiteListItemRequest::getOwnerId()const
{
	return ownerId_;
}

void AddListenerWhiteListItemRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string AddListenerWhiteListItemRequest::getListenerProtocol()const
{
	return listenerProtocol_;
}

void AddListenerWhiteListItemRequest::setListenerProtocol(const std::string& listenerProtocol)
{
	listenerProtocol_ = listenerProtocol;
	setCoreParameter("ListenerProtocol", listenerProtocol);
}

std::string AddListenerWhiteListItemRequest::getTags()const
{
	return tags_;
}

void AddListenerWhiteListItemRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setCoreParameter("Tags", tags);
}

std::string AddListenerWhiteListItemRequest::getLoadBalancerId()const
{
	return loadBalancerId_;
}

void AddListenerWhiteListItemRequest::setLoadBalancerId(const std::string& loadBalancerId)
{
	loadBalancerId_ = loadBalancerId;
	setCoreParameter("LoadBalancerId", loadBalancerId);
}

