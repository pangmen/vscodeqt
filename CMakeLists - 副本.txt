cmake_minimum_required(VERSION 3.20)

project(planning)

set(cmake_Cxx_standard 11)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)
#Linux only
#set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)
#CMake_Archive_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

#动态库
aux_source_directory(${PROJECT_SOURCE_DIR}/src SRC_LIST)
add_library(common
    SHARED
    ${SRC_LIST}
)
target_include_directories(common 
PUBLIC 
${PROJECT_SOURCE_DIR}/include
)

#可执行文件
add_executable(planingmain main.cpp)

target_include_directories(planingmain
    PUBLIC
    ${PROJECT_SOURCE_DIR}/include
)

#链接
target_link_libraries(planingmain
PUBLIC
common)
