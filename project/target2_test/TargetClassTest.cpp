#include "target2_test/pre_compiled_header.h"
#include "target2_test/TargetClassTest.h"
#include "target2/TargetClass.h"

namespace target2_test {
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
        target2::TargetClass target(1.0);
        const double expect = 1.0;
        EXPECT_EQ(expect, target.getData());
    }
} // namespace target2_test
