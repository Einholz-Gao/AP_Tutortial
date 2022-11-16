#include<vector>
#include<iostream>

void apply_bonus(double& grade){
if (grade < 1.0 || grade > 5.0) {
throw(std::invalid_argument("Invalid grade"));//this is  error.what() things
} // ...
}

int main(){
std::vector<double> grades {1.3, 5.7, 4.3, 2.0};
for (auto& grade : grades) {
    try{
        apply_bonus(grade);//while doing ...
    }
    catch(const std::invalid_argument& error){
        std::cerr << "Warning: " << error.what() << "\n"; // catch a error
    }
 }
}
