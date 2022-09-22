cmake_minimum_required(VERSION 3.16)
project(setup_cpp_lint)

set(CMAKE_CXX_STANDARD 20)

include(cmake/ClangTidyCheck.cmake)

add_subdirectory(task)
