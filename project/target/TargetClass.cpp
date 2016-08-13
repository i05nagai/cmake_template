#include "target/TargetClass.h"

namespace target {
    TargetClass::TargetClass(const double data)
    : _data(data)
    {
    }

    double TargetClass::getData() const
    {
        return _data;
    }
} // namespace target {
