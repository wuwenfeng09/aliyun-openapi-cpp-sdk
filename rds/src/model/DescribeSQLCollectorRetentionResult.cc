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

#include <alibabacloud/rds/model/DescribeSQLCollectorRetentionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeSQLCollectorRetentionResult::DescribeSQLCollectorRetentionResult() :
	ServiceResult()
{}

DescribeSQLCollectorRetentionResult::DescribeSQLCollectorRetentionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSQLCollectorRetentionResult::~DescribeSQLCollectorRetentionResult()
{}

void DescribeSQLCollectorRetentionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["DBInstanceID"].isNull())
		dBInstanceID_ = std::stoi(value["DBInstanceID"].asString());
	if(!value["DBInstanceName"].isNull())
		dBInstanceName_ = value["DBInstanceName"].asString();
	if(!value["ConfigValue"].isNull())
		configValue_ = value["ConfigValue"].asString();

}

std::string DescribeSQLCollectorRetentionResult::getConfigValue()const
{
	return configValue_;
}

int DescribeSQLCollectorRetentionResult::getDBInstanceID()const
{
	return dBInstanceID_;
}

std::string DescribeSQLCollectorRetentionResult::getDBInstanceName()const
{
	return dBInstanceName_;
}

