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

#include <alibabacloud/vod/model/SubmitAIJobRequest.h>

using AlibabaCloud::Vod::Model::SubmitAIJobRequest;

SubmitAIJobRequest::SubmitAIJobRequest() :
	RpcServiceRequest("vod", "2017-03-21", "SubmitAIJob")
{}

SubmitAIJobRequest::~SubmitAIJobRequest()
{}

std::string SubmitAIJobRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SubmitAIJobRequest::setResourceOwnerId(const std::string& resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string SubmitAIJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SubmitAIJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string SubmitAIJobRequest::getUserData()const
{
	return userData_;
}

void SubmitAIJobRequest::setUserData(const std::string& userData)
{
	userData_ = userData;
	setCoreParameter("UserData", userData);
}

std::string SubmitAIJobRequest::getTypes()const
{
	return types_;
}

void SubmitAIJobRequest::setTypes(const std::string& types)
{
	types_ = types;
	setCoreParameter("Types", types);
}

std::string SubmitAIJobRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SubmitAIJobRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string SubmitAIJobRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SubmitAIJobRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string SubmitAIJobRequest::getOwnerId()const
{
	return ownerId_;
}

void SubmitAIJobRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string SubmitAIJobRequest::getMediaId()const
{
	return mediaId_;
}

void SubmitAIJobRequest::setMediaId(const std::string& mediaId)
{
	mediaId_ = mediaId;
	setCoreParameter("MediaId", mediaId);
}

std::string SubmitAIJobRequest::getInput()const
{
	return input_;
}

void SubmitAIJobRequest::setInput(const std::string& input)
{
	input_ = input;
	setCoreParameter("Input", input);
}

std::string SubmitAIJobRequest::getConfig()const
{
	return config_;
}

void SubmitAIJobRequest::setConfig(const std::string& config)
{
	config_ = config;
	setCoreParameter("Config", config);
}

