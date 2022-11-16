#include<iostream>


// int offset(int x){ // Name in the binary: _Z6offseti
// int y = x + 40; // or, demangled: offset(int)
// return y;
// }
// double offset(double x){ // Name in the binary: _Z6offsetd
// double y = x + 40.0; // or, demangled: offset(double)
// return y;
// }
// // with same functionname but different parameter, can have different definitions.
//
// int main(){
// auto b1 = offset(2);//return a int
// auto b2 = offset(0.01);//return a float
// }

// int offset(int x, int step=40){//step has a default
// return x + step;
// }
// int main(){
// int a = 2;
// int x=1;
// int b = offset(a,x);
// int c = offset(a, 254);
// std::cout << "a=" << a << " b=" << b << " c=" << c << "\n";
// }
// Defalt arguments
//Default arguments must come after all the non-default arguments.
// because parameter step has Wert

template <typename T>//value type is not fixed. eg. can be int, double, bool...
T offset(T x){
return x + static_cast<T>(40);
}
int main(){
int b1 = offset<int>(2);
double b2 = offset<double>(0.01);
double b3 = offset(3.14); // equivalent: automatic type deduction
std::cout << " b1=" << b1 << " b2=" << b2
<< " b3=" << b3 << "\n";
}
//with tamplate, can call a function with different type of parameter.


