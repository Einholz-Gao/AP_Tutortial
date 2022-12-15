#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <vector>
#include "Course.h"

class Student {
private:
    std::string _name;
    const std::string _reg_num;
    // the register number can not be changed.

    std::vector<std::string> _courses;
    friend class StudentCard;

public:
    Student(std::string Name, const std::string reg_num);

    void SetCourse(std::string course);

    void List_Courses() const;

};

#endif // STUDENT_H
