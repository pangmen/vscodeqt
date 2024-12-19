cmake_minimum_required(VERSION 3.20)

project(planning)

set(cmake_Cxx_standard 11)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

aux_source_directory(. SRC_LIST)

add_executable(planingmain ${SRC_LIST})