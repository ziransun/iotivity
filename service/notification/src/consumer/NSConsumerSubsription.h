//******************************************************************
//
// Copyright 2016 Samsung Electronics All Rights Reserved.
//
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

#ifndef _NS_CONSUMER_SUBSCRIPTION_H_
#define _NS_CONSUMER_SUBSCRIPTION_H_

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

#include "NSStructs.h"
#include "NSCacheAdapter.h"
#include "NSConsumerNotification.h"

void NSDestroyCacheList();

void NSConsumerSubscriptionHandleMsg(NSTask *);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // _NS_CONSUMER_SUBSCRIPTION_H_
