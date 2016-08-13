#include "target2/folder/IBaseClass.h"
#include <memory>

namespace target2 {
    IBaseClass::IBaseClass()
    {
    }

    double IBaseClass::getData() const
    {
        return this->doGetData();
    }

    bool IBaseClass::operator==(const IBaseClass& other) const
    {
        return this->doEqual(other);
    }

    std::shared_ptr<IBaseClass> IBaseClass::clone() const
    {
        return std::shared_ptr<IBaseClass>(this->doClone());
    }
} // namespace target2 {
