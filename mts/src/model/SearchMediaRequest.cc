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

#include <alibabacloud/mts/model/SearchMediaRequest.h>

using AlibabaCloud::Mts::Model::SearchMediaRequest;

SearchMediaRequest::SearchMediaRequest() :
	RpcServiceRequest("mts", "2014-06-18", "SearchMedia")
{}

SearchMediaRequest::~SearchMediaRequest()
{}

long SearchMediaRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SearchMediaRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string SearchMediaRequest::getDescription()const
{
	return description_;
}

void SearchMediaRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string SearchMediaRequest::getTitle()const
{
	return title_;
}

void SearchMediaRequest::setTitle(const std::string& title)
{
	title_ = title;
	setCoreParameter("Title", title);
}

long SearchMediaRequest::getPageNumber()const
{
	return pageNumber_;
}

void SearchMediaRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string SearchMediaRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SearchMediaRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string SearchMediaRequest::getCateId()const
{
	return cateId_;
}

void SearchMediaRequest::setCateId(const std::string& cateId)
{
	cateId_ = cateId;
	setCoreParameter("CateId", cateId);
}

long SearchMediaRequest::getPageSize()const
{
	return pageSize_;
}

void SearchMediaRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string SearchMediaRequest::getFrom()const
{
	return from_;
}

void SearchMediaRequest::setFrom(const std::string& from)
{
	from_ = from;
	setCoreParameter("From", from);
}

std::string SearchMediaRequest::getTag()const
{
	return tag_;
}

void SearchMediaRequest::setTag(const std::string& tag)
{
	tag_ = tag;
	setCoreParameter("Tag", tag);
}

std::string SearchMediaRequest::getKeyWord()const
{
	return keyWord_;
}

void SearchMediaRequest::setKeyWord(const std::string& keyWord)
{
	keyWord_ = keyWord;
	setCoreParameter("KeyWord", keyWord);
}

std::string SearchMediaRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SearchMediaRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string SearchMediaRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SearchMediaRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long SearchMediaRequest::getOwnerId()const
{
	return ownerId_;
}

void SearchMediaRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string SearchMediaRequest::getSortBy()const
{
	return sortBy_;
}

void SearchMediaRequest::setSortBy(const std::string& sortBy)
{
	sortBy_ = sortBy;
	setCoreParameter("SortBy", sortBy);
}

std::string SearchMediaRequest::getTo()const
{
	return to_;
}

void SearchMediaRequest::setTo(const std::string& to)
{
	to_ = to;
	setCoreParameter("To", to);
}

