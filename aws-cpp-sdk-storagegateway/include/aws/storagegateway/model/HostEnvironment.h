﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{
  enum class HostEnvironment
  {
    NOT_SET,
    VMWARE,
    HYPER_V,
    EC2,
    OTHER
  };

namespace HostEnvironmentMapper
{
AWS_STORAGEGATEWAY_API HostEnvironment GetHostEnvironmentForName(const Aws::String& name);

AWS_STORAGEGATEWAY_API Aws::String GetNameForHostEnvironment(HostEnvironment value);
} // namespace HostEnvironmentMapper
} // namespace Model
} // namespace StorageGateway
} // namespace Aws
