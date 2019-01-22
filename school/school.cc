#include "school.hh"
bool go_to_class(const Person& person, const std::string& course)
{
    person.print_identity();
    return person.go_to_class(course);
}
