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
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class AWS_QUICKSIGHT_API CreateTemplateAliasRequest : public QuickSightRequest
  {
  public:
    CreateTemplateAliasRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTemplateAlias"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>AWS account ID that contains the template you are aliasing.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>AWS account ID that contains the template you are aliasing.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>AWS account ID that contains the template you are aliasing.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>AWS account ID that contains the template you are aliasing.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>AWS account ID that contains the template you are aliasing.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>AWS account ID that contains the template you are aliasing.</p>
     */
    inline CreateTemplateAliasRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>AWS account ID that contains the template you are aliasing.</p>
     */
    inline CreateTemplateAliasRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>AWS account ID that contains the template you are aliasing.</p>
     */
    inline CreateTemplateAliasRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>An ID for the template.</p>
     */
    inline const Aws::String& GetTemplateId() const{ return m_templateId; }

    /**
     * <p>An ID for the template.</p>
     */
    inline bool TemplateIdHasBeenSet() const { return m_templateIdHasBeenSet; }

    /**
     * <p>An ID for the template.</p>
     */
    inline void SetTemplateId(const Aws::String& value) { m_templateIdHasBeenSet = true; m_templateId = value; }

    /**
     * <p>An ID for the template.</p>
     */
    inline void SetTemplateId(Aws::String&& value) { m_templateIdHasBeenSet = true; m_templateId = std::move(value); }

    /**
     * <p>An ID for the template.</p>
     */
    inline void SetTemplateId(const char* value) { m_templateIdHasBeenSet = true; m_templateId.assign(value); }

    /**
     * <p>An ID for the template.</p>
     */
    inline CreateTemplateAliasRequest& WithTemplateId(const Aws::String& value) { SetTemplateId(value); return *this;}

    /**
     * <p>An ID for the template.</p>
     */
    inline CreateTemplateAliasRequest& WithTemplateId(Aws::String&& value) { SetTemplateId(std::move(value)); return *this;}

    /**
     * <p>An ID for the template.</p>
     */
    inline CreateTemplateAliasRequest& WithTemplateId(const char* value) { SetTemplateId(value); return *this;}


    /**
     * <p>The name you want to give the template's alias. Alias names can't begin with
     * a <code>$</code>, which is reserved by QuickSight. Alias names that start with
     * ‘$’ sign are QuickSight reserved naming and can't be deleted. </p>
     */
    inline const Aws::String& GetAliasName() const{ return m_aliasName; }

    /**
     * <p>The name you want to give the template's alias. Alias names can't begin with
     * a <code>$</code>, which is reserved by QuickSight. Alias names that start with
     * ‘$’ sign are QuickSight reserved naming and can't be deleted. </p>
     */
    inline bool AliasNameHasBeenSet() const { return m_aliasNameHasBeenSet; }

    /**
     * <p>The name you want to give the template's alias. Alias names can't begin with
     * a <code>$</code>, which is reserved by QuickSight. Alias names that start with
     * ‘$’ sign are QuickSight reserved naming and can't be deleted. </p>
     */
    inline void SetAliasName(const Aws::String& value) { m_aliasNameHasBeenSet = true; m_aliasName = value; }

    /**
     * <p>The name you want to give the template's alias. Alias names can't begin with
     * a <code>$</code>, which is reserved by QuickSight. Alias names that start with
     * ‘$’ sign are QuickSight reserved naming and can't be deleted. </p>
     */
    inline void SetAliasName(Aws::String&& value) { m_aliasNameHasBeenSet = true; m_aliasName = std::move(value); }

    /**
     * <p>The name you want to give the template's alias. Alias names can't begin with
     * a <code>$</code>, which is reserved by QuickSight. Alias names that start with
     * ‘$’ sign are QuickSight reserved naming and can't be deleted. </p>
     */
    inline void SetAliasName(const char* value) { m_aliasNameHasBeenSet = true; m_aliasName.assign(value); }

    /**
     * <p>The name you want to give the template's alias. Alias names can't begin with
     * a <code>$</code>, which is reserved by QuickSight. Alias names that start with
     * ‘$’ sign are QuickSight reserved naming and can't be deleted. </p>
     */
    inline CreateTemplateAliasRequest& WithAliasName(const Aws::String& value) { SetAliasName(value); return *this;}

    /**
     * <p>The name you want to give the template's alias. Alias names can't begin with
     * a <code>$</code>, which is reserved by QuickSight. Alias names that start with
     * ‘$’ sign are QuickSight reserved naming and can't be deleted. </p>
     */
    inline CreateTemplateAliasRequest& WithAliasName(Aws::String&& value) { SetAliasName(std::move(value)); return *this;}

    /**
     * <p>The name you want to give the template's alias. Alias names can't begin with
     * a <code>$</code>, which is reserved by QuickSight. Alias names that start with
     * ‘$’ sign are QuickSight reserved naming and can't be deleted. </p>
     */
    inline CreateTemplateAliasRequest& WithAliasName(const char* value) { SetAliasName(value); return *this;}


    /**
     * <p>The version number of the template.</p>
     */
    inline long long GetTemplateVersionNumber() const{ return m_templateVersionNumber; }

    /**
     * <p>The version number of the template.</p>
     */
    inline bool TemplateVersionNumberHasBeenSet() const { return m_templateVersionNumberHasBeenSet; }

    /**
     * <p>The version number of the template.</p>
     */
    inline void SetTemplateVersionNumber(long long value) { m_templateVersionNumberHasBeenSet = true; m_templateVersionNumber = value; }

    /**
     * <p>The version number of the template.</p>
     */
    inline CreateTemplateAliasRequest& WithTemplateVersionNumber(long long value) { SetTemplateVersionNumber(value); return *this;}

  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet;

    Aws::String m_templateId;
    bool m_templateIdHasBeenSet;

    Aws::String m_aliasName;
    bool m_aliasNameHasBeenSet;

    long long m_templateVersionNumber;
    bool m_templateVersionNumberHasBeenSet;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
