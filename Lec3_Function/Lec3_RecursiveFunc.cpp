unsigned int factorial(unsigned int n){
if (n <= 1) {
return 1;
} else {
return factorial(n-1) * n; // function call + multiplication
}
}
std::cout << factorial(3) << "\n";


unsigned int factorial(unsigned int n, unsigned int val = 1){
if (n <= 1) {
return val;
} else {
return factorial(n-1, val * n); // only function call
}
}
std::cout << factorial(3) << "\n";
// Tail recursion
