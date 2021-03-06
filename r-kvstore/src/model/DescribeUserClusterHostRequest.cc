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

#include <alibabacloud/r-kvstore/model/DescribeUserClusterHostRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribeUserClusterHostRequest;

DescribeUserClusterHostRequest::DescribeUserClusterHostRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "DescribeUserClusterHost")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeUserClusterHostRequest::~DescribeUserClusterHostRequest()
{}

long DescribeUserClusterHostRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeUserClusterHostRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeUserClusterHostRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeUserClusterHostRequest::setPageNumber(const std::string& pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string DescribeUserClusterHostRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeUserClusterHostRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeUserClusterHostRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeUserClusterHostRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeUserClusterHostRequest::getRegionId()const
{
	return regionId_;
}

void DescribeUserClusterHostRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeUserClusterHostRequest::getEngine()const
{
	return engine_;
}

void DescribeUserClusterHostRequest::setEngine(const std::string& engine)
{
	engine_ = engine;
	setCoreParameter("Engine", engine);
}

std::string DescribeUserClusterHostRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeUserClusterHostRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeUserClusterHostRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeUserClusterHostRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeUserClusterHostRequest::getMaxRecordsPerPage()const
{
	return maxRecordsPerPage_;
}

void DescribeUserClusterHostRequest::setMaxRecordsPerPage(const std::string& maxRecordsPerPage)
{
	maxRecordsPerPage_ = maxRecordsPerPage;
	setCoreParameter("MaxRecordsPerPage", maxRecordsPerPage);
}

std::string DescribeUserClusterHostRequest::getClusterId()const
{
	return clusterId_;
}

void DescribeUserClusterHostRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

long DescribeUserClusterHostRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeUserClusterHostRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeUserClusterHostRequest::getZoneId()const
{
	return zoneId_;
}

void DescribeUserClusterHostRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", zoneId);
}

