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

#include <alibabacloud/ros/model/AbandonStackRequest.h>

using AlibabaCloud::ROS::Model::AbandonStackRequest;

AbandonStackRequest::AbandonStackRequest() :
	RoaServiceRequest("ros", "2015-09-01")
{}

AbandonStackRequest::~AbandonStackRequest()
{}

std::string AbandonStackRequest::getStackId()const
{
	return stackId_;
}

void AbandonStackRequest::setStackId(const std::string& stackId)
{
	stackId_ = stackId;
	setCoreParameter("StackId", stackId);
}

std::string AbandonStackRequest::getStackName()const
{
	return stackName_;
}

void AbandonStackRequest::setStackName(const std::string& stackName)
{
	stackName_ = stackName;
	setCoreParameter("StackName", stackName);
}

