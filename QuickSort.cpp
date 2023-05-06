//
// Created by Johannes Joujo on 2023-04-26.
//

#include "QuickSort.h"

void quickSort(std::vector<int>::iterator low, std::vector<int>::iterator high) {
    if (low < high) {
        auto pi = partition(low, high);
        quickSort(low, pi);
        quickSort(pi + 1, high);
    }
}

std::vector<int>::iterator partition( std::vector<int>::iterator low, std::vector<int>::iterator high) {
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
