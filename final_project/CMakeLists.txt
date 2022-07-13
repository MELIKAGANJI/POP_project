cmake_minimum_required(VERSION 3.22)
project(final_project C)

set(CMAKE_C_STANDARD 99)

add_executable(final_project main.c view_command.c view_command.h textbox.h textbox.c file.h file.c main.h)
