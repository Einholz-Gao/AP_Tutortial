#include<iostream>


// int& offset(int x){
// int y = x + 40;
// return y;
// }
// cant use refFunc
std::pair<int,int> offset(int x){
int step = 40; // Assume step changes over time.
int y = x + step;
return std::pair<int,int> (y, step);
// return std::pair (y, step); // Since C++17
}

int main(){
    int a=2;
    auto [b, s]= offset(a);
    std::cout<<"b= " << b << " s=" << s<<std::endl;
}

