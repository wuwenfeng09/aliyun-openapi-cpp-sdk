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

#ifndef ALIBABACLOUD_ADB_MODEL_DESCRIBEINCLINEDTABLESREQUEST_H_
#define ALIBABACLOUD_ADB_MODEL_DESCRIBEINCLINEDTABLESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/adb/AdbExport.h>

namespace AlibabaCloud
{
	namespace Adb
	{
		namespace Model
		{
			class ALIBABACLOUD_ADB_EXPORT DescribeInclinedTablesRequest : public RpcServiceRequest
			{

			public:
				DescribeInclinedTablesRequest();
				~DescribeInclinedTablesRequest();

				std::string getTableType()const;
				void setTableType(const std::string& tableType);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getOrder()const;
				void setOrder(const std::string& order);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getDBClusterId()const;
				void setDBClusterId(const std::string& dBClusterId);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);

            private:
				std::string tableType_;
				long resourceOwnerId_;
				int pageNumber_;
				std::string accessKeyId_;
				int pageSize_;
				std::string order_;
				std::string resourceOwnerAccount_;
				std::string dBClusterId_;
				std::string ownerAccount_;
				long ownerId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ADB_MODEL_DESCRIBEINCLINEDTABLESREQUEST_H_