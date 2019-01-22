#pragma once
#include <string>
#include <iostream>
class Person
{
    public:
        Person(const std::string& name);
        virtual void print_identity() const;
        virtual bool go_to_class(const std::string&) const;
    protected:
        const std::string name_;
};
