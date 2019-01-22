#pragma once
#include <string>
#include <iostream>
#include <memory>
#include "person.hh"
class Student : public Person
{
    public:
        Student(const std::string& name, size_t nb_courses);
        ~Student();
        void print_identity() const override;
        bool add_course(std::shared_ptr<const std::string> course);
        bool go_to_class(const std::string& course) const;
    private:
        std::shared_ptr<const std::string>* courses_;
        size_t nb_courses_;
};
