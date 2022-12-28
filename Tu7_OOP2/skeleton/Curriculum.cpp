#include <iostream>
#include <vector>
#include <memory>
#include <algorithm>
#include "Course.h"
#include "Curriculum.h"
#include "Lecture.h"
#include "Practical.h"

// TODO: Implement the constructor
    Curriculum::Curriculum(){
   // _available_courses.push_back();//"Course informations"
    };
// TODO: Implement print_courses()
    void print_corses()const{
    for( auto const& course: _available_courses){
        std::cout<<course<<" "<<std::endl;
    }
    }
// TODO: Implement request(std::string id) (the linker will complain till you do that)
    std::shared_ptr<const Course> request(std::string id) const{
    for( auto const& course: _available_courses){
        //check the id
        if(course.id()==id) return course;
        else
    }
    }
