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

#include <alibabacloud/cloudwf/model/ApgroupBatchDeleteApRequest.h>

using AlibabaCloud::Cloudwf::Model::ApgroupBatchDeleteApRequest;

ApgroupBatchDeleteApRequest::ApgroupBatchDeleteApRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "ApgroupBatchDeleteAp")
{}

ApgroupBatchDeleteApRequest::~ApgroupBatchDeleteApRequest()
{}

std::string ApgroupBatchDeleteApRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ApgroupBatchDeleteApRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ApgroupBatchDeleteApRequest::getApAssetIds()const
{
	return apAssetIds_;
}

void ApgroupBatchDeleteApRequest::setApAssetIds(const std::string& apAssetIds)
{
	apAssetIds_ = apAssetIds;
	setCoreParameter("ApAssetIds", apAssetIds);
}

