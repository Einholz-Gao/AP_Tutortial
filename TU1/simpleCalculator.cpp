#include<iostream>
using namespace std;
//Bob creats it.

double multiply(double a, double b){
    return a*b;
}

double divide(double a,double b){
    return b==0? 0: a/b;
}


double mean(double a, double b){
    return (a+b)/2;
}

int main(){
    //write your code here.
    //cout<<divide(1,2)<<endl;
    char c;
    double a,b;
    double res;
    cin>>a>>c>>b;
    if(c=='+')  res=sum(a,b);
    else if(c=='-') res=subtract(a,b);        
    else if(c=='*')  res=multiply(a,b);
    else if(c=='/')   res=divide(a,b);
    else res=mean(a,b);

    cout<<res<<endl;
    return 0; 
}
