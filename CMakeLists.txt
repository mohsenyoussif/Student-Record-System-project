cmake_minimum_required(VERSION 3.20)
project(Student_Record_System_project C)

set(CMAKE_C_STANDARD 99)

add_executable(Student_Record_System_project main.c struct.h system.h system.c privileges.h privileges.c)
