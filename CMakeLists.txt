cmake_minimum_required(VERSION 3.22)
project(SortMethodsExecutionTime)

set(CMAKE_CXX_STANDARD 14)

add_executable(SortMethodsExecutionTime main.cpp BubbleSort.cpp BubbleSort.h SelectionSort.cpp SelectionSort.h InsertionSort.cpp InsertionSort.h MergeSort.cpp MergeSort.h QuickSort.h QuickSort.cpp HeapSort.h HeapSort.cpp ArrayCreation.cpp ArrayCreation.h)
