#include <iostream>
#include <string>

#include "Practical.h"

// TODO: Implement constructor and describe()
Practical::Practical(std::string id, std::size_t num_worksheets):Course(id), _num_worksheets(num_worksheets){
    std::cout << "Constructing the lecture "<< _id << std::endl;
}

std::string Practical::type() const
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

void Practical::discribe()const{
    std::cout<<"This is a Practical course"<<std::endl<<". And the number of worksheets: "<<_num_worksheets<<std::endl;
}
