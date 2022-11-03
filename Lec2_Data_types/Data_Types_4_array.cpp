#include <array>
#include <vector>
/* construction */

/* construction */

int main(){
std::array<int, 3> x_unit_vector = {1,0,0}; // before C++17
//std::array x_unit_vector = {1,0,0} ; // C++17

/* accessing elements */
x_unit_vector.at(5); // at() checks bounds - error
x_unit_vector[5]; // no bounds checking - may run silently

// 1. vector with 10 elements initialized to 0.0
std::vector<double> grades_list( 10, 0.0 );
// 2. Vector with three elements
//std::vector<double> grades_list = {55.5, 95.0, 70.0};
// push_back: add elements to the end
grades_list.push_back(85.0);

}
