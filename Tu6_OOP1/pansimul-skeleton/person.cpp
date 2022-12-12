#include "person.h"
#include<array>
// 1. TODO: Implement a constructor that takes a
// location array and creates a unique_id for the
// object.
//
// 2. TODO: Implement the copy constructor
//
// 3. TODO: Implement the copy assignment operator.
//
// You can find the signatures of these functions in
// the header file. :)

//CONSTRUCTOR


Person::Person(std::array<double,2> loc):_id(counter){
   _curr_location = loc;
   //_id = counter;
   //**can not use this way to give a value to a private const
   counter++;

}

//copy constructor
Person::Person(const Person& other):_id(counter){
    _status = other._status;
    _curr_location = other._curr_location;
    counter++;
}

// Person operator=(Person a, Person b){
//     a = Person(b);
//     return a;
// }

Person& Person::operator=(const Person& other){
    _status = other._status;
    _curr_location = other._curr_location;
    counter++;
    return *this;
}

std::array<double,2> Person::get_location() const {
   return _curr_location;
}

unsigned Person::get_id() const {
    return _id;
}

void Person::advance(){
    // for now, do advance doesn't
    // do anything sensible
    _curr_location[0] += 0.1;
    _curr_location[1] -= 0.1;
}



