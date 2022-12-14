#include <iostream>
#include "Course.h"

Course::Course(std::string id)
: _id(id)
{
    std::cout << "Constructing the course "
              << _id << std::endl;
}

std::string Course::id() const
{
    return _id;   
}

std::string Course::type() const
{
    std::string type;

    if (_type == CourseType::Lecture) {
        type = "Lecture";
    } else if (_type == CourseType::Seminar) {
        type = "Seminar";
    } else if (_type == CourseType::Practical) {
        type = "Practical";
    }

    return type;
}
