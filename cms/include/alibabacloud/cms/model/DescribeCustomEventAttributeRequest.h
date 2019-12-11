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

#ifndef ALIBABACLOUD_CMS_MODEL_DESCRIBECUSTOMEVENTATTRIBUTEREQUEST_H_
#define ALIBABACLOUD_CMS_MODEL_DESCRIBECUSTOMEVENTATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cms/CmsExport.h>

namespace AlibabaCloud
{
	namespace Cms
	{
		namespace Model
		{
			class ALIBABACLOUD_CMS_EXPORT DescribeCustomEventAttributeRequest : public RpcServiceRequest
			{

			public:
				DescribeCustomEventAttributeRequest();
				~DescribeCustomEventAttributeRequest();

				std::string getEventId()const;
				void setEventId(const std::string& eventId);
				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);
				std::string getSearchKeywords()const;
				void setSearchKeywords(const std::string& searchKeywords);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getLevel()const;
				void setLevel(const std::string& level);
				std::string getGroupId()const;
				void setGroupId(const std::string& groupId);
				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				std::string getName()const;
				void setName(const std::string& name);

            private:
				std::string eventId_;
				std::string startTime_;
				std::string searchKeywords_;
				int pageNumber_;
				int pageSize_;
				std::string level_;
				std::string groupId_;
				std::string endTime_;
				std::string name_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CMS_MODEL_DESCRIBECUSTOMEVENTATTRIBUTEREQUEST_H_