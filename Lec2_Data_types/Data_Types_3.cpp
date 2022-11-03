#include <iostream>
#include <string>

const double pi=3.1415;
int main(){
float a{39.123 + pi};
int b;
std::cout << "a=" << a << " b=" << b << "\n";
b = a;
{
std::size_t b = 1503;
std::cout << "By the way, b = " << b << "\n";
} // this b = 1503 works only in this area{}. this b is not the b out of the {}.


//out of{}, b is no more 1503.
std::string message("The answer to everything is ");
std::cout << message << std::to_string(b) << "\n";
// At the end of their scope, variables vanish.

return 0;
}
