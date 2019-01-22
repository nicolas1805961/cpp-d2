#include "teacher.hh"
Teacher::Teacher(const std::string& name) : Person(name)
{}
Teacher::Teacher(const std::string& name
        , std::shared_ptr<const std::string> course) 
    : Person(name) , course_(course)
{}
void Teacher::print_identity() const
{
    Person::print_identity();
    std::cout << "I'm a teacher.\n";
}
bool Teacher::set_course(std::shared_ptr<const std::string> course
        , bool force)
{
    if (course_ == nullptr || force == true)
    {
        course_ = course;
        return false;
    }
    return true;
}
bool Teacher::go_to_class(const std::string& course) const
{
    if (course == *course_)
    {
        std::cout << "I have to teach " << course << ".\n";
        return true;
    }
    else
    {
        std::cout << "I don't teach " << course << ", I can stay at home!\n";
        return false;
    }
}
