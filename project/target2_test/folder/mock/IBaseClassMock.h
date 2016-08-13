#pragma once

#include "target2/folder/IBaseClass.h"
#include <gmock/gmock.h>

namespace target2_test {
    using ::testing::_;
    using ::testing::Invoke;
    class IBaseClassMock : public target2::IBaseClass {
    //private typedef
    private:
    //public typedef
    public:
    //public function
    public:
        MOCK_CONST_METHOD0(doGetData, double());
        MOCK_CONST_METHOD1(doEqual, bool(const target2::IBaseClass& other));
        MOCK_CONST_METHOD0(doClone, IBaseClassMock*());

        void delegateToDefault()
        {
            ON_CALL(*this, doClone())
                .WillByDefault(Invoke(this, &IBaseClassMock::doCloneMock));
            ON_CALL(*this, doEqual(_))
                .WillByDefault(Invoke(this, &IBaseClassMock::doEqualeMock));
        }

        IBaseClassMock* doCloneMock()
        {
            return new IBaseClassMock();
        }

        bool doEqualeMock(const IBaseClass& other)
        {
            return true;
        }
    //private function
    private:
    //private members
    private:
    };
} // namespace target2_test

