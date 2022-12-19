#include <iostream>
#include "Course.h"

Course::Course(std::string id, CourseType type)
: _id(id), _type(type)
{
    std::cout << "Constructing the course "
              << _id << std::endl;
}

std::string Course::id() const
{
    return _id;   
}