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

#include <alibabacloud/live/model/DescribeForbidPushStreamRoomListRequest.h>

using AlibabaCloud::Live::Model::DescribeForbidPushStreamRoomListRequest;

DescribeForbidPushStreamRoomListRequest::DescribeForbidPushStreamRoomListRequest() :
	RpcServiceRequest("live", "2016-11-01", "DescribeForbidPushStreamRoomList")
{}

DescribeForbidPushStreamRoomListRequest::~DescribeForbidPushStreamRoomListRequest()
{}

int DescribeForbidPushStreamRoomListRequest::getPageNum()const
{
	return pageNum_;
}

void DescribeForbidPushStreamRoomListRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setCoreParameter("PageNum", std::to_string(pageNum));
}

int DescribeForbidPushStreamRoomListRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeForbidPushStreamRoomListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeForbidPushStreamRoomListRequest::getOrder()const
{
	return order_;
}

void DescribeForbidPushStreamRoomListRequest::setOrder(const std::string& order)
{
	order_ = order;
	setCoreParameter("Order", order);
}

long DescribeForbidPushStreamRoomListRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeForbidPushStreamRoomListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeForbidPushStreamRoomListRequest::getAppId()const
{
	return appId_;
}

void DescribeForbidPushStreamRoomListRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", appId);
}

