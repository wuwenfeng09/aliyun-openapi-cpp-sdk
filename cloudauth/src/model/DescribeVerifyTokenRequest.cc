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

#include <alibabacloud/cloudauth/model/DescribeVerifyTokenRequest.h>

using AlibabaCloud::Cloudauth::Model::DescribeVerifyTokenRequest;

DescribeVerifyTokenRequest::DescribeVerifyTokenRequest() :
	RpcServiceRequest("cloudauth", "2019-03-07", "DescribeVerifyToken")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeVerifyTokenRequest::~DescribeVerifyTokenRequest()
{}

std::string DescribeVerifyTokenRequest::getFaceRetainedImageUrl()const
{
	return faceRetainedImageUrl_;
}

void DescribeVerifyTokenRequest::setFaceRetainedImageUrl(const std::string& faceRetainedImageUrl)
{
	faceRetainedImageUrl_ = faceRetainedImageUrl;
	setCoreParameter("FaceRetainedImageUrl", faceRetainedImageUrl);
}

std::string DescribeVerifyTokenRequest::getUserId()const
{
	return userId_;
}

void DescribeVerifyTokenRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setCoreParameter("UserId", userId);
}

std::string DescribeVerifyTokenRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeVerifyTokenRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string DescribeVerifyTokenRequest::getCallbackSeed()const
{
	return callbackSeed_;
}

void DescribeVerifyTokenRequest::setCallbackSeed(const std::string& callbackSeed)
{
	callbackSeed_ = callbackSeed;
	setCoreParameter("CallbackSeed", callbackSeed);
}

std::string DescribeVerifyTokenRequest::getIdCardBackImageUrl()const
{
	return idCardBackImageUrl_;
}

void DescribeVerifyTokenRequest::setIdCardBackImageUrl(const std::string& idCardBackImageUrl)
{
	idCardBackImageUrl_ = idCardBackImageUrl;
	setCoreParameter("IdCardBackImageUrl", idCardBackImageUrl);
}

std::string DescribeVerifyTokenRequest::getIdCardNumber()const
{
	return idCardNumber_;
}

void DescribeVerifyTokenRequest::setIdCardNumber(const std::string& idCardNumber)
{
	idCardNumber_ = idCardNumber;
	setCoreParameter("IdCardNumber", idCardNumber);
}

std::string DescribeVerifyTokenRequest::getIdCardFrontImageUrl()const
{
	return idCardFrontImageUrl_;
}

void DescribeVerifyTokenRequest::setIdCardFrontImageUrl(const std::string& idCardFrontImageUrl)
{
	idCardFrontImageUrl_ = idCardFrontImageUrl;
	setCoreParameter("IdCardFrontImageUrl", idCardFrontImageUrl);
}

std::string DescribeVerifyTokenRequest::getBizType()const
{
	return bizType_;
}

void DescribeVerifyTokenRequest::setBizType(const std::string& bizType)
{
	bizType_ = bizType;
	setCoreParameter("BizType", bizType);
}

std::string DescribeVerifyTokenRequest::getPassedRedirectUrl()const
{
	return passedRedirectUrl_;
}

void DescribeVerifyTokenRequest::setPassedRedirectUrl(const std::string& passedRedirectUrl)
{
	passedRedirectUrl_ = passedRedirectUrl;
	setCoreParameter("PassedRedirectUrl", passedRedirectUrl);
}

std::string DescribeVerifyTokenRequest::getBizId()const
{
	return bizId_;
}

void DescribeVerifyTokenRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setCoreParameter("BizId", bizId);
}

std::string DescribeVerifyTokenRequest::getName()const
{
	return name_;
}

void DescribeVerifyTokenRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string DescribeVerifyTokenRequest::getCallbackUrl()const
{
	return callbackUrl_;
}

void DescribeVerifyTokenRequest::setCallbackUrl(const std::string& callbackUrl)
{
	callbackUrl_ = callbackUrl;
	setCoreParameter("CallbackUrl", callbackUrl);
}

std::string DescribeVerifyTokenRequest::getFailedRedirectUrl()const
{
	return failedRedirectUrl_;
}

void DescribeVerifyTokenRequest::setFailedRedirectUrl(const std::string& failedRedirectUrl)
{
	failedRedirectUrl_ = failedRedirectUrl;
	setCoreParameter("FailedRedirectUrl", failedRedirectUrl);
}

