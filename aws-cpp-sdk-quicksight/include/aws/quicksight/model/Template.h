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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/TemplateVersion.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace QuickSight
{
namespace Model
{

  /**
   * <p>A template object. A template is an entity in QuickSight which encapsulates
   * the metadata required to create an analysis that can be used to create
   * dashboard. It adds a layer of abstraction by replacing the dataset associated
   * with the analysis with placeholders. Templates can be used to create dashboards
   * by replacing dataset placeholders with datasets which follow the same schema
   * that was used to create the source analysis and template.</p> <p>You can share
   * templates across AWS accounts by allowing users in other AWS accounts to create
   * a template or a dashboard from an existing template.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/Template">AWS
   * API Reference</a></p>
   */
  class AWS_QUICKSIGHT_API Template
  {
  public:
    Template();
    Template(Aws::Utils::Json::JsonView jsonValue);
    Template& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the template.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the template.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the template.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the template.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the template.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the template.</p>
     */
    inline Template& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the template.</p>
     */
    inline Template& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the template.</p>
     */
    inline Template& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The display name of the template.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The display name of the template.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The display name of the template.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The display name of the template.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The display name of the template.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The display name of the template.</p>
     */
    inline Template& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The display name of the template.</p>
     */
    inline Template& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The display name of the template.</p>
     */
    inline Template& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A structure describing the versions of the template.</p>
     */
    inline const TemplateVersion& GetVersion() const{ return m_version; }

    /**
     * <p>A structure describing the versions of the template.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>A structure describing the versions of the template.</p>
     */
    inline void SetVersion(const TemplateVersion& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>A structure describing the versions of the template.</p>
     */
    inline void SetVersion(TemplateVersion&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>A structure describing the versions of the template.</p>
     */
    inline Template& WithVersion(const TemplateVersion& value) { SetVersion(value); return *this;}

    /**
     * <p>A structure describing the versions of the template.</p>
     */
    inline Template& WithVersion(TemplateVersion&& value) { SetVersion(std::move(value)); return *this;}


    /**
     * <p>The ID for the template. This is unique per region per AWS account.</p>
     */
    inline const Aws::String& GetTemplateId() const{ return m_templateId; }

    /**
     * <p>The ID for the template. This is unique per region per AWS account.</p>
     */
    inline bool TemplateIdHasBeenSet() const { return m_templateIdHasBeenSet; }

    /**
     * <p>The ID for the template. This is unique per region per AWS account.</p>
     */
    inline void SetTemplateId(const Aws::String& value) { m_templateIdHasBeenSet = true; m_templateId = value; }

    /**
     * <p>The ID for the template. This is unique per region per AWS account.</p>
     */
    inline void SetTemplateId(Aws::String&& value) { m_templateIdHasBeenSet = true; m_templateId = std::move(value); }

    /**
     * <p>The ID for the template. This is unique per region per AWS account.</p>
     */
    inline void SetTemplateId(const char* value) { m_templateIdHasBeenSet = true; m_templateId.assign(value); }

    /**
     * <p>The ID for the template. This is unique per region per AWS account.</p>
     */
    inline Template& WithTemplateId(const Aws::String& value) { SetTemplateId(value); return *this;}

    /**
     * <p>The ID for the template. This is unique per region per AWS account.</p>
     */
    inline Template& WithTemplateId(Aws::String&& value) { SetTemplateId(std::move(value)); return *this;}

    /**
     * <p>The ID for the template. This is unique per region per AWS account.</p>
     */
    inline Template& WithTemplateId(const char* value) { SetTemplateId(value); return *this;}


    /**
     * <p>Time when this was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>Time when this was last updated.</p>
     */
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    /**
     * <p>Time when this was last updated.</p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>Time when this was last updated.</p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    /**
     * <p>Time when this was last updated.</p>
     */
    inline Template& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>Time when this was last updated.</p>
     */
    inline Template& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}


    /**
     * <p>Time when this was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>Time when this was created.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>Time when this was created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>Time when this was created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>Time when this was created.</p>
     */
    inline Template& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>Time when this was created.</p>
     */
    inline Template& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    TemplateVersion m_version;
    bool m_versionHasBeenSet;

    Aws::String m_templateId;
    bool m_templateIdHasBeenSet;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
