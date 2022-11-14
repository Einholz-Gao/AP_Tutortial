// ******************************
// *     Advanced programming   *
// ******************************
#include<iostream>
#include <iterator>
#include<vector>
#include <cassert>

using namespace std;

template <typename T>
void print_vector(const T& vec){
    std::cout<<"[ ";
    for(auto&elem:vec){                                       // dont need a "const" here
        std::cout << elem << " ";
    }
    std::cout<<"]" << std::endl;
}

template <typename T>
void print_matrix(const vector<vector<T>>& mat){
    for( auto&row:mat){
       print_vector(row);
       // std::cout << std::endl;
    }
}

// void print_vector(const std::vector<double>& m){
    // std::cout<<"[ ";
    // for(auto&elem:m){                                       // dont need a "const" here
    //     std::cout << elem << " ";
    // }
    // std::cout<<"]";
// }
// void print_vector(const std::vector<int>& m){
    // std::cout<<"[ ";
    // for(auto&elem:m){                                       // dont need a "const" here
    //     std::cout << elem << " ";
    // }
    // std::cout<<"]";
// }
// void print_matrix(const std::vector<std::vector<double>>&m){
//     for(const auto&vector:m){
//         for(const auto&elem:vector)
//         std::cout << elem << std::endl;
//     }
// }
//
// void print_matrix(const std::vector<std::vector<int>>&m){
//     for(const auto&vector:m){
//         for(const auto&elem:vector)
//         std::cout << elem << std::endl;
//     }
// }
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
    vector<double> V2 = {4, 3, 2, 1};
    vector<vector<int>> matrix = {
    {1, 2, 3},
    {3, 2, 1},
    {4, 5, 6}};
    print_vector((V1));
    print_matrix(matrix);
    return 0;
}
