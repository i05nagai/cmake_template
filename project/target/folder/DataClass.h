#pragma once
#include "target/folder/IBaseClass.h"
#include <memory>

namespace target {
    class DataClass {
    //private typedef
    private:
    //public typedef
    public:
    //public function
    public:
        DataClass(const double data);
        double getData() const;
        double execute(std::shared_ptr<IBaseClass> base) const;
    //private function
    private:
    //private members
    private:
        double _data;
    }; // class DataClass {
} // namespace target {
