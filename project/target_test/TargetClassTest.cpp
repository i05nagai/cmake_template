#include "target_test/TargetClassTest.h"
#include "target/TargetClass.h"
#include <gtest/gtest.h>
#include <gmock/gmock.h>

namespace target_test {
    TargetClassTest::TargetClassTest()
    {
    }

    TargetClassTest::~TargetClassTest()
    {
    }

    void TargetClassTest::SetUp()
    {
    }

    void TargetClassTest::TearDown()
    {
    }

    TEST_F(TargetClassTest, getDataTest)
    {
        target::TargetClass target(1.0);
        const double expect = 1.0;
        EXPECT_EQ(expect, target.getData());
    }
} // namespace target_test
