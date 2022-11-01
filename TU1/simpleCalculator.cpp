#include<iostream>
#include<cmath>
#include <math.h>
#include <sched.h>
#include<string>
using namespace std;
//Alice creats it.


double multiply(double a, double b){
    return a*b;
}

double divide(double a,double b){
    return b==0? 0: a/b;
}


double sum(double a,double b){
 return a+b;
}
double subtract(double a,double b){
 return a-b;
}
double mean(double a,double b)
{
    return (a+b)/2;
}


double square(double x){
    return pow(x,2);
}

void check(double x) {
	while (cin.fail()) {
		cout << "Wrong Input! Please input again." << endl;
		cin.clear();
		cin.ignore(1000, '\n');
		cin >> x;
	}
}
void check_Opr(string Opr){
        if (Opr!="+"||Opr!="-"||Opr!="*"||Opr!="/"||Opr!="mean"||Opr!="square"||Opr!="sin"||Opr!="cos"||Opr!="tan"){
        cout << "Operation is Wrong Input! Please input again." << endl;
		cin.clear();
		cin.ignore(1000, '\n');
        cin>> Opr;
}
}

int main(){
    //write your code here.
    //cout<<divide(1,2)<<endl;
    string Opr;
    double N1,N2;
    double res;
    cout<<"************Simple Calculator************ "<<endl;
	cout << "Please input the Operator(+ - * / mean square sin cos tan): ";
	cin >> Opr;
	check_Opr(Opr);
	cout << "Please input the first number:";
	cin >> N1;
	check(N1);
    if (Opr=="+"||Opr=="-"||Opr=="*"||Opr=="/"||Opr=="mean"){
	cout << "Please input the second number:";
	cin >> N2;
	check(N2);
    }
    if(Opr=="+")  res=sum(N1,N2);
    else if(Opr=="-") res=subtract(N1,N2);
    else if(Opr=="*")  res=multiply(N1,N2);
    else if(Opr=="/")   res=divide(N1,N2);
    else if(Opr=="mean")res=mean(N1,N2);
    else if(Opr=="square") res=pow(N1,2);
    else if(Opr=="sin") res=sin(N1*M_PI);
    else if(Opr=="cos") res=cos(N1*M_PI);
    else if(Opr=="tan") res=tan(N1*M_PI);

    cout<<"Result: "<<res<<endl;
    return 0; 
}

