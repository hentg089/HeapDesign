cmake_minimum_required(VERSION 3.24)
project(HeapDesign)

set(CMAKE_CXX_STANDARD 17)

add_executable(HeapDesign main.cpp binheap.h binheap.cpp quicksort.cpp quicksort.h)

add_executable(SortTest binheap.h binheap.cpp quicksort.cpp quicksort.h sorttester.cpp)

add_executable(HeapTester heaptester.cpp binheap.h binheap.cpp)

