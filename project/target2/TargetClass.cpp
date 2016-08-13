#include "target2/TargetClass.h"

namespace target2 {
    TargetClass::TargetClass(const double data)
    : _data(data)
    {
    }

    double TargetClass::getData() const
    {
        return _data;
    }
} // namespace target2 {
