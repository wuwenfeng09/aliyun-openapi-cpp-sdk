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

#include <alibabacloud/cms/model/DescribeAlertingMetricRuleResourcesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

DescribeAlertingMetricRuleResourcesResult::DescribeAlertingMetricRuleResourcesResult() :
	ServiceResult()
{}

DescribeAlertingMetricRuleResourcesResult::DescribeAlertingMetricRuleResourcesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAlertingMetricRuleResourcesResult::~DescribeAlertingMetricRuleResourcesResult()
{}

void DescribeAlertingMetricRuleResourcesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResourcesNode = value["Resources"]["Resource"];
	for (auto valueResourcesResource : allResourcesNode)
	{
		Resource resourcesObject;
		if(!valueResourcesResource["RuleId"].isNull())
			resourcesObject.ruleId = valueResourcesResource["RuleId"].asString();
		if(!valueResourcesResource["RuleName"].isNull())
			resourcesObject.ruleName = valueResourcesResource["RuleName"].asString();
		if(!valueResourcesResource["GroupId"].isNull())
			resourcesObject.groupId = valueResourcesResource["GroupId"].asString();
		if(!valueResourcesResource["Resource"].isNull())
			resourcesObject.resource = valueResourcesResource["Resource"].asString();
		if(!valueResourcesResource["Enable"].isNull())
			resourcesObject.enable = valueResourcesResource["Enable"].asString();
		if(!valueResourcesResource["LastAlertTime"].isNull())
			resourcesObject.lastAlertTime = valueResourcesResource["LastAlertTime"].asString();
		if(!valueResourcesResource["LastModifyTime"].isNull())
			resourcesObject.lastModifyTime = valueResourcesResource["LastModifyTime"].asString();
		if(!valueResourcesResource["StartTime"].isNull())
			resourcesObject.startTime = valueResourcesResource["StartTime"].asString();
		if(!valueResourcesResource["MetricValues"].isNull())
			resourcesObject.metricValues = valueResourcesResource["MetricValues"].asString();
		if(!valueResourcesResource["RetryTimes"].isNull())
			resourcesObject.retryTimes = valueResourcesResource["RetryTimes"].asString();
		if(!valueResourcesResource["Threshold"].isNull())
			resourcesObject.threshold = valueResourcesResource["Threshold"].asString();
		resources_.push_back(resourcesObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

std::string DescribeAlertingMetricRuleResourcesResult::getMessage()const
{
	return message_;
}

int DescribeAlertingMetricRuleResourcesResult::getTotal()const
{
	return total_;
}

std::vector<DescribeAlertingMetricRuleResourcesResult::Resource> DescribeAlertingMetricRuleResourcesResult::getResources()const
{
	return resources_;
}

int DescribeAlertingMetricRuleResourcesResult::getCode()const
{
	return code_;
}

bool DescribeAlertingMetricRuleResourcesResult::getSuccess()const
{
	return success_;
}

