/*
 * Floating-point
 * significant digits + exponent
 *
 *
 * NaN: "Not a number" the result is not defined
 * Inf: "infinity" overflow(+ or -)
 *<- the diference:
 */
#include <iostream>
#include <string>
using namespace std;

int main(){
    double a = 0.145e-07;
double b = 23.24e09;
double c = a + b;
std::cout << c << "\n"; //equal to the value of b. b is too large and the...

long int x =2147483647;
cout<<x<<endl<<x+1<<endl;
// limited size range of long int is larger.

return 0;
}


/*
 * unsigned has one more bit
 * underflow and overflow: out of the limited size(min and max)
 * */
