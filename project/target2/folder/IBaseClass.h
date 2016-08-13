#pragma once
#include <memory>

namespace target2 {
    class IBaseClass {
    //private typedef
    private:
    //public typedef
    public:
    //public function
    public:
        IBaseClass();
        double getData() const;
        std::shared_ptr<IBaseClass> clone() const;
        bool operator==(const IBaseClass& other) const;
        virtual double doGetData() const = 0;
        virtual IBaseClass* doClone() const = 0;
        virtual bool doEqual(const IBaseClass& other) const = 0;
    //private function
    private:
    //private members
    private:
    }; // class IBaseClass {
} // namespace target2 {
