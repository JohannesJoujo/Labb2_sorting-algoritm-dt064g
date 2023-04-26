//
// Created by Johannes Joujo on 2023-04-26.
//

#include "QuickSort.h"
#include "Quicksort_m3.h"

void quickSort(std::vector<int> &vec, std::vector<int>::iterator low, std::vector<int>::iterator high) {
    if (low < high) {
        auto pi = partition(vec, low, high);
        quickSort(vec, low, pi);
        quickSort(vec, pi + 1, high);
    }
}

std::vector<int>::iterator partition(std::vector<int> &vec, std::vector<int>::iterator low, std::vector<int>::iterator high) {
    auto pivot = med_of_3(low,high);
    auto i = low - 1;
    for (auto j = low; j < pivot; j++) {
        if (*j < *pivot) {
            i++;
            std::swap(*i, *j);
        }
    }
    std::swap(*(i + 1), *pivot);
    return i + 1;
}

std::vector<int>::iterator med_of_3(std::vector<int>::iterator low, std::vector<int>::iterator high) {
    auto temp_mid=(high-low)/2;
    auto mid=low+temp_mid;
    if(*low>*mid){
        std::swap(*low,*mid);
    }
    if(*mid>*high){
        std::swap(*mid,*high);
    }
    if(*mid<*low){
        std::swap(*mid,*low);
    }
    return mid;
}
