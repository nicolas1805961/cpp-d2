#include "person.hh"
Person::Person(const std::string& name) : name_(name)
{}
void Person::print_identity() const
{
    std::cout << "My name is " << name_ << ".\n";
}
bool Person::go_to_class(const std::string&) const
{
    return false;
}
