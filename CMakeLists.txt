cmake_minimum_required(VERSION 3.24)
project(Labb2_sorting)

set(CMAKE_CXX_STANDARD 17)

add_executable(Labb2_sorting main.cpp Insertion_sort.cpp generate_numbers.cpp generate_numbers.h Insertion_sort.h time_calc.h Selection_sort.cpp Selection_sort.h QuickSort.cpp QuickSort.h Quicksort_m3.cpp Quicksort_m3.h)
