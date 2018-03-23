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

#include <alibabacloud/push/model/QueryTagsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Push;
using namespace AlibabaCloud::Push::Model;

QueryTagsResult::QueryTagsResult() :
	ServiceResult()
{}

QueryTagsResult::QueryTagsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryTagsResult::~QueryTagsResult()
{}

void QueryTagsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allTagInfos = value["TagInfos"]["TagInfo"];
	for (auto value : allTagInfos)
	{
		TagInfo tagInfosObject;
		if(!value["TagName"].isNull())
			tagInfosObject.tagName = value["TagName"].asString();
		tagInfos_.push_back(tagInfosObject);
	}

}

std::vector<QueryTagsResult::TagInfo> QueryTagsResult::getTagInfos()const
{
	return tagInfos_;
}
