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

#include <alibabacloud/dyvmsapi/model/SmartCallOperateRequest.h>

using AlibabaCloud::Dyvmsapi::Model::SmartCallOperateRequest;

SmartCallOperateRequest::SmartCallOperateRequest() :
	RpcServiceRequest("dyvmsapi", "2017-05-25", "SmartCallOperate")
{
	setMethod(HttpRequest::Method::Post);
}

SmartCallOperateRequest::~SmartCallOperateRequest()
{}

std::string SmartCallOperateRequest::getCallId()const
{
	return callId_;
}

void SmartCallOperateRequest::setCallId(const std::string& callId)
{
	callId_ = callId;
	setCoreParameter("CallId", callId);
}

long SmartCallOperateRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SmartCallOperateRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string SmartCallOperateRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SmartCallOperateRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string SmartCallOperateRequest::getParam()const
{
	return param_;
}

void SmartCallOperateRequest::setParam(const std::string& param)
{
	param_ = param;
	setCoreParameter("Param", param);
}

std::string SmartCallOperateRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SmartCallOperateRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long SmartCallOperateRequest::getOwnerId()const
{
	return ownerId_;
}

void SmartCallOperateRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string SmartCallOperateRequest::getCommand()const
{
	return command_;
}

void SmartCallOperateRequest::setCommand(const std::string& command)
{
	command_ = command;
	setCoreParameter("Command", command);
}

