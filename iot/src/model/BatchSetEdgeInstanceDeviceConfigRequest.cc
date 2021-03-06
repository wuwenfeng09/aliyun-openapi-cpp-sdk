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

#include <alibabacloud/iot/model/BatchSetEdgeInstanceDeviceConfigRequest.h>

using AlibabaCloud::Iot::Model::BatchSetEdgeInstanceDeviceConfigRequest;

BatchSetEdgeInstanceDeviceConfigRequest::BatchSetEdgeInstanceDeviceConfigRequest() :
	RpcServiceRequest("iot", "2018-01-20", "BatchSetEdgeInstanceDeviceConfig")
{}

BatchSetEdgeInstanceDeviceConfigRequest::~BatchSetEdgeInstanceDeviceConfigRequest()
{}

std::string BatchSetEdgeInstanceDeviceConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void BatchSetEdgeInstanceDeviceConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string BatchSetEdgeInstanceDeviceConfigRequest::getInstanceId()const
{
	return instanceId_;
}

void BatchSetEdgeInstanceDeviceConfigRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::vector<BatchSetEdgeInstanceDeviceConfigRequest::DeviceConfigs> BatchSetEdgeInstanceDeviceConfigRequest::getDeviceConfigs()const
{
	return deviceConfigs_;
}

void BatchSetEdgeInstanceDeviceConfigRequest::setDeviceConfigs(const std::vector<DeviceConfigs>& deviceConfigs)
{
	deviceConfigs_ = deviceConfigs;
	int i = 0;
	for(int i = 0; i!= deviceConfigs.size(); i++)	{
		auto obj = deviceConfigs.at(i);
		std::string str ="DeviceConfigs."+ std::to_string(i);
		setCoreParameter(str + ".IotId", obj.iotId);
		setCoreParameter(str + ".Content", obj.content);
	}
}

std::string BatchSetEdgeInstanceDeviceConfigRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void BatchSetEdgeInstanceDeviceConfigRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", iotInstanceId);
}

