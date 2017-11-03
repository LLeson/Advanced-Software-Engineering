cmake_minimum_required(VERSION 3.8)
project(lab7)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        linktable.c
        linktable.h
        Makefile
        menu.c
        menu.h
        test.c)

add_executable(lab7 ${SOURCE_FILES})