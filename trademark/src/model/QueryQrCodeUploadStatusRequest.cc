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

#include <alibabacloud/trademark/model/QueryQrCodeUploadStatusRequest.h>

using AlibabaCloud::Trademark::Model::QueryQrCodeUploadStatusRequest;

QueryQrCodeUploadStatusRequest::QueryQrCodeUploadStatusRequest() :
	RpcServiceRequest("trademark", "2018-07-24", "QueryQrCodeUploadStatus")
{}

QueryQrCodeUploadStatusRequest::~QueryQrCodeUploadStatusRequest()
{}

std::string QueryQrCodeUploadStatusRequest::getOssKey()const
{
	return ossKey_;
}

void QueryQrCodeUploadStatusRequest::setOssKey(const std::string& ossKey)
{
	ossKey_ = ossKey;
	setCoreParameter("OssKey", ossKey);
}

std::string QueryQrCodeUploadStatusRequest::getFieldKey()const
{
	return fieldKey_;
}

void QueryQrCodeUploadStatusRequest::setFieldKey(const std::string& fieldKey)
{
	fieldKey_ = fieldKey;
	setCoreParameter("FieldKey", fieldKey);
}

std::string QueryQrCodeUploadStatusRequest::getUuid()const
{
	return uuid_;
}

void QueryQrCodeUploadStatusRequest::setUuid(const std::string& uuid)
{
	uuid_ = uuid;
	setCoreParameter("Uuid", uuid);
}

