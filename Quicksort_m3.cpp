//
// Created by Johannes Joujo on 2023-04-26.
//

#include "Quicksort_m3.h"
void quickSort_m3(std::vector<int> &vec, std::vector<int>::iterator low, std::vector<int>::iterator high) {
    if (low < high) {
        auto pi = partition_m3(vec, low, high);
        quickSort_m3(vec, low, pi);
        quickSort_m3(vec, pi + 1, high);
    }
}

std::vector<int>::iterator partition_m3(std::vector<int> &vec, std::vector<int>::iterator low, std::vector<int>::iterator high) {
    auto pivot = high - 1;
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