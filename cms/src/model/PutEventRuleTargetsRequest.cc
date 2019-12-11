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

#include <alibabacloud/cms/model/PutEventRuleTargetsRequest.h>

using AlibabaCloud::Cms::Model::PutEventRuleTargetsRequest;

PutEventRuleTargetsRequest::PutEventRuleTargetsRequest() :
	RpcServiceRequest("cms", "2019-01-01", "PutEventRuleTargets")
{
	setMethod(HttpRequest::Method::Put);
}

PutEventRuleTargetsRequest::~PutEventRuleTargetsRequest()
{}

std::vector<PutEventRuleTargetsRequest::WebhookParameters> PutEventRuleTargetsRequest::getWebhookParameters()const
{
	return webhookParameters_;
}

void PutEventRuleTargetsRequest::setWebhookParameters(const std::vector<WebhookParameters>& webhookParameters)
{
	webhookParameters_ = webhookParameters;
	for(int dep1 = 0; dep1!= webhookParameters.size(); dep1++) {
		auto webhookParametersObj = webhookParameters.at(dep1);
		std::string webhookParametersObjStr = "WebhookParameters." + std::to_string(dep1);
		setCoreParameter(webhookParametersObjStr + ".Protocol", webhookParametersObj.protocol);
		setCoreParameter(webhookParametersObjStr + ".Method", webhookParametersObj.method);
		setCoreParameter(webhookParametersObjStr + ".Id", webhookParametersObj.id);
		setCoreParameter(webhookParametersObjStr + ".Url", webhookParametersObj.url);
	}
}

std::vector<PutEventRuleTargetsRequest::ContactParameters> PutEventRuleTargetsRequest::getContactParameters()const
{
	return contactParameters_;
}

void PutEventRuleTargetsRequest::setContactParameters(const std::vector<ContactParameters>& contactParameters)
{
	contactParameters_ = contactParameters;
	for(int dep1 = 0; dep1!= contactParameters.size(); dep1++) {
		auto contactParametersObj = contactParameters.at(dep1);
		std::string contactParametersObjStr = "ContactParameters." + std::to_string(dep1);
		setCoreParameter(contactParametersObjStr + ".Level", contactParametersObj.level);
		setCoreParameter(contactParametersObjStr + ".Id", contactParametersObj.id);
		setCoreParameter(contactParametersObjStr + ".ContactGroupName", contactParametersObj.contactGroupName);
	}
}

std::vector<PutEventRuleTargetsRequest::SlsParameters> PutEventRuleTargetsRequest::getSlsParameters()const
{
	return slsParameters_;
}

void PutEventRuleTargetsRequest::setSlsParameters(const std::vector<SlsParameters>& slsParameters)
{
	slsParameters_ = slsParameters;
	for(int dep1 = 0; dep1!= slsParameters.size(); dep1++) {
		auto slsParametersObj = slsParameters.at(dep1);
		std::string slsParametersObjStr = "SlsParameters." + std::to_string(dep1);
		setCoreParameter(slsParametersObjStr + ".Project", slsParametersObj.project);
		setCoreParameter(slsParametersObjStr + ".Id", slsParametersObj.id);
		setCoreParameter(slsParametersObjStr + ".Region", slsParametersObj.region);
		setCoreParameter(slsParametersObjStr + ".LogStore", slsParametersObj.logStore);
	}
}

std::string PutEventRuleTargetsRequest::getRuleName()const
{
	return ruleName_;
}

void PutEventRuleTargetsRequest::setRuleName(const std::string& ruleName)
{
	ruleName_ = ruleName;
	setCoreParameter("RuleName", ruleName);
}

std::vector<PutEventRuleTargetsRequest::MnsParameters> PutEventRuleTargetsRequest::getMnsParameters()const
{
	return mnsParameters_;
}

void PutEventRuleTargetsRequest::setMnsParameters(const std::vector<MnsParameters>& mnsParameters)
{
	mnsParameters_ = mnsParameters;
	for(int dep1 = 0; dep1!= mnsParameters.size(); dep1++) {
		auto mnsParametersObj = mnsParameters.at(dep1);
		std::string mnsParametersObjStr = "MnsParameters." + std::to_string(dep1);
		setCoreParameter(mnsParametersObjStr + ".Id", mnsParametersObj.id);
		setCoreParameter(mnsParametersObjStr + ".Region", mnsParametersObj.region);
		setCoreParameter(mnsParametersObjStr + ".Queue", mnsParametersObj.queue);
	}
}

std::vector<PutEventRuleTargetsRequest::FcParameters> PutEventRuleTargetsRequest::getFcParameters()const
{
	return fcParameters_;
}

void PutEventRuleTargetsRequest::setFcParameters(const std::vector<FcParameters>& fcParameters)
{
	fcParameters_ = fcParameters;
	for(int dep1 = 0; dep1!= fcParameters.size(); dep1++) {
		auto fcParametersObj = fcParameters.at(dep1);
		std::string fcParametersObjStr = "FcParameters." + std::to_string(dep1);
		setCoreParameter(fcParametersObjStr + ".FunctionName", fcParametersObj.functionName);
		setCoreParameter(fcParametersObjStr + ".ServiceName", fcParametersObj.serviceName);
		setCoreParameter(fcParametersObjStr + ".Id", fcParametersObj.id);
		setCoreParameter(fcParametersObjStr + ".Region", fcParametersObj.region);
	}
}

