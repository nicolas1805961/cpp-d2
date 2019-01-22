#include "student.hh"
Student::Student(const std::string& name, size_t nb_courses) : Person(name), nb_courses_(nb_courses)
{
    courses_ = new std::shared_ptr<const std::string>[nb_courses];
}
Student::~Student()
{
    delete[] courses_;
}
void Student::print_identity() const
{
    Person::print_identity();
    std::cout << "I'm a student.\n";
}
bool Student::add_course(std::shared_ptr<const std::string> course)
{
    size_t i = 0;
    while (courses_[i])
    {
        if (*(courses_[i]) == *course)
            return true;
        i++;
    }
    if (i < nb_courses_)
    {
        courses_[i] = course;
        return true;
    }
    else
        return false;
}
bool Student::go_to_class(const std::string& course) const
{
    auto i = 0;
    while (courses_[i])
    {
        if (*(courses_[i]) == course)
        {
            std::cout << "I have to learn " << course << ".\n";
            return true;
        }
        i++;
    }
    std::cout << "I don't have " << course << ", I can stay at home!\n";
    return false;
}
