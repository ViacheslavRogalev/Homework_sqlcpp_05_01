cmake_minimum_required(VERSION 3.20)

set(PostgreSQL_ADDITIONAL_VERSIONS "16")

project(Homework_sqlcpp_05_01)

add_executable(Homework_sqlcpp_05_01 main.cpp pgSQL.cpp pgSQL.h)

add_subdirectory("C:\\Users\\Slav\\source\\repos\\libpqxx-7.8.1" libpqxx-build)

target_compile_features (Homework_sqlcpp_05_01 PRIVATE cxx_std_17)

target_link_libraries (Homework_sqlcpp_05_01 PRIVATE pqxx)