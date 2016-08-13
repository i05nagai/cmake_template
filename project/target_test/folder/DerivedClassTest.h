#pragma once
#include "target/folder/DerivedClass.h"
#include <gtest/gtest.h>

namespace target_test {
    class DerivedClassTest : public ::testing::Test {
    protected:
        //set-up
        DerivedClassTest();
        //clean-up does not throw exceptions
        virtual ~DerivedClassTest();
        //called before every test immediately after constructor
        virtual void SetUp();
        //called after every test before destructor
        virtual void TearDown();
        
        //target::Target _target;
    }; // class DerivedClassTest : public ::testing::Test {
} // namespace target_test
