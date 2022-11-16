#include<math.h>
#include<iostream>
#include <type_traits>

int gcd(int a, int b){
    int res;
    if (b == 0)
        return a;
    else{
        if(b>a) std::swap(a, b);                            // a must be larger than b.
        for(int i = 1;i <= b;++i){                          // use the smaller number as the number of iterations
            if (a % i == 0 && b % i ==0) {                  // Two numbers are divisible at the same time.
                res = i;                                    // get the result
            }
        }
        return res;
    }
}

int gcd_Iter(int a,int b){
    while(b != 0){
        a %= b;
        std::swap(a, b);
    }
    return a;
}
int gcd_Rec(int a,int b){
    if (b == 0) return a;
    else
        return gcd_Rec(a,a%b);
}
int main(){
    int a, b;
    std::cout << "Please give 2 numbers: " << std::endl;
    std::cin>>a>>b;
    std::cout<<"Result: " <<  gcd(a, b) << std::endl;
}
