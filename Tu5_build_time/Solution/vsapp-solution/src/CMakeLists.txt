cmake_minimum_required(VERSION 3.8)
project(VisApp VERSION 0.1.0 LANGUAGES CXX)
add_executable(vis_app vis_app.cpp helper.cpp)
target_compile_features(vis_app PUBLIC cxx_std_17)
