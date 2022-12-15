#include "StudentCard.h"

// TODO
StudentCard::StudentCard(Student name){
    _student_name = name._name;
}

void StudentCard::print(){
    std::cout << "Name: " << _student_name << std::endl;
}
