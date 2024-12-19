cmake_minimum_required(VERSION 3.20)
project(planning
    VERSION 0.1
    DESCRIPTION "A simple planning library"
    HOMEPAGE_URL "https://github.com/pangmen/vscodeqt"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(Process_Dir ${CMAKE_SOURCE_DIR}/src/process)
set(PNC_Dir ${CMAKE_SOURCE_DIR}/src/pnc_map)
set(ShowResult_Dir ${CMAKE_SOURCE_DIR}/src/show_result)
set(EIGEN3_INCLUDE_DIR "D:/eigen-3.4.0")

list(APPEND CMAKE_MODULE_PATH ${EIGEN3_INCLUDE_DIR}/cmake)

message("${CMAKE_SOURCE_DIR}")
message("${CMAKE_MODULE_PATH}")

find_package(Eigen3 REQUIRED)

if(TARGET Eigen3::Eigen)
message("Eigen3 found in ${EIGEN3_INCLUDE_DIR}")
include_directories(${EIGEN3_INCLUDE_DIR})
else()
message("Eigen3 not found")
endif()

add_subdirectory(src)