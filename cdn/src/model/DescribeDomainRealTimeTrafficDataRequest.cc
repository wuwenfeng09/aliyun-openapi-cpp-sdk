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

#include <alibabacloud/cdn/model/DescribeDomainRealTimeTrafficDataRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainRealTimeTrafficDataRequest;

DescribeDomainRealTimeTrafficDataRequest::DescribeDomainRealTimeTrafficDataRequest() :
	RpcServiceRequest("cdn", "2018-05-10", "DescribeDomainRealTimeTrafficData")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDomainRealTimeTrafficDataRequest::~DescribeDomainRealTimeTrafficDataRequest()
{}

std::string DescribeDomainRealTimeTrafficDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDomainRealTimeTrafficDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeDomainRealTimeTrafficDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDomainRealTimeTrafficDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string DescribeDomainRealTimeTrafficDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDomainRealTimeTrafficDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

long DescribeDomainRealTimeTrafficDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDomainRealTimeTrafficDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

