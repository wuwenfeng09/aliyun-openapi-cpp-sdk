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

#include <alibabacloud/ccc/model/GetPredictiveJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

GetPredictiveJobResult::GetPredictiveJobResult() :
	ServiceResult()
{}

GetPredictiveJobResult::GetPredictiveJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetPredictiveJobResult::~GetPredictiveJobResult()
{}

void GetPredictiveJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto jobNode = value["Job"];
	if(!jobNode["JobId"].isNull())
		job_.jobId = jobNode["JobId"].asString();
	if(!jobNode["JobGroupId"].isNull())
		job_.jobGroupId = jobNode["JobGroupId"].asString();
	if(!jobNode["ScenarioId"].isNull())
		job_.scenarioId = jobNode["ScenarioId"].asString();
	if(!jobNode["StrategyId"].isNull())
		job_.strategyId = jobNode["StrategyId"].asString();
	if(!jobNode["Priority"].isNull())
		job_.priority = std::stoi(jobNode["Priority"].asString());
	if(!jobNode["SystemPriority"].isNull())
		job_.systemPriority = std::stoi(jobNode["SystemPriority"].asString());
	if(!jobNode["Status"].isNull())
		job_.status = jobNode["Status"].asString();
	if(!jobNode["ReferenceId"].isNull())
		job_.referenceId = jobNode["ReferenceId"].asString();
	if(!jobNode["FailureReason"].isNull())
		job_.failureReason = jobNode["FailureReason"].asString();
	auto allContactsNode = jobNode["Contacts"]["Contact"];
	for (auto jobNodeContactsContact : allContactsNode)
	{
		Job::Contact contactObject;
		if(!jobNodeContactsContact["ContactId"].isNull())
			contactObject.contactId = jobNodeContactsContact["ContactId"].asString();
		if(!jobNodeContactsContact["ContactName"].isNull())
			contactObject.contactName = jobNodeContactsContact["ContactName"].asString();
		if(!jobNodeContactsContact["Honorific"].isNull())
			contactObject.honorific = jobNodeContactsContact["Honorific"].asString();
		if(!jobNodeContactsContact["Role"].isNull())
			contactObject.role = jobNodeContactsContact["Role"].asString();
		if(!jobNodeContactsContact["PhoneNumber"].isNull())
			contactObject.phoneNumber = jobNodeContactsContact["PhoneNumber"].asString();
		if(!jobNodeContactsContact["State"].isNull())
			contactObject.state = jobNodeContactsContact["State"].asString();
		if(!jobNodeContactsContact["ReferenceId"].isNull())
			contactObject.referenceId = jobNodeContactsContact["ReferenceId"].asString();
		if(!jobNodeContactsContact["JobId"].isNull())
			contactObject.jobId = jobNodeContactsContact["JobId"].asString();
		job_.contacts.push_back(contactObject);
	}
	auto allTasksNode = jobNode["Tasks"]["Task"];
	for (auto jobNodeTasksTask : allTasksNode)
	{
		Job::Task taskObject;
		if(!jobNodeTasksTask["TaskId"].isNull())
			taskObject.taskId = jobNodeTasksTask["TaskId"].asString();
		if(!jobNodeTasksTask["JobId"].isNull())
			taskObject.jobId = jobNodeTasksTask["JobId"].asString();
		if(!jobNodeTasksTask["ScenarioId"].isNull())
			taskObject.scenarioId = jobNodeTasksTask["ScenarioId"].asString();
		if(!jobNodeTasksTask["ChatbotId"].isNull())
			taskObject.chatbotId = jobNodeTasksTask["ChatbotId"].asString();
		if(!jobNodeTasksTask["PlanedTime"].isNull())
			taskObject.planedTime = std::stol(jobNodeTasksTask["PlanedTime"].asString());
		if(!jobNodeTasksTask["ActualTime"].isNull())
			taskObject.actualTime = std::stol(jobNodeTasksTask["ActualTime"].asString());
		if(!jobNodeTasksTask["CallingNumber"].isNull())
			taskObject.callingNumber = jobNodeTasksTask["CallingNumber"].asString();
		if(!jobNodeTasksTask["CalledNumber"].isNull())
			taskObject.calledNumber = jobNodeTasksTask["CalledNumber"].asString();
		if(!jobNodeTasksTask["CallId"].isNull())
			taskObject.callId = jobNodeTasksTask["CallId"].asString();
		if(!jobNodeTasksTask["Status"].isNull())
			taskObject.status = jobNodeTasksTask["Status"].asString();
		if(!jobNodeTasksTask["Brief"].isNull())
			taskObject.brief = jobNodeTasksTask["Brief"].asString();
		if(!jobNodeTasksTask["Duration"].isNull())
			taskObject.duration = std::stoi(jobNodeTasksTask["Duration"].asString());
		auto contact1Node = value["Contact"];
		if(!contact1Node["ContactId"].isNull())
			taskObject.contact1.contactId = contact1Node["ContactId"].asString();
		if(!contact1Node["ContactName"].isNull())
			taskObject.contact1.contactName = contact1Node["ContactName"].asString();
		if(!contact1Node["Honorific"].isNull())
			taskObject.contact1.honorific = contact1Node["Honorific"].asString();
		if(!contact1Node["Role"].isNull())
			taskObject.contact1.role = contact1Node["Role"].asString();
		if(!contact1Node["PhoneNumber"].isNull())
			taskObject.contact1.phoneNumber = contact1Node["PhoneNumber"].asString();
		if(!contact1Node["State"].isNull())
			taskObject.contact1.state = contact1Node["State"].asString();
		if(!contact1Node["ReferenceId"].isNull())
			taskObject.contact1.referenceId = contact1Node["ReferenceId"].asString();
		if(!contact1Node["JobId"].isNull())
			taskObject.contact1.jobId = contact1Node["JobId"].asString();
		job_.tasks.push_back(taskObject);
	}
		auto allCallingNumbers = jobNode["CallingNumbers"]["String"];
		for (auto value : allCallingNumbers)
			job_.callingNumbers.push_back(value.asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::string GetPredictiveJobResult::getMessage()const
{
	return message_;
}

int GetPredictiveJobResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetPredictiveJobResult::Job GetPredictiveJobResult::getJob()const
{
	return job_;
}

std::string GetPredictiveJobResult::getCode()const
{
	return code_;
}

bool GetPredictiveJobResult::getSuccess()const
{
	return success_;
}

