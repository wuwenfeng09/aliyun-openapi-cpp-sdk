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

#include <alibabacloud/ehpc/model/ListContainerAppsRequest.h>

using AlibabaCloud::EHPC::Model::ListContainerAppsRequest;

ListContainerAppsRequest::ListContainerAppsRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "ListContainerApps")
{}

ListContainerAppsRequest::~ListContainerAppsRequest()
{}

int ListContainerAppsRequest::getPageSize()const
{
	return pageSize_;
}

void ListContainerAppsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

int ListContainerAppsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListContainerAppsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListContainerAppsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListContainerAppsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

