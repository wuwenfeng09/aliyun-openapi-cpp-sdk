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

#include <alibabacloud/cloudwf/model/ProfileConsumeRequest.h>

using AlibabaCloud::Cloudwf::Model::ProfileConsumeRequest;

ProfileConsumeRequest::ProfileConsumeRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "ProfileConsume")
{}

ProfileConsumeRequest::~ProfileConsumeRequest()
{}

std::string ProfileConsumeRequest::getBeginDate()const
{
	return beginDate_;
}

void ProfileConsumeRequest::setBeginDate(const std::string& beginDate)
{
	beginDate_ = beginDate;
	setCoreParameter("BeginDate", beginDate);
}

std::string ProfileConsumeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ProfileConsumeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ProfileConsumeRequest::getEndDate()const
{
	return endDate_;
}

void ProfileConsumeRequest::setEndDate(const std::string& endDate)
{
	endDate_ = endDate;
	setCoreParameter("EndDate", endDate);
}

int ProfileConsumeRequest::getDataType()const
{
	return dataType_;
}

void ProfileConsumeRequest::setDataType(int dataType)
{
	dataType_ = dataType;
	setCoreParameter("DataType", std::to_string(dataType));
}

long ProfileConsumeRequest::getGsid()const
{
	return gsid_;
}

void ProfileConsumeRequest::setGsid(long gsid)
{
	gsid_ = gsid;
	setCoreParameter("Gsid", std::to_string(gsid));
}

