project(map_test)

add_executable(${PROJECT_NAME} map_test.cpp)

target_include_directories(
    ${PROJECT_NAME}
    PUBLIC
    ${PNC_Dir}
)

target_link_libraries(
    ${PROJECT_NAME} 
    PUBLIC
pnc_map 
)

add_test(NAME map_test COMMAND ${PROJECT_NAME})