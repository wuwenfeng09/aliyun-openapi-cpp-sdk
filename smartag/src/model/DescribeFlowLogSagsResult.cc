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

#include <alibabacloud/smartag/model/DescribeFlowLogSagsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

DescribeFlowLogSagsResult::DescribeFlowLogSagsResult() :
	ServiceResult()
{}

DescribeFlowLogSagsResult::DescribeFlowLogSagsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeFlowLogSagsResult::~DescribeFlowLogSagsResult()
{}

void DescribeFlowLogSagsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSagsNode = value["Sags"]["Sag"];
	for (auto valueSagsSag : allSagsNode)
	{
		Sag sagsObject;
		if(!valueSagsSag["SmartAGId"].isNull())
			sagsObject.smartAGId = valueSagsSag["SmartAGId"].asString();
		if(!valueSagsSag["Description"].isNull())
			sagsObject.description = valueSagsSag["Description"].asString();
		if(!valueSagsSag["Name"].isNull())
			sagsObject.name = valueSagsSag["Name"].asString();
		sags_.push_back(sagsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeFlowLogSagsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeFlowLogSagsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeFlowLogSagsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeFlowLogSagsResult::Sag> DescribeFlowLogSagsResult::getSags()const
{
	return sags_;
}

