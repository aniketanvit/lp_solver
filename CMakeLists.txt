cmake_minimum_required(VERSION 3.0)
project(lp_solver)

find_package(Eigen3 REQUIRED)
include_directories("${EIGEN3_INCLUDE_DIR}")

add_executable(lp_solver InequalitySolver.cpp)
