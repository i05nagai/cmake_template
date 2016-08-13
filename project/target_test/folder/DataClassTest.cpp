#include "target_test/folder/DataClassTest.h"
#include "target_test/folder/mock/IBaseClassMock.h"
#include "target/folder/DataClass.h"
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <memory>

namespace target_test {
    DataClassTest::DataClassTest()
    {
    }

    DataClassTest::~DataClassTest()
    {
    }

    void DataClassTest::SetUp()
    {
    }

    void DataClassTest::TearDown()
    {
    }

    TEST_F(DataClassTest, getDataTest)
    {
        target::DataClass dataClass(1.0);
        const double expect = 1.0;
        EXPECT_EQ(expect, dataClass.getData());
    }

    TEST_F(DataClassTest, executeTest)
    {
        std::shared_ptr<IBaseClassMock> mock(new IBaseClassMock());
        EXPECT_CALL(*mock, doGetData())
            .Times(1)
            .WillOnce(::testing::Return(1.0));
        target::DataClass dataClass(1.0);
        const double actual = dataClass.execute(mock);
        const double expect = 1.0;
        EXPECT_EQ(expect, actual);
    }
} // namespace target_test
