#pragma once
#include "target/folder/IBaseClass.h"

namespace target {
    class DerivedClass : public IBaseClass {
    //private typedef
    private:
    //public typedef
    public:
    //public function
    public:
        DerivedClass(const double data);
        DerivedClass(const DerivedClass& other);
        virtual double doGetData() const override;
        virtual bool doEqual(const IBaseClass& other) const override;
        virtual DerivedClass* doClone() const override;
    //private function
    private:
    //private members
    private:
        double _data;
    }; // class DerivedClass : public BaseClass {
} // namespace target {
