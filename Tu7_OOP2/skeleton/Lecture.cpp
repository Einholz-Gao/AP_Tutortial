#include <iostream>
#include <string>

#include "Course.h"
#include "Lecture.h"

Lecture::Lecture(std::string id, std::string exam_date)
    : Course(id), _exam_date(exam_date)
{
    std::cout << "Constructing the lecture "
              << _id << std::endl;
}

std::string Lecture::type() const
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
// TODO: Add describe()
void Lecture::discribe(){
    std::cout<<"This is a Lecture"<<std::endl;
}
