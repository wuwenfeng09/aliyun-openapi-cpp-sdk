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

#include <alibabacloud/appmallsservice/model/TaobaoFilmGetSchedulesRequest.h>

using AlibabaCloud::AppMallsService::Model::TaobaoFilmGetSchedulesRequest;

TaobaoFilmGetSchedulesRequest::TaobaoFilmGetSchedulesRequest() :
	RpcServiceRequest("appmallsservice", "2018-02-24", "TaobaoFilmGetSchedules")
{}

TaobaoFilmGetSchedulesRequest::~TaobaoFilmGetSchedulesRequest()
{}

long TaobaoFilmGetSchedulesRequest::getCinemaId()const
{
	return cinemaId_;
}

void TaobaoFilmGetSchedulesRequest::setCinemaId(long cinemaId)
{
	cinemaId_ = cinemaId;
	setCoreParameter("CinemaId", std::to_string(cinemaId));
}

std::string TaobaoFilmGetSchedulesRequest::getParamsJson()const
{
	return paramsJson_;
}

void TaobaoFilmGetSchedulesRequest::setParamsJson(const std::string& paramsJson)
{
	paramsJson_ = paramsJson;
	setCoreParameter("ParamsJson", paramsJson);
}

