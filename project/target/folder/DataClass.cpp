#include "target/folder/DataClass.h"
#include <memory>

namespace target {
    DataClass::DataClass(const double data)
    : _data(data)
    {
    }

    double DataClass::getData() const
    {
        return _data;
    }

    double DataClass::execute(std::shared_ptr<IBaseClass> base) const
    {
        return  base->getData();
    }
} // namespace target {
