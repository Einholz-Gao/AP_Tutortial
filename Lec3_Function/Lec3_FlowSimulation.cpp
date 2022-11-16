#include<iostream>


using Matrix = std::vector<std::vector<double>>;
void initialize(Matrix & pressure, double uniform_value){
std::cout << "Initialized all pressure to the same value.\n";
}
void save(Matrix const & pressure){
std::cout << "Wrote the pressure to a file.\n";
}
int main(){
Matrix pressure(1000, std::vector<double>(1000, 0));
initialize(pressure, 1e5);
// ... (compute the pressure for every time step)
save(pressure);
}
