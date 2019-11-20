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

#include <aws/codecommit/model/OriginApprovalRuleTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeCommit
{
namespace Model
{

OriginApprovalRuleTemplate::OriginApprovalRuleTemplate() : 
    m_approvalRuleTemplateIdHasBeenSet(false),
    m_approvalRuleTemplateNameHasBeenSet(false)
{
}

OriginApprovalRuleTemplate::OriginApprovalRuleTemplate(JsonView jsonValue) : 
    m_approvalRuleTemplateIdHasBeenSet(false),
    m_approvalRuleTemplateNameHasBeenSet(false)
{
  *this = jsonValue;
}

OriginApprovalRuleTemplate& OriginApprovalRuleTemplate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("approvalRuleTemplateId"))
  {
    m_approvalRuleTemplateId = jsonValue.GetString("approvalRuleTemplateId");

    m_approvalRuleTemplateIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("approvalRuleTemplateName"))
  {
    m_approvalRuleTemplateName = jsonValue.GetString("approvalRuleTemplateName");

    m_approvalRuleTemplateNameHasBeenSet = true;
  }

  return *this;
}

JsonValue OriginApprovalRuleTemplate::Jsonize() const
{
  JsonValue payload;

  if(m_approvalRuleTemplateIdHasBeenSet)
  {
   payload.WithString("approvalRuleTemplateId", m_approvalRuleTemplateId);

  }

  if(m_approvalRuleTemplateNameHasBeenSet)
  {
   payload.WithString("approvalRuleTemplateName", m_approvalRuleTemplateName);

  }

  return payload;
}

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
