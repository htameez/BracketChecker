cmake_minimum_required(VERSION 3.15)
project(Assignment3_brackets)

set(CMAKE_CXX_STANDARD 17)

file(COPY test_data/ DESTINATION test_data/)

# show compiler output and enable warnings
set(CMAKE_VERBOSE_MAKEFILE ON)
add_compile_options(-Wall -Wextra -pedantic)

# Create the executable for sorting
add_executable(check_brackets main.cpp)
add_executable(check_brackets_list main_list.cpp)

set(CMAKE_VERBOSE_MAKEFILE OFF)

# testing with the single_include versions of Catch2 V2 (in directory catch2)
include(CTest)
add_executable(tests_list test_DSList.cpp)
add_test(NAME TestList COMMAND tests_list)
add_executable(tests_stack_list test_DSStack_list.cpp)
add_test(NAME TestStackList COMMAND tests_stack_list)
add_executable(tests_stack test_DSStack_array.cpp)
add_test(NAME TestStack COMMAND tests_stack)
add_test(NAME TestCopyStack COMMAND tests_stack)
add_test(NAME TestAssignmentStack COMMAND tests_stack)
add_executable(tests_checker test_main.cpp)
add_test(NAME TestChecker COMMAND tests_checker)
add_executable(tests_checker_list test_main_list.cpp)
add_test(NAME TestCheckerList COMMAND tests_checker_list)
