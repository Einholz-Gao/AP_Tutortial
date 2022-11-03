/*
 *
 */
#include <iostream>
#include <string>
const double pi=3.1415;
int main(){
float a{39.123 + pi};
int b;                                                      // no init
std::cout << "a=" << a << " b=" << b << "\n";
// b has no init. no init = random Wert. should always initialize variables ->important!!!
// if no init, every time you run, b'll get diferent value
b = a;
std::string message("The answer to everything is ");
std::cout << message << std::to_string(b) << "\n";
//to_string() makes b to a string (but 42.245 -> 42?
//

// how to initialize:
int c=0; // The classic way: variable = expression
int d(0); // The classic way: variable( expression-list )
// Basic types: =, Classes: constructor
int e{0}; // Since C++11: variable{ initializer-list }
int f{}; // Since C++11: Defauts to zero for int


return 0;
}
