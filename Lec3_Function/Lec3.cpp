#include<iostream>


int step(int s){
    return s*s;
}

int offset(int x){// store the result in a new adress
    int y=x+ step(x);
    return y;
}

void offset_by_Ref(int& x){//by referrence store the value in adress of "a"
x = x + 40;
return;
}
//const referrence: eg.void offset(const int& x)
//this referrence can only be read.(be protected) the value in this adress cant be modified by the function.

int main(){
    int a=2;
    int b= offset(a);
    std::cout << "a=" <<a << " b=" <<b <<"\n";
}

