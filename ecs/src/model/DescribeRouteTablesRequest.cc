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

#include <alibabacloud/ecs/model/DescribeRouteTablesRequest.h>

using AlibabaCloud::Ecs::Model::DescribeRouteTablesRequest;

DescribeRouteTablesRequest::DescribeRouteTablesRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeRouteTables")
{}

DescribeRouteTablesRequest::~DescribeRouteTablesRequest()
{}

std::string DescribeRouteTablesRequest::getRouterType()const
{
	return routerType_;
}

void DescribeRouteTablesRequest::setRouterType(const std::string& routerType)
{
	routerType_ = routerType;
	setParameter("RouterType", routerType);
}

long DescribeRouteTablesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeRouteTablesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeRouteTablesRequest::getRouteTableName()const
{
	return routeTableName_;
}

void DescribeRouteTablesRequest::setRouteTableName(const std::string& routeTableName)
{
	routeTableName_ = routeTableName;
	setParameter("RouteTableName", routeTableName);
}

std::string DescribeRouteTablesRequest::getVRouterId()const
{
	return vRouterId_;
}

void DescribeRouteTablesRequest::setVRouterId(const std::string& vRouterId)
{
	vRouterId_ = vRouterId;
	setParameter("VRouterId", vRouterId);
}

std::string DescribeRouteTablesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeRouteTablesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeRouteTablesRequest::getRouterId()const
{
	return routerId_;
}

void DescribeRouteTablesRequest::setRouterId(const std::string& routerId)
{
	routerId_ = routerId;
	setParameter("RouterId", routerId);
}

std::string DescribeRouteTablesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeRouteTablesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

int DescribeRouteTablesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeRouteTablesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

long DescribeRouteTablesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeRouteTablesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int DescribeRouteTablesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeRouteTablesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeRouteTablesRequest::getRouteTableId()const
{
	return routeTableId_;
}

void DescribeRouteTablesRequest::setRouteTableId(const std::string& routeTableId)
{
	routeTableId_ = routeTableId;
	setParameter("RouteTableId", routeTableId);
}
