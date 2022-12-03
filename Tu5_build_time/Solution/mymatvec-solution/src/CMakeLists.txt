cmake_minimum_required (VERSION 3.0)
project (mymatvec VERSION 0.2.0 LANGUAGES CXX)

# We need to enable testing before we can define tests
enable_testing()

# Find at least version 3.3 of Eigen3
find_package (Eigen3 3.3 REQUIRED NO_MODULE)

# We can build mymatvec by building mymatvec.cpp
add_executable (mymatvec mymatvec.cpp)
# mymatvec needs to be linked to Eigen (which exports a CMake target called Eigen3::Eigen)
target_link_libraries (mymatvec Eigen3::Eigen)

# We also want to build a separate executable with our tests, testmymatvec.
# We have moved the test code into testmatvec.cpp
add_executable (testmymatvec testmatvec.cpp)
# Add a test case, which simply runs testmymatvec.
# We could have more test cases with different configurations.
add_test(NAME mytest
         COMMAND testmymatvec)
target_link_libraries (testmymatvec Eigen3::Eigen)
