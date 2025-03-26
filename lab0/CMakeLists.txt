cmake_minimum_required(VERSION 3.3)

project(lab0)

file(GLOB SRC_FILES ./include/*.cpp)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON CACHE INTERNAL "")

add_executable(ejemplo ${SRC_FILES} ejemplo_main_2025.cpp)
target_compile_definitions(ejemplo PUBLIC
	"-std=c++98")
target_include_directories(ejemplo PUBLIC
	./include/)