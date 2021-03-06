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

#ifndef ALIBABACLOUD_CDN_MODEL_SETREFERERCONFIGREQUEST_H_
#define ALIBABACLOUD_CDN_MODEL_SETREFERERCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cdn/CdnExport.h>

namespace AlibabaCloud
{
	namespace Cdn
	{
		namespace Model
		{
			class ALIBABACLOUD_CDN_EXPORT SetRefererConfigRequest : public RpcServiceRequest
			{

			public:
				SetRefererConfigRequest();
				~SetRefererConfigRequest();

				std::string getReferList()const;
				void setReferList(const std::string& referList);
				std::string getDomainName()const;
				void setDomainName(const std::string& domainName);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				std::string getReferType()const;
				void setReferType(const std::string& referType);
				std::string getDisableAst()const;
				void setDisableAst(const std::string& disableAst);
				std::string getAllowEmpty()const;
				void setAllowEmpty(const std::string& allowEmpty);

            private:
				std::string referList_;
				std::string domainName_;
				long ownerId_;
				std::string securityToken_;
				std::string referType_;
				std::string disableAst_;
				std::string allowEmpty_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CDN_MODEL_SETREFERERCONFIGREQUEST_H_