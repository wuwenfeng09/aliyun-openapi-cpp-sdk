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

#include <alibabacloud/vod/model/GetTranscodeSummaryRequest.h>

using AlibabaCloud::Vod::Model::GetTranscodeSummaryRequest;

GetTranscodeSummaryRequest::GetTranscodeSummaryRequest() :
	RpcServiceRequest("vod", "2017-03-21", "GetTranscodeSummary")
{}

GetTranscodeSummaryRequest::~GetTranscodeSummaryRequest()
{}

long GetTranscodeSummaryRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GetTranscodeSummaryRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string GetTranscodeSummaryRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void GetTranscodeSummaryRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long GetTranscodeSummaryRequest::getOwnerId()const
{
	return ownerId_;
}

void GetTranscodeSummaryRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string GetTranscodeSummaryRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetTranscodeSummaryRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string GetTranscodeSummaryRequest::getVideoIds()const
{
	return videoIds_;
}

void GetTranscodeSummaryRequest::setVideoIds(const std::string& videoIds)
{
	videoIds_ = videoIds;
	setCoreParameter("VideoIds", videoIds);
}

