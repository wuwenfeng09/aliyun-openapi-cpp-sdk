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

#include <alibabacloud/adb/model/DescribeSchemasRequest.h>

using AlibabaCloud::Adb::Model::DescribeSchemasRequest;

DescribeSchemasRequest::DescribeSchemasRequest() :
	RpcServiceRequest("adb", "2019-03-15", "DescribeSchemas")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeSchemasRequest::~DescribeSchemasRequest()
{}

long DescribeSchemasRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeSchemasRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeSchemasRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeSchemasRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeSchemasRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeSchemasRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeSchemasRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void DescribeSchemasRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setCoreParameter("DBClusterId", dBClusterId);
}

std::string DescribeSchemasRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeSchemasRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DescribeSchemasRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeSchemasRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

