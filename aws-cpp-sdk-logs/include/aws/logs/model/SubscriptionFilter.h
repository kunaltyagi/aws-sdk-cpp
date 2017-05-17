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
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/Distribution.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CloudWatchLogs
{
namespace Model
{

  /**
   * <p>Represents a subscription filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/SubscriptionFilter">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDWATCHLOGS_API SubscriptionFilter
  {
  public:
    SubscriptionFilter();
    SubscriptionFilter(const Aws::Utils::Json::JsonValue& jsonValue);
    SubscriptionFilter& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The name of the subscription filter.</p>
     */
    inline const Aws::String& GetFilterName() const{ return m_filterName; }

    /**
     * <p>The name of the subscription filter.</p>
     */
    inline void SetFilterName(const Aws::String& value) { m_filterNameHasBeenSet = true; m_filterName = value; }

    /**
     * <p>The name of the subscription filter.</p>
     */
    inline void SetFilterName(Aws::String&& value) { m_filterNameHasBeenSet = true; m_filterName = std::move(value); }

    /**
     * <p>The name of the subscription filter.</p>
     */
    inline void SetFilterName(const char* value) { m_filterNameHasBeenSet = true; m_filterName.assign(value); }

    /**
     * <p>The name of the subscription filter.</p>
     */
    inline SubscriptionFilter& WithFilterName(const Aws::String& value) { SetFilterName(value); return *this;}

    /**
     * <p>The name of the subscription filter.</p>
     */
    inline SubscriptionFilter& WithFilterName(Aws::String&& value) { SetFilterName(std::move(value)); return *this;}

    /**
     * <p>The name of the subscription filter.</p>
     */
    inline SubscriptionFilter& WithFilterName(const char* value) { SetFilterName(value); return *this;}

    /**
     * <p>The name of the log group.</p>
     */
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }

    /**
     * <p>The name of the log group.</p>
     */
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    /**
     * <p>The name of the log group.</p>
     */
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::move(value); }

    /**
     * <p>The name of the log group.</p>
     */
    inline void SetLogGroupName(const char* value) { m_logGroupNameHasBeenSet = true; m_logGroupName.assign(value); }

    /**
     * <p>The name of the log group.</p>
     */
    inline SubscriptionFilter& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}

    /**
     * <p>The name of the log group.</p>
     */
    inline SubscriptionFilter& WithLogGroupName(Aws::String&& value) { SetLogGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the log group.</p>
     */
    inline SubscriptionFilter& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}

    
    inline const Aws::String& GetFilterPattern() const{ return m_filterPattern; }

    
    inline void SetFilterPattern(const Aws::String& value) { m_filterPatternHasBeenSet = true; m_filterPattern = value; }

    
    inline void SetFilterPattern(Aws::String&& value) { m_filterPatternHasBeenSet = true; m_filterPattern = std::move(value); }

    
    inline void SetFilterPattern(const char* value) { m_filterPatternHasBeenSet = true; m_filterPattern.assign(value); }

    
    inline SubscriptionFilter& WithFilterPattern(const Aws::String& value) { SetFilterPattern(value); return *this;}

    
    inline SubscriptionFilter& WithFilterPattern(Aws::String&& value) { SetFilterPattern(std::move(value)); return *this;}

    
    inline SubscriptionFilter& WithFilterPattern(const char* value) { SetFilterPattern(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the destination.</p>
     */
    inline const Aws::String& GetDestinationArn() const{ return m_destinationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the destination.</p>
     */
    inline void SetDestinationArn(const Aws::String& value) { m_destinationArnHasBeenSet = true; m_destinationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the destination.</p>
     */
    inline void SetDestinationArn(Aws::String&& value) { m_destinationArnHasBeenSet = true; m_destinationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the destination.</p>
     */
    inline void SetDestinationArn(const char* value) { m_destinationArnHasBeenSet = true; m_destinationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the destination.</p>
     */
    inline SubscriptionFilter& WithDestinationArn(const Aws::String& value) { SetDestinationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the destination.</p>
     */
    inline SubscriptionFilter& WithDestinationArn(Aws::String&& value) { SetDestinationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the destination.</p>
     */
    inline SubscriptionFilter& WithDestinationArn(const char* value) { SetDestinationArn(value); return *this;}

    /**
     * <p/>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p/>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p/>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p/>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p/>
     */
    inline SubscriptionFilter& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p/>
     */
    inline SubscriptionFilter& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline SubscriptionFilter& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

    /**
     * <p>The method used to distribute log data to the destination, when the
     * destination is an Amazon Kinesis stream.</p>
     */
    inline const Distribution& GetDistribution() const{ return m_distribution; }

    /**
     * <p>The method used to distribute log data to the destination, when the
     * destination is an Amazon Kinesis stream.</p>
     */
    inline void SetDistribution(const Distribution& value) { m_distributionHasBeenSet = true; m_distribution = value; }

    /**
     * <p>The method used to distribute log data to the destination, when the
     * destination is an Amazon Kinesis stream.</p>
     */
    inline void SetDistribution(Distribution&& value) { m_distributionHasBeenSet = true; m_distribution = std::move(value); }

    /**
     * <p>The method used to distribute log data to the destination, when the
     * destination is an Amazon Kinesis stream.</p>
     */
    inline SubscriptionFilter& WithDistribution(const Distribution& value) { SetDistribution(value); return *this;}

    /**
     * <p>The method used to distribute log data to the destination, when the
     * destination is an Amazon Kinesis stream.</p>
     */
    inline SubscriptionFilter& WithDistribution(Distribution&& value) { SetDistribution(std::move(value)); return *this;}

    /**
     * <p>The creation time of the subscription filter, expressed as the number of
     * milliseconds since Jan 1, 1970 00:00:00 UTC.</p>
     */
    inline long long GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The creation time of the subscription filter, expressed as the number of
     * milliseconds since Jan 1, 1970 00:00:00 UTC.</p>
     */
    inline void SetCreationTime(long long value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The creation time of the subscription filter, expressed as the number of
     * milliseconds since Jan 1, 1970 00:00:00 UTC.</p>
     */
    inline SubscriptionFilter& WithCreationTime(long long value) { SetCreationTime(value); return *this;}

  private:
    Aws::String m_filterName;
    bool m_filterNameHasBeenSet;
    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet;
    Aws::String m_filterPattern;
    bool m_filterPatternHasBeenSet;
    Aws::String m_destinationArn;
    bool m_destinationArnHasBeenSet;
    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;
    Distribution m_distribution;
    bool m_distributionHasBeenSet;
    long long m_creationTime;
    bool m_creationTimeHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
