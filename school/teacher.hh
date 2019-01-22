#pragma once
#include "person.hh"
#include <string>
#include <iostream>
#include <memory>
class Teacher : public Person
{
    public:
        Teacher(const std::string& name);
        Teacher(const std::string& name
                , std::shared_ptr<const std::string> course);
        void print_identity() const override;
        bool set_course(std::shared_ptr<const std::string> course
                , bool force = false);
        bool go_to_class(const std::string& course) const;
    private:
        std::shared_ptr<const std::string> course_;
};
