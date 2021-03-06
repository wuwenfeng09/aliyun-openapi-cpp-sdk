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

#include <alibabacloud/green/model/DescribeCustomOcrTemplateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Green;
using namespace AlibabaCloud::Green::Model;

DescribeCustomOcrTemplateResult::DescribeCustomOcrTemplateResult() :
	ServiceResult()
{}

DescribeCustomOcrTemplateResult::DescribeCustomOcrTemplateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCustomOcrTemplateResult::~DescribeCustomOcrTemplateResult()
{}

void DescribeCustomOcrTemplateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allOcrTemplateListNode = value["OcrTemplateList"]["OcrTemplate"];
	for (auto valueOcrTemplateListOcrTemplate : allOcrTemplateListNode)
	{
		OcrTemplate ocrTemplateListObject;
		if(!valueOcrTemplateListOcrTemplate["Id"].isNull())
			ocrTemplateListObject.id = std::stol(valueOcrTemplateListOcrTemplate["Id"].asString());
		if(!valueOcrTemplateListOcrTemplate["Name"].isNull())
			ocrTemplateListObject.name = valueOcrTemplateListOcrTemplate["Name"].asString();
		if(!valueOcrTemplateListOcrTemplate["ImgUrl"].isNull())
			ocrTemplateListObject.imgUrl = valueOcrTemplateListOcrTemplate["ImgUrl"].asString();
		if(!valueOcrTemplateListOcrTemplate["Status"].isNull())
			ocrTemplateListObject.status = std::stoi(valueOcrTemplateListOcrTemplate["Status"].asString());
		auto allReferAreaNode = allOcrTemplateListNode["ReferArea"]["item"];
		for (auto allOcrTemplateListNodeReferAreaitem : allReferAreaNode)
		{
			OcrTemplate::Item referAreaObject;
			if(!allOcrTemplateListNodeReferAreaitem["Name"].isNull())
				referAreaObject.name = allOcrTemplateListNodeReferAreaitem["Name"].asString();
			if(!allOcrTemplateListNodeReferAreaitem["X"].isNull())
				referAreaObject.x = std::stoi(allOcrTemplateListNodeReferAreaitem["X"].asString());
			if(!allOcrTemplateListNodeReferAreaitem["Y"].isNull())
				referAreaObject.y = std::stoi(allOcrTemplateListNodeReferAreaitem["Y"].asString());
			if(!allOcrTemplateListNodeReferAreaitem["Width"].isNull())
				referAreaObject.width = std::stoi(allOcrTemplateListNodeReferAreaitem["Width"].asString());
			if(!allOcrTemplateListNodeReferAreaitem["Height"].isNull())
				referAreaObject.height = std::stoi(allOcrTemplateListNodeReferAreaitem["Height"].asString());
			ocrTemplateListObject.referArea.push_back(referAreaObject);
		}
		auto allRecognizeAreaNode = allOcrTemplateListNode["RecognizeArea"]["item"];
		for (auto allOcrTemplateListNodeRecognizeAreaitem : allRecognizeAreaNode)
		{
			OcrTemplate::Item recognizeAreaObject;
			if(!allOcrTemplateListNodeRecognizeAreaitem["Name"].isNull())
				recognizeAreaObject.name = allOcrTemplateListNodeRecognizeAreaitem["Name"].asString();
			if(!allOcrTemplateListNodeRecognizeAreaitem["X"].isNull())
				recognizeAreaObject.x = std::stoi(allOcrTemplateListNodeRecognizeAreaitem["X"].asString());
			if(!allOcrTemplateListNodeRecognizeAreaitem["Y"].isNull())
				recognizeAreaObject.y = std::stoi(allOcrTemplateListNodeRecognizeAreaitem["Y"].asString());
			if(!allOcrTemplateListNodeRecognizeAreaitem["Width"].isNull())
				recognizeAreaObject.width = std::stoi(allOcrTemplateListNodeRecognizeAreaitem["Width"].asString());
			if(!allOcrTemplateListNodeRecognizeAreaitem["Height"].isNull())
				recognizeAreaObject.height = std::stoi(allOcrTemplateListNodeRecognizeAreaitem["Height"].asString());
			ocrTemplateListObject.recognizeArea.push_back(recognizeAreaObject);
		}
		ocrTemplateList_.push_back(ocrTemplateListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeCustomOcrTemplateResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeCustomOcrTemplateResult::OcrTemplate> DescribeCustomOcrTemplateResult::getOcrTemplateList()const
{
	return ocrTemplateList_;
}

