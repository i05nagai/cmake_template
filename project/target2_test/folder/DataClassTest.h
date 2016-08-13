#pragma once
#include "target2/folder/DataClass.h"
#include <gtest/gtest.h>

namespace target2_test {
    class DataClassTest : public ::testing::Test {
    protected:
        //set-up
        DataClassTest();
        //clean-up does not throw exceptions
        virtual ~DataClassTest();
        //called before every test immediately after constructor
        virtual void SetUp();
        //called after every test before destructor
        virtual void TearDown();
        
        //target2::Target _target;
    }; // class DataClassTest : public ::testing::Test {
} // namespace target2_test
