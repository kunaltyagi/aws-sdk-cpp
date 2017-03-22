/*
  * Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/external/gtest.h>
#include <aws/core/utils/crypto/Factories.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/Aws.h>
#include <aws/testing/TestingEnvironment.h>
#include <aws/testing/platform/PlatformTesting.h>
#include <aws/testing/MemoryTesting.h>

int main(int argc, char** argv)
{

    Aws::Testing::RedirectHomeToTempIfAppropriate();

    Aws::SDKOptions options;	

	ExactTestMemorySystem memorySystem(16, 10);
	options.memoryManagementOptions.memoryManager = &memorySystem;
    Aws::Testing::InitPlatformTest(options);

	options.loggingOptions.logLevel = Aws::Utils::Logging::LogLevel::Trace;
    int retVal = 0;
    {
        Aws::APIWrapper wrapper(options);       
        ::testing::InitGoogleTest(&argc, argv);
        retVal = RUN_ALL_TESTS();        
    }
    EXPECT_EQ(memorySystem.GetCurrentOutstandingAllocations(), 0ULL);
    EXPECT_EQ(memorySystem.GetCurrentBytesAllocated(), 0ULL);
    EXPECT_TRUE(memorySystem.IsClean());

    Aws::Testing::ShutdownPlatformTest(options);

    return retVal;
}
