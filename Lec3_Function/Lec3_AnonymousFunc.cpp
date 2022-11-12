#include<vector>

int offset(int x, int y){
return x + y;
}
void apply_bonus(double& grade){
if (grade <= 4.0 && grade > 1.0) {
grade = offset(grade, -0.3);
}
}
int main(){
std::vector<double> grades {1.3, 2.7, 4.3, 2.0};
// Manually iterating over all grades and calling apply_bonus
for (auto& grade : grades) {
apply_bonus(grade);
}
//or: you can:
//std::for_each( grades.begin(), grades.end(), apply_bonus);
}

//Passing func to ...func
void apply_bonus(double& grade,
std::function<double(double, double)> operation){
// std::function< return_type (argument_types) >
grade = operation(grade, -0.3);
}
int main(){
std::vector<double> grades {1.3, 2.7, 4.3, 2.0};
auto super_bonus = [](double x, double step){return x + 3*step;};
for (auto& grade : grades) {
apply_bonus(grade, offset);
apply_bonus(grade, super_bonus);// a func as a parameter
}
}
