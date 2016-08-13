#include <gtest/gtest.h>
#include "target2_test/folder/DerivedClassTest.h"

namespace target2_test {
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
} // namespace target2_test
