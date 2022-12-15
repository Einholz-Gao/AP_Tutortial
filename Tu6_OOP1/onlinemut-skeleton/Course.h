#ifndef COURSE_H
#define COURSE_H

#include <string>

// TODO
enum CourseType{
    Lecture,
    Seminar,
    Practical
};

class Course {
    // TODO
private:
    std::string _course_name;
    const std::string _course_id;
    CourseType _type;

public:
    Course(std::string course_id, CourseType);
    std::string get_id();
};

#endif // COURSE_Η
