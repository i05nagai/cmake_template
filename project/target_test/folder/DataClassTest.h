#pragma once
#include "target/folder/DataClass.h"
#include <gtest/gtest.h>

namespace target_test {
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
        
        //target::Target _target;
    }; // class DataClassTest : public ::testing::Test {
} // namespace target_test
