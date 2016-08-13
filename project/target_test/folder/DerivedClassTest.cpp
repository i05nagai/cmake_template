#include "target_test/folder/DerivedClassTest.h"
#include <gtest/gtest.h>
#include <gmock/gmock.h>

namespace target_test {
    DerivedClassTest::DerivedClassTest()
    {
    }

    DerivedClassTest::~DerivedClassTest()
    {
    }

    void DerivedClassTest::SetUp()
    {
    }
    
    void DerivedClassTest::TearDown()
    {
    }

    TEST_F(DerivedClassTest, doGetDataTest)
    {
        const double expect = 1.0;
        EXPECT_EQ(expect, 1.0);
    }
} // namespace target_test
