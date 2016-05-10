cmake_minimum_required(VERSION 3.5)
project(APT_Assignment_2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    addressbook.c
    addressbook.h
    addressbook_list.c
    addressbook_list.h
    commands.c
    commands.h
    helpers.c
    helpers.h)

add_executable(APT_Assignment_2 ${SOURCE_FILES})