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

#ifndef ALIBABACLOUD_PUSH_MODEL_QUERYPUSHLISTRESULT_H_
#define ALIBABACLOUD_PUSH_MODEL_QUERYPUSHLISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/push/PushExport.h>

namespace AlibabaCloud
{
	namespace Push
	{
		namespace Model
		{
			class ALIBABACLOUD_PUSH_EXPORT QueryPushListResult : public ServiceResult
			{
			public:
				struct PushMessageInfo
				{
					std::string deviceType;
					std::string type;
					std::string pushTime;
					long appKey;
					std::string title;
					std::string body;
					std::string appName;
					std::string messageId;
				};


				QueryPushListResult();
				explicit QueryPushListResult(const std::string &payload);
				~QueryPushListResult();
				int getPageSize()const;
				int getPage()const;
				std::vector<PushMessageInfo> getPushMessageInfos()const;
				bool getHasNext()const;

			protected:
				void parse(const std::string &payload);
			private:
				int pageSize_;
				int page_;
				std::vector<PushMessageInfo> pushMessageInfos_;
				bool hasNext_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_PUSH_MODEL_QUERYPUSHLISTRESULT_H_