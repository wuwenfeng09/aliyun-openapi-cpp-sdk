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

#include <alibabacloud/arms/model/GetServicesRequest.h>

using AlibabaCloud::ARMS::Model::GetServicesRequest;

GetServicesRequest::GetServicesRequest() :
	RpcServiceRequest("arms", "2019-02-19", "GetServices")
{}

GetServicesRequest::~GetServicesRequest()
{}

std::string GetServicesRequest::getRegionId()const
{
	return regionId_;
}

void GetServicesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string GetServicesRequest::getAppType()const
{
	return appType_;
}

void GetServicesRequest::setAppType(const std::string& appType)
{
	appType_ = appType;
	setCoreParameter("AppType", appType);
}
