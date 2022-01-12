cmake_minimum_required(VERSION 3.21)
project(Notepad)

set(CMAKE_CXX_STANDARD 20)

add_executable(Notepad main.cpp NotePad.cpp NotePad.h MultimediaDocument.cpp MultimediaDocument.h Note.cpp Note.h)
