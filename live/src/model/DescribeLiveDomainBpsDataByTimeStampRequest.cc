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

#include <alibabacloud/live/model/DescribeLiveDomainBpsDataByTimeStampRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveDomainBpsDataByTimeStampRequest;

DescribeLiveDomainBpsDataByTimeStampRequest::DescribeLiveDomainBpsDataByTimeStampRequest() :
	RpcServiceRequest("live", "2016-11-01", "DescribeLiveDomainBpsDataByTimeStamp")
{}

DescribeLiveDomainBpsDataByTimeStampRequest::~DescribeLiveDomainBpsDataByTimeStampRequest()
{}

std::string DescribeLiveDomainBpsDataByTimeStampRequest::getLocationNames()const
{
	return locationNames_;
}

void DescribeLiveDomainBpsDataByTimeStampRequest::setLocationNames(const std::string& locationNames)
{
	locationNames_ = locationNames;
	setCoreParameter("LocationNames", locationNames);
}

std::string DescribeLiveDomainBpsDataByTimeStampRequest::getIspNames()const
{
	return ispNames_;
}

void DescribeLiveDomainBpsDataByTimeStampRequest::setIspNames(const std::string& ispNames)
{
	ispNames_ = ispNames;
	setCoreParameter("IspNames", ispNames);
}

std::string DescribeLiveDomainBpsDataByTimeStampRequest::getDomainName()const
{
	return domainName_;
}

void DescribeLiveDomainBpsDataByTimeStampRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

long DescribeLiveDomainBpsDataByTimeStampRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLiveDomainBpsDataByTimeStampRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeLiveDomainBpsDataByTimeStampRequest::getTimePoint()const
{
	return timePoint_;
}

void DescribeLiveDomainBpsDataByTimeStampRequest::setTimePoint(const std::string& timePoint)
{
	timePoint_ = timePoint;
	setCoreParameter("TimePoint", timePoint);
}

