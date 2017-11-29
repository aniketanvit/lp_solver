cmake_minimum_required(VERSION 3.0)
project(lp_solver)

find_package(Eigen3 REQUIRED)
include_directories("${EIGEN3_INCLUDE_DIR}")

#SET( EIGEN3_INCLUDE_DIR "/usr/local/Cellar/eigen/3.3.4/include/eigen3/" )
#IF( NOT EIGEN3_INCLUDE_DIR )
#    MESSAGE( FATAL_ERROR "Please point the environment variable EIGEN3_INCLUDE_DIR to the include directory of your Eigen3 installation.")
#ENDIF()
#INCLUDE_DIRECTORIES ( "${EIGEN3_INCLUDE_DIR}" )

add_executable(lp_solver PotentialReduction.cpp)
