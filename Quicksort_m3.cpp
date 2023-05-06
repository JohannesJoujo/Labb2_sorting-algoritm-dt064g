//
// Created by Johannes Joujo on 2023-04-26.
//

#include "Quicksort_m3.h"

void quickSort_m3(std::vector<int>::iterator low, std::vector<int>::iterator high) {
    if (low < high) {
        auto pi = partition_m3(low, high);
        quickSort_m3( low, pi);
        quickSort_m3( pi + 1, high);
    }
}

std::vector<int>::iterator partition_m3(std::vector<int>::iterator low, std::vector<int>::iterator high) {
    auto pivot = med_of_3(low,high);
    auto i = low - 1;
    for (auto j = low; j < high; j++) {
        if (*j < *pivot) {
            i++;
            std::swap(*i, *j);
        }
    }
    std::swap(*(i + 1), *pivot);
    return i + 1;
}

std::vector<int>::iterator med_of_3(std::vector<int>::iterator low, std::vector<int>::iterator high) {
    auto mid=low+((high-low)/2);
    if(*low > *mid){
        std::swap(*low,*mid);
    }
    if(*mid > *high){
        std::swap(*mid,*high);
    }
    if(*mid < *low){
        std::swap(*mid,*low);
    }
    return mid;
}