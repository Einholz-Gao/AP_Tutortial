#ifndef STUDENTCARD_H
#define STUDENTCARD_Η

#include <iostream>
#include <string>

#include "Student.h"

class StudentCard: Student {
    // TODO
protected:
    std::string _student_name;

    std::vector<std::string> _courses;

public:
    StudentCard(Student);

    void print() const;
};

#endif
