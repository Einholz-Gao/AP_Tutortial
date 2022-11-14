// ******************************
// *     Advanced programming   *
// ******************************
#include<iostream>
#include<vector>
#include <cassert>

using namespace std;

template <typename T>
void print_vector(const T& m){
    for(auto&elem:m){                                       // dont need a "const" here
        std::cout << elem << " ";
    }
}

template <typename T>
void print_matrix(const vector<vector<T>>& m){
    for( auto&vector:m){
        for( auto&elem:vector)
        std::cout << elem << std::endl;
    }
}

// void print_vector(const std::vector<double>& m){
//     for(auto&elem:m){
//         std::cout << elem << std::endl;
//     }
// }
// void print_vector(const std::vector<int>& m){
//     for(auto&elem:m){
//         std::cout << elem << std::endl;
//     }
// }
void print_matrix(const std::vector<std::vector<double>>&m){
    for(const auto&vector:m){
        for(const auto&elem:vector)
        std::cout << elem << std::endl;
    }
}

void print_matrix(const std::vector<std::vector<int>>&m){
    for(const auto&vector:m){
        for(const auto&elem:vector)
        std::cout << elem << std::endl;
    }
}
template <typename T>
vector<T> operator+(const vector<T>&vec_a, const vector<T>&vec_b){
    assert( vec_a.size() == vec_b.size() ); // Complain if sizes are not
    auto N = vec_a.size(); // compatible (debug only)
    std::vector<T> vec_sum(N, 0.0);
    for (auto i = 0; i < N; i++){
    vec_sum[i] = vec_a[i] + vec_b[i];
    }
    return vec_sum;
}

template <typename T>
vector<T> operator*(const vector<T>&vec_a, const vector<vector<T>>&vec_b){
    assert( vec_a.size() == vec_b.size() ); // Complain if sizes are not
    auto N = vec_a.size(); // compatible (debug only)
    std::vector<T> vec_sum(N, 0.0);
    for (auto i = 0; i < N; i++){
        for(auto j = 0;j < N;j++){
            vec_sum[i] = vec_a[i] * vec_b[j];
        }
    }
    return vec_sum;
}

bool test_matrix_vector_product(){
    bool flag = 0;

    return flag;;
}
int main(){
    vector<double> V1 = {1, 2, 3, 4};
    vector<double> V2 = {1, 2, 3, 4};
    // print_vector((V1*V2));
    return 0;
}
