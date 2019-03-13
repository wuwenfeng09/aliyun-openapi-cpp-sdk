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

#include <alibabacloud/vpc/model/AssociateRouteTableRequest.h>

using AlibabaCloud::Vpc::Model::AssociateRouteTableRequest;

AssociateRouteTableRequest::AssociateRouteTableRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "AssociateRouteTable")
{}

AssociateRouteTableRequest::~AssociateRouteTableRequest()
{}

long AssociateRouteTableRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AssociateRouteTableRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string AssociateRouteTableRequest::getClientToken()const
{
	return clientToken_;
}

void AssociateRouteTableRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

long AssociateRouteTableRequest::getCallerParentId()const
{
	return callerParentId_;
}

void AssociateRouteTableRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool AssociateRouteTableRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void AssociateRouteTableRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string AssociateRouteTableRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void AssociateRouteTableRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string AssociateRouteTableRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void AssociateRouteTableRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string AssociateRouteTableRequest::getCallerType()const
{
	return callerType_;
}

void AssociateRouteTableRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string AssociateRouteTableRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AssociateRouteTableRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string AssociateRouteTableRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void AssociateRouteTableRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string AssociateRouteTableRequest::getRegionId()const
{
	return regionId_;
}

void AssociateRouteTableRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string AssociateRouteTableRequest::getSecurityToken()const
{
	return securityToken_;
}

void AssociateRouteTableRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

bool AssociateRouteTableRequest::getEnable()const
{
	return enable_;
}

void AssociateRouteTableRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", std::to_string(enable));
}

std::string AssociateRouteTableRequest::getRequestContent()const
{
	return requestContent_;
}

void AssociateRouteTableRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string AssociateRouteTableRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void AssociateRouteTableRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string AssociateRouteTableRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void AssociateRouteTableRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

std::string AssociateRouteTableRequest::getRouteTableId()const
{
	return routeTableId_;
}

void AssociateRouteTableRequest::setRouteTableId(const std::string& routeTableId)
{
	routeTableId_ = routeTableId;
	setParameter("RouteTableId", routeTableId);
}

long AssociateRouteTableRequest::getCallerUid()const
{
	return callerUid_;
}

void AssociateRouteTableRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string AssociateRouteTableRequest::getApp_ip()const
{
	return app_ip_;
}

void AssociateRouteTableRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string AssociateRouteTableRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AssociateRouteTableRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string AssociateRouteTableRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AssociateRouteTableRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string AssociateRouteTableRequest::getCallerBid()const
{
	return callerBid_;
}

void AssociateRouteTableRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long AssociateRouteTableRequest::getOwnerId()const
{
	return ownerId_;
}

void AssociateRouteTableRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

bool AssociateRouteTableRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void AssociateRouteTableRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool AssociateRouteTableRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void AssociateRouteTableRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

std::string AssociateRouteTableRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void AssociateRouteTableRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setParameter("VSwitchId", vSwitchId);
}

bool AssociateRouteTableRequest::getSecurity_transport()const
{
	return security_transport_;
}

void AssociateRouteTableRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string AssociateRouteTableRequest::getRequestId()const
{
	return requestId_;
}

void AssociateRouteTableRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

