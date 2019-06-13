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

#ifndef ALIBABACLOUD_SMARTAG_MODEL_SETSAGROUTEABLEADDRESSREQUEST_H_
#define ALIBABACLOUD_SMARTAG_MODEL_SETSAGROUTEABLEADDRESSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/smartag/SmartagExport.h>

namespace AlibabaCloud
{
	namespace Smartag
	{
		namespace Model
		{
			class ALIBABACLOUD_SMARTAG_EXPORT SetSagRouteableAddressRequest : public RpcServiceRequest
			{

			public:
				SetSagRouteableAddressRequest();
				~SetSagRouteableAddressRequest();

				std::string getAccess_key_id()const;
				void setAccess_key_id(const std::string& access_key_id);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getSagId()const;
				void setSagId(const std::string& sagId);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getRouteableAddress()const;
				void setRouteableAddress(const std::string& routeableAddress);

            private:
				std::string access_key_id_;
				long resourceOwnerId_;
				std::string regionId_;
				std::string resourceOwnerAccount_;
				std::string sagId_;
				std::string ownerAccount_;
				long ownerId_;
				std::string routeableAddress_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SMARTAG_MODEL_SETSAGROUTEABLEADDRESSREQUEST_H_