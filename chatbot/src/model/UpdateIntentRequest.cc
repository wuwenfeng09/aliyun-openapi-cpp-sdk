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

#include <alibabacloud/chatbot/model/UpdateIntentRequest.h>

using AlibabaCloud::Chatbot::Model::UpdateIntentRequest;

UpdateIntentRequest::UpdateIntentRequest() :
	RpcServiceRequest("chatbot", "2017-10-11", "UpdateIntent")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateIntentRequest::~UpdateIntentRequest()
{}

std::string UpdateIntentRequest::getIntentDefinition()const
{
	return intentDefinition_;
}

void UpdateIntentRequest::setIntentDefinition(const std::string& intentDefinition)
{
	intentDefinition_ = intentDefinition;
	setCoreParameter("IntentDefinition", intentDefinition);
}

long UpdateIntentRequest::getIntentId()const
{
	return intentId_;
}

void UpdateIntentRequest::setIntentId(long intentId)
{
	intentId_ = intentId;
	setCoreParameter("IntentId", std::to_string(intentId));
}

