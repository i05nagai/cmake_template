#include <gtest/gtest.h>
#include "target2_test/folder/DataClassTest.h"
#include "target2_test/folder/mock/IBaseClassMock.h"
#include "target2/folder/IBaseClass.h"
#include "target2/folder/DataClass.h"
#include <memory>

namespace target2_test {
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
        target2::DataClass dataClass(1.0);
        const double expect = 1.0;
        EXPECT_EQ(expect, dataClass.getData());
    }

    TEST_F(DataClassTest, executeTest)
    {
        std::shared_ptr<IBaseClassMock> mock(new IBaseClassMock());
        EXPECT_CALL(*mock, doGetData())
            .Times(1)
            .WillOnce(::testing::Return(1.0));
        target2::DataClass dataClass(1.0);
        const double actual = dataClass.execute(mock);
        const double expect = 1.0;
        EXPECT_EQ(expect, actual);
    }
} // namespace target2_test
