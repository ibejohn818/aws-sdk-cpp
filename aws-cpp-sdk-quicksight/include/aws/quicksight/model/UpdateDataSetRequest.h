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
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/quicksight/model/DataSetImportMode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/RowLevelPermissionDataSet.h>
#include <aws/quicksight/model/PhysicalTable.h>
#include <aws/quicksight/model/LogicalTable.h>
#include <aws/quicksight/model/ColumnGroup.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class AWS_QUICKSIGHT_API UpdateDataSetRequest : public QuickSightRequest
  {
  public:
    UpdateDataSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDataSet"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The AWS Account ID.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The AWS Account ID.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The AWS Account ID.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The AWS Account ID.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The AWS Account ID.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The AWS Account ID.</p>
     */
    inline UpdateDataSetRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The AWS Account ID.</p>
     */
    inline UpdateDataSetRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The AWS Account ID.</p>
     */
    inline UpdateDataSetRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The ID for the dataset you want to create. This is unique per region per AWS
     * account.</p>
     */
    inline const Aws::String& GetDataSetId() const{ return m_dataSetId; }

    /**
     * <p>The ID for the dataset you want to create. This is unique per region per AWS
     * account.</p>
     */
    inline bool DataSetIdHasBeenSet() const { return m_dataSetIdHasBeenSet; }

    /**
     * <p>The ID for the dataset you want to create. This is unique per region per AWS
     * account.</p>
     */
    inline void SetDataSetId(const Aws::String& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = value; }

    /**
     * <p>The ID for the dataset you want to create. This is unique per region per AWS
     * account.</p>
     */
    inline void SetDataSetId(Aws::String&& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = std::move(value); }

    /**
     * <p>The ID for the dataset you want to create. This is unique per region per AWS
     * account.</p>
     */
    inline void SetDataSetId(const char* value) { m_dataSetIdHasBeenSet = true; m_dataSetId.assign(value); }

    /**
     * <p>The ID for the dataset you want to create. This is unique per region per AWS
     * account.</p>
     */
    inline UpdateDataSetRequest& WithDataSetId(const Aws::String& value) { SetDataSetId(value); return *this;}

    /**
     * <p>The ID for the dataset you want to create. This is unique per region per AWS
     * account.</p>
     */
    inline UpdateDataSetRequest& WithDataSetId(Aws::String&& value) { SetDataSetId(std::move(value)); return *this;}

    /**
     * <p>The ID for the dataset you want to create. This is unique per region per AWS
     * account.</p>
     */
    inline UpdateDataSetRequest& WithDataSetId(const char* value) { SetDataSetId(value); return *this;}


    /**
     * <p>The display name for the dataset.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The display name for the dataset.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The display name for the dataset.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The display name for the dataset.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The display name for the dataset.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The display name for the dataset.</p>
     */
    inline UpdateDataSetRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The display name for the dataset.</p>
     */
    inline UpdateDataSetRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The display name for the dataset.</p>
     */
    inline UpdateDataSetRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Declares the physical tables that are available in the underlying data
     * sources.</p>
     */
    inline const Aws::Map<Aws::String, PhysicalTable>& GetPhysicalTableMap() const{ return m_physicalTableMap; }

    /**
     * <p>Declares the physical tables that are available in the underlying data
     * sources.</p>
     */
    inline bool PhysicalTableMapHasBeenSet() const { return m_physicalTableMapHasBeenSet; }

    /**
     * <p>Declares the physical tables that are available in the underlying data
     * sources.</p>
     */
    inline void SetPhysicalTableMap(const Aws::Map<Aws::String, PhysicalTable>& value) { m_physicalTableMapHasBeenSet = true; m_physicalTableMap = value; }

    /**
     * <p>Declares the physical tables that are available in the underlying data
     * sources.</p>
     */
    inline void SetPhysicalTableMap(Aws::Map<Aws::String, PhysicalTable>&& value) { m_physicalTableMapHasBeenSet = true; m_physicalTableMap = std::move(value); }

    /**
     * <p>Declares the physical tables that are available in the underlying data
     * sources.</p>
     */
    inline UpdateDataSetRequest& WithPhysicalTableMap(const Aws::Map<Aws::String, PhysicalTable>& value) { SetPhysicalTableMap(value); return *this;}

    /**
     * <p>Declares the physical tables that are available in the underlying data
     * sources.</p>
     */
    inline UpdateDataSetRequest& WithPhysicalTableMap(Aws::Map<Aws::String, PhysicalTable>&& value) { SetPhysicalTableMap(std::move(value)); return *this;}

    /**
     * <p>Declares the physical tables that are available in the underlying data
     * sources.</p>
     */
    inline UpdateDataSetRequest& AddPhysicalTableMap(const Aws::String& key, const PhysicalTable& value) { m_physicalTableMapHasBeenSet = true; m_physicalTableMap.emplace(key, value); return *this; }

    /**
     * <p>Declares the physical tables that are available in the underlying data
     * sources.</p>
     */
    inline UpdateDataSetRequest& AddPhysicalTableMap(Aws::String&& key, const PhysicalTable& value) { m_physicalTableMapHasBeenSet = true; m_physicalTableMap.emplace(std::move(key), value); return *this; }

    /**
     * <p>Declares the physical tables that are available in the underlying data
     * sources.</p>
     */
    inline UpdateDataSetRequest& AddPhysicalTableMap(const Aws::String& key, PhysicalTable&& value) { m_physicalTableMapHasBeenSet = true; m_physicalTableMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Declares the physical tables that are available in the underlying data
     * sources.</p>
     */
    inline UpdateDataSetRequest& AddPhysicalTableMap(Aws::String&& key, PhysicalTable&& value) { m_physicalTableMapHasBeenSet = true; m_physicalTableMap.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Declares the physical tables that are available in the underlying data
     * sources.</p>
     */
    inline UpdateDataSetRequest& AddPhysicalTableMap(const char* key, PhysicalTable&& value) { m_physicalTableMapHasBeenSet = true; m_physicalTableMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Declares the physical tables that are available in the underlying data
     * sources.</p>
     */
    inline UpdateDataSetRequest& AddPhysicalTableMap(const char* key, const PhysicalTable& value) { m_physicalTableMapHasBeenSet = true; m_physicalTableMap.emplace(key, value); return *this; }


    /**
     * <p>Configures the combination and transformation of the data from the physical
     * tables.</p>
     */
    inline const Aws::Map<Aws::String, LogicalTable>& GetLogicalTableMap() const{ return m_logicalTableMap; }

    /**
     * <p>Configures the combination and transformation of the data from the physical
     * tables.</p>
     */
    inline bool LogicalTableMapHasBeenSet() const { return m_logicalTableMapHasBeenSet; }

    /**
     * <p>Configures the combination and transformation of the data from the physical
     * tables.</p>
     */
    inline void SetLogicalTableMap(const Aws::Map<Aws::String, LogicalTable>& value) { m_logicalTableMapHasBeenSet = true; m_logicalTableMap = value; }

    /**
     * <p>Configures the combination and transformation of the data from the physical
     * tables.</p>
     */
    inline void SetLogicalTableMap(Aws::Map<Aws::String, LogicalTable>&& value) { m_logicalTableMapHasBeenSet = true; m_logicalTableMap = std::move(value); }

    /**
     * <p>Configures the combination and transformation of the data from the physical
     * tables.</p>
     */
    inline UpdateDataSetRequest& WithLogicalTableMap(const Aws::Map<Aws::String, LogicalTable>& value) { SetLogicalTableMap(value); return *this;}

    /**
     * <p>Configures the combination and transformation of the data from the physical
     * tables.</p>
     */
    inline UpdateDataSetRequest& WithLogicalTableMap(Aws::Map<Aws::String, LogicalTable>&& value) { SetLogicalTableMap(std::move(value)); return *this;}

    /**
     * <p>Configures the combination and transformation of the data from the physical
     * tables.</p>
     */
    inline UpdateDataSetRequest& AddLogicalTableMap(const Aws::String& key, const LogicalTable& value) { m_logicalTableMapHasBeenSet = true; m_logicalTableMap.emplace(key, value); return *this; }

    /**
     * <p>Configures the combination and transformation of the data from the physical
     * tables.</p>
     */
    inline UpdateDataSetRequest& AddLogicalTableMap(Aws::String&& key, const LogicalTable& value) { m_logicalTableMapHasBeenSet = true; m_logicalTableMap.emplace(std::move(key), value); return *this; }

    /**
     * <p>Configures the combination and transformation of the data from the physical
     * tables.</p>
     */
    inline UpdateDataSetRequest& AddLogicalTableMap(const Aws::String& key, LogicalTable&& value) { m_logicalTableMapHasBeenSet = true; m_logicalTableMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Configures the combination and transformation of the data from the physical
     * tables.</p>
     */
    inline UpdateDataSetRequest& AddLogicalTableMap(Aws::String&& key, LogicalTable&& value) { m_logicalTableMapHasBeenSet = true; m_logicalTableMap.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Configures the combination and transformation of the data from the physical
     * tables.</p>
     */
    inline UpdateDataSetRequest& AddLogicalTableMap(const char* key, LogicalTable&& value) { m_logicalTableMapHasBeenSet = true; m_logicalTableMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Configures the combination and transformation of the data from the physical
     * tables.</p>
     */
    inline UpdateDataSetRequest& AddLogicalTableMap(const char* key, const LogicalTable& value) { m_logicalTableMapHasBeenSet = true; m_logicalTableMap.emplace(key, value); return *this; }


    /**
     * <p>Indicates whether or not you want to import the data into SPICE.</p>
     */
    inline const DataSetImportMode& GetImportMode() const{ return m_importMode; }

    /**
     * <p>Indicates whether or not you want to import the data into SPICE.</p>
     */
    inline bool ImportModeHasBeenSet() const { return m_importModeHasBeenSet; }

    /**
     * <p>Indicates whether or not you want to import the data into SPICE.</p>
     */
    inline void SetImportMode(const DataSetImportMode& value) { m_importModeHasBeenSet = true; m_importMode = value; }

    /**
     * <p>Indicates whether or not you want to import the data into SPICE.</p>
     */
    inline void SetImportMode(DataSetImportMode&& value) { m_importModeHasBeenSet = true; m_importMode = std::move(value); }

    /**
     * <p>Indicates whether or not you want to import the data into SPICE.</p>
     */
    inline UpdateDataSetRequest& WithImportMode(const DataSetImportMode& value) { SetImportMode(value); return *this;}

    /**
     * <p>Indicates whether or not you want to import the data into SPICE.</p>
     */
    inline UpdateDataSetRequest& WithImportMode(DataSetImportMode&& value) { SetImportMode(std::move(value)); return *this;}


    /**
     * <p>Groupings of columns that work together in certain QuickSight features.
     * Currently only geospatial hierarchy is supported.</p>
     */
    inline const Aws::Vector<ColumnGroup>& GetColumnGroups() const{ return m_columnGroups; }

    /**
     * <p>Groupings of columns that work together in certain QuickSight features.
     * Currently only geospatial hierarchy is supported.</p>
     */
    inline bool ColumnGroupsHasBeenSet() const { return m_columnGroupsHasBeenSet; }

    /**
     * <p>Groupings of columns that work together in certain QuickSight features.
     * Currently only geospatial hierarchy is supported.</p>
     */
    inline void SetColumnGroups(const Aws::Vector<ColumnGroup>& value) { m_columnGroupsHasBeenSet = true; m_columnGroups = value; }

    /**
     * <p>Groupings of columns that work together in certain QuickSight features.
     * Currently only geospatial hierarchy is supported.</p>
     */
    inline void SetColumnGroups(Aws::Vector<ColumnGroup>&& value) { m_columnGroupsHasBeenSet = true; m_columnGroups = std::move(value); }

    /**
     * <p>Groupings of columns that work together in certain QuickSight features.
     * Currently only geospatial hierarchy is supported.</p>
     */
    inline UpdateDataSetRequest& WithColumnGroups(const Aws::Vector<ColumnGroup>& value) { SetColumnGroups(value); return *this;}

    /**
     * <p>Groupings of columns that work together in certain QuickSight features.
     * Currently only geospatial hierarchy is supported.</p>
     */
    inline UpdateDataSetRequest& WithColumnGroups(Aws::Vector<ColumnGroup>&& value) { SetColumnGroups(std::move(value)); return *this;}

    /**
     * <p>Groupings of columns that work together in certain QuickSight features.
     * Currently only geospatial hierarchy is supported.</p>
     */
    inline UpdateDataSetRequest& AddColumnGroups(const ColumnGroup& value) { m_columnGroupsHasBeenSet = true; m_columnGroups.push_back(value); return *this; }

    /**
     * <p>Groupings of columns that work together in certain QuickSight features.
     * Currently only geospatial hierarchy is supported.</p>
     */
    inline UpdateDataSetRequest& AddColumnGroups(ColumnGroup&& value) { m_columnGroupsHasBeenSet = true; m_columnGroups.push_back(std::move(value)); return *this; }


    /**
     * <p>Row-level security configuration on the data you want to create.</p>
     */
    inline const RowLevelPermissionDataSet& GetRowLevelPermissionDataSet() const{ return m_rowLevelPermissionDataSet; }

    /**
     * <p>Row-level security configuration on the data you want to create.</p>
     */
    inline bool RowLevelPermissionDataSetHasBeenSet() const { return m_rowLevelPermissionDataSetHasBeenSet; }

    /**
     * <p>Row-level security configuration on the data you want to create.</p>
     */
    inline void SetRowLevelPermissionDataSet(const RowLevelPermissionDataSet& value) { m_rowLevelPermissionDataSetHasBeenSet = true; m_rowLevelPermissionDataSet = value; }

    /**
     * <p>Row-level security configuration on the data you want to create.</p>
     */
    inline void SetRowLevelPermissionDataSet(RowLevelPermissionDataSet&& value) { m_rowLevelPermissionDataSetHasBeenSet = true; m_rowLevelPermissionDataSet = std::move(value); }

    /**
     * <p>Row-level security configuration on the data you want to create.</p>
     */
    inline UpdateDataSetRequest& WithRowLevelPermissionDataSet(const RowLevelPermissionDataSet& value) { SetRowLevelPermissionDataSet(value); return *this;}

    /**
     * <p>Row-level security configuration on the data you want to create.</p>
     */
    inline UpdateDataSetRequest& WithRowLevelPermissionDataSet(RowLevelPermissionDataSet&& value) { SetRowLevelPermissionDataSet(std::move(value)); return *this;}

  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet;

    Aws::String m_dataSetId;
    bool m_dataSetIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Map<Aws::String, PhysicalTable> m_physicalTableMap;
    bool m_physicalTableMapHasBeenSet;

    Aws::Map<Aws::String, LogicalTable> m_logicalTableMap;
    bool m_logicalTableMapHasBeenSet;

    DataSetImportMode m_importMode;
    bool m_importModeHasBeenSet;

    Aws::Vector<ColumnGroup> m_columnGroups;
    bool m_columnGroupsHasBeenSet;

    RowLevelPermissionDataSet m_rowLevelPermissionDataSet;
    bool m_rowLevelPermissionDataSetHasBeenSet;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
