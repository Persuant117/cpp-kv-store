cmake_minimum_required(VERSION 3.14)

project(cpp_kv_store VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(kvstore
    src/main.cpp
    src/store.cpp
)

target_include_directories(kvstore PRIVATE src)