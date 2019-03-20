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

#ifndef ALIBABACLOUD_ALIDNS_MODEL_SETGTMMONITORSTATUSREQUEST_H_
#define ALIBABACLOUD_ALIDNS_MODEL_SETGTMMONITORSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/alidns/AlidnsExport.h>

namespace AlibabaCloud
{
	namespace Alidns
	{
		namespace Model
		{
			class ALIBABACLOUD_ALIDNS_EXPORT SetGtmMonitorStatusRequest : public RpcServiceRequest
			{

			public:
				SetGtmMonitorStatusRequest();
				~SetGtmMonitorStatusRequest();

				std::string getUserClientIp()const;
				void setUserClientIp(const std::string& userClientIp);
				std::string getMonitorConfigId()const;
				void setMonitorConfigId(const std::string& monitorConfigId);
				std::string getLang()const;
				void setLang(const std::string& lang);
				std::string getStatus()const;
				void setStatus(const std::string& status);

            private:
				std::string userClientIp_;
				std::string monitorConfigId_;
				std::string lang_;
				std::string status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALIDNS_MODEL_SETGTMMONITORSTATUSREQUEST_H_