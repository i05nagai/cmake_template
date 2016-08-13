#pragma once
#include <gtest/gtest.h>

namespace target2_test {
    class TargetClassTest : public ::testing::Test {
    protected:
        //set-up
        TargetClassTest();
        //clean-up does not throw exceptions
        virtual ~TargetClassTest();
        //called before every test immediately after constructor
        virtual void SetUp();
        //called after every test before destructor
        virtual void TearDown();
        
    }; // class TargetClassTest : public ::testing::Test {
} // namespace target2_test
