cmake_minimum_required(VERSION 3.1)
project(StudentCard VERSION 0.1.0 LANGUAGES CXX)
add_executable(main main.cpp Student.cpp StudentCard.cpp Course.cpp Curriculum.cpp Lecture.cpp Practical.cpp)
