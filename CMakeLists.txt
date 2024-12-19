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
add_subdirectory(src)