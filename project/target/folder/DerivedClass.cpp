#include "target/folder/DerivedClass.h"

namespace target {
    DerivedClass::DerivedClass(const double data)
    : IBaseClass(), _data(data)
    {
    }

    DerivedClass::DerivedClass(const DerivedClass& other)
    : IBaseClass(), _data(other._data)
    {
    }

    double DerivedClass::doGetData() const
    {
        return _data;
    }

    bool DerivedClass::doEqual(const IBaseClass& other) const
    {
        const DerivedClass* cast = (const DerivedClass*)&other;
        return cast != nullptr 
            &&  _data == cast->_data;
    }

    DerivedClass* DerivedClass::doClone() const
    {
        return new DerivedClass(*this);
    }
} // namespace target {
