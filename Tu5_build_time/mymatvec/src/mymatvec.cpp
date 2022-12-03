#include<iostream>
#include<vector>
#include<cassert>
#include <Eigen/Dense>

template<typename T>
void print_vec(const std::vector<T>& vec, 
               bool print_vec_header = true){
    /*
    * Print vectors with elements of type T. Note
    * that this only works for objects of type 
    * T for which "std::cout << object" would work.
    */
   
   if(print_vec_header){
       std::cout << "Vector of size " << vec.size() << "\n";
   }

   std::cout << "{ ";
   // for each element in vector
   for (const auto& elem : vec ){
       std:: cout << elem << " ";
   }
   std::cout << " }\n";
}

template<typename T>
void print_matrix(const std::vector<std::vector<T>>& matrix){

    std::cout << matrix.size() << " x " << matrix[0].size() << " Matrix: " << '\n';
    // for each row in matrix
    for(const auto& row : matrix){
        print_vec(row, false);
    }
}

std::vector<double> operator+( const std::vector<double>& vec_a,
                               const std::vector<double>& vec_b ){
    /*
    * Overload operator+ to allow addition of two double vectors 
    * of the same size. The return value is another vector formed by
    * adding the corresponding elements of vec_a and vec_b.
    */
    
    assert(vec_a.size() == vec_b.size() );
    
    std::vector<double> vec_sum( vec_a.size(), 0.0 );

    for ( auto i = 0; i < vec_a.size(); i++ ){
        vec_sum[i] = vec_a[i] + vec_b[i];
    }
    return vec_sum;
}

std::vector<double> operator*(const Eigen::MatrixXd& matrix,
                              const std::vector<double>& vec){
    /*
    * Overload of operator* for matrix vector multiplication
    * where a matrix is a vector of vector of doubles:
    * std::vector<Eigen::VectorXd>
    * and vector is Eigen::VectorXd
    */
    auto N = vec.size();
    assert(N == matrix[0].size() );
    Eigen::VectorXd res(N, 0.0);

    for(auto i = 0; i < N; i++){
        for(auto j = 0; j < N; j++){
            res[i] += vec[j] * matrix[i][j];
        }
    }
    return res;
}

bool test_matrix_vector_product() {
    /*
    * Test implementation of operator* for Matrix-vector product.
    */
    bool tests_passed = true;

    Eigen::MatrixXd matrix = { {1. , 2. }, {3. , 4. }};
    Eigen::VectorXd vec = {1., 1.};

    Eigen::VectorXd mat_vec = matrix * vec;

    Eigen::VectorXd reference = {3. ,7.};

    double tol = 1e-8;
    for(auto i = 0; i < reference.size(); i++){
        // floating point values are "equal" if their
        // difference is small 
        if( (reference.at(i) - mat_vec.at(i) ) > tol ){
            tests_passed = false;
        }
    }
    if(tests_passed){
        std::cout << "Tests passed!\n";
    }
    else{
        std::cout << "Tests failed \n";
        std::cout << "Reference: ";
        print_vec(reference, false);
        std::cout << "Computed: ";
        print_vec(mat_vec, false);
    }
    return tests_passed;
}


int main(){
    Eigen::MatrixXd matrix = { {1. , 0. , 0.},
                                                {0. , 1. , 0.} ,
                                                {0. , 0. , 1.} };

    Eigen::VectorXd vec_a = {1. , 2. , 3.};
    Eigen::VectorXd vec_b = {4. , 5. , 6.};

    // adding two vectors
    auto vec_sum = vec_a + vec_b;
    print_vec(vec_sum);

    test_matrix_vector_product();

}
