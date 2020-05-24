cmake_minimum_required(VERSION 3.5)

#############################################
project(StateMachine)
# Compiler option
set(CMAKE_CXX_STANDARD 11)


# Collect source file
set(LINK16P /mnt/c/Users/NHAT\ TRUONG/Desktop/exerciseBosch/vector)

add_executable(Vector1 ${LINK16P}/main.cpp ${LINK16P}/myvector.cpp)