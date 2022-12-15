#include <iostream>
#include <string>
#include <vector>
#include "Student.h"

Student::Student(std::string Name, const std::string Reg_num): _reg_num(Reg_num){
    _name = Name;
    std::cout << "Name: " << Name << std::endl << "Register number: " << Reg_num << std::endl;
}

void Student::SetCourse(std::string course){
    _courses.push_back(course);
    std::cout << "course " << course << "has been added!" << std::endl;
}

void Student::List_Courses(){
    for(std::string  &course: Student::_courses){
        std::cout << course << std::endl;
    }
}
