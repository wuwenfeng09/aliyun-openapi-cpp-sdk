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

#include <alibabacloud/xtrace/model/ListServicesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Xtrace;
using namespace AlibabaCloud::Xtrace::Model;

ListServicesResult::ListServicesResult() :
	ServiceResult()
{}

ListServicesResult::ListServicesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListServicesResult::~ListServicesResult()
{}

void ListServicesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allServicesNode = value["Services"]["Service"];
	for (auto valueServicesService : allServicesNode)
	{
		Service servicesObject;
		if(!valueServicesService["ServiceName"].isNull())
			servicesObject.serviceName = valueServicesService["ServiceName"].asString();
		if(!valueServicesService["Pid"].isNull())
			servicesObject.pid = valueServicesService["Pid"].asString();
		if(!valueServicesService["RegionId"].isNull())
			servicesObject.regionId = valueServicesService["RegionId"].asString();
		services_.push_back(servicesObject);
	}

}

std::vector<ListServicesResult::Service> ListServicesResult::getServices()const
{
	return services_;
}

