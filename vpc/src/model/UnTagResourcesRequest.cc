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

#include <alibabacloud/vpc/model/UnTagResourcesRequest.h>

using AlibabaCloud::Vpc::Model::UnTagResourcesRequest;

UnTagResourcesRequest::UnTagResourcesRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "UnTagResources")
{}

UnTagResourcesRequest::~UnTagResourcesRequest()
{}

long UnTagResourcesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UnTagResourcesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string UnTagResourcesRequest::getRegionId()const
{
	return regionId_;
}

void UnTagResourcesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::vector<std::string> UnTagResourcesRequest::getResourceId()const
{
	return resourceId_;
}

void UnTagResourcesRequest::setResourceId(const std::vector<std::string>& resourceId)
{
	resourceId_ = resourceId;
	for(int i = 0; i!= resourceId.size(); i++)
		setCoreParameter("ResourceId."+ std::to_string(i), resourceId.at(i));
}

std::string UnTagResourcesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UnTagResourcesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string UnTagResourcesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void UnTagResourcesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long UnTagResourcesRequest::getOwnerId()const
{
	return ownerId_;
}

void UnTagResourcesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string UnTagResourcesRequest::getResourceType()const
{
	return resourceType_;
}

void UnTagResourcesRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setCoreParameter("ResourceType", resourceType);
}

std::vector<std::string> UnTagResourcesRequest::getTagKey()const
{
	return tagKey_;
}

void UnTagResourcesRequest::setTagKey(const std::vector<std::string>& tagKey)
{
	tagKey_ = tagKey;
	for(int i = 0; i!= tagKey.size(); i++)
		setCoreParameter("TagKey."+ std::to_string(i), tagKey.at(i));
}

