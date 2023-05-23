//
// Created by Johannes Joujo on 2023-04-25.
//
#include "Insertion_sort.h"

void insertion_sort(std::vector<int>::iterator first, std::vector<int>::iterator last) {
    for(auto i = first + 1; i != last; i++){
        auto j = i;
        while(j > first && *(j-1) > *j){
            std::swap(*j, *(j-1));
            j = j - 1;
        }
    }
}
