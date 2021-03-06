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

#ifndef ALIBABACLOUD_CCC_MODEL_MODIFYSKILLGROUPREQUEST_H_
#define ALIBABACLOUD_CCC_MODEL_MODIFYSKILLGROUPREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ccc/CCCExport.h>

namespace AlibabaCloud
{
	namespace CCC
	{
		namespace Model
		{
			class ALIBABACLOUD_CCC_EXPORT ModifySkillGroupRequest : public RpcServiceRequest
			{

			public:
				ModifySkillGroupRequest();
				~ModifySkillGroupRequest();

				bool getAllowPrivateOutboundNumber()const;
				void setAllowPrivateOutboundNumber(bool allowPrivateOutboundNumber);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getRoutingStrategy()const;
				void setRoutingStrategy(const std::string& routingStrategy);
				std::vector<std::string> getUserId()const;
				void setUserId(const std::vector<std::string>& userId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::vector<int> getSkillLevel()const;
				void setSkillLevel(const std::vector<int>& skillLevel);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::vector<std::string> getOutboundPhoneNumberId()const;
				void setOutboundPhoneNumberId(const std::vector<std::string>& outboundPhoneNumberId);
				std::string getSkillGroupId()const;
				void setSkillGroupId(const std::string& skillGroupId);
				std::string getName()const;
				void setName(const std::string& name);

            private:
				bool allowPrivateOutboundNumber_;
				std::string description_;
				std::string routingStrategy_;
				std::vector<std::string> userId_;
				std::string accessKeyId_;
				std::vector<int> skillLevel_;
				std::string instanceId_;
				std::vector<std::string> outboundPhoneNumberId_;
				std::string skillGroupId_;
				std::string name_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CCC_MODEL_MODIFYSKILLGROUPREQUEST_H_