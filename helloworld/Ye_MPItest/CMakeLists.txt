cmake_minimum_required(VERSION 3.23)
project(Ye_MPItest)

set(CMAKE_CXX_STANDARD 14)

find_package(OpenMP)
if (NOT WIN32)
    if(OPENMP_FOUND)
        set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${OpenMP_C_FLAGS}")
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${OpenMP_CXX_FLAGS} -lstdc++ -Xpreprocessor -fopenmp")
        set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} ${OpenMP_EXE_LINKER_FLAGS}")
    endif()
endif()

add_executable(Ye_MPItest main.cpp)


