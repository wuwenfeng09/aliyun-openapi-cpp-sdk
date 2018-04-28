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

#include <alibabacloud/dcdn/model/StartDcdnDomainRequest.h>

using AlibabaCloud::Dcdn::Model::StartDcdnDomainRequest;

StartDcdnDomainRequest::StartDcdnDomainRequest() :
	RpcServiceRequest("dcdn", "2018-01-15", "StartDcdnDomain")
{}

StartDcdnDomainRequest::~StartDcdnDomainRequest()
{}

std::string StartDcdnDomainRequest::getSecurityToken()const
{
	return securityToken_;
}

void StartDcdnDomainRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string StartDcdnDomainRequest::getDomainName()const
{
	return domainName_;
}

void StartDcdnDomainRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

long StartDcdnDomainRequest::getOwnerId()const
{
	return ownerId_;
}

void StartDcdnDomainRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string StartDcdnDomainRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void StartDcdnDomainRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}
