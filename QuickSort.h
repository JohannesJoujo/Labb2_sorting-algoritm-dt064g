//
// Created by Johannes Joujo on 2023-04-26.
//

#ifndef LABB2_SORTING_QUICKSORT_H
#define LABB2_SORTING_QUICKSORT_H

#include <iostream>
#include <vector>

std::vector<int>::iterator partition(std::vector<int> &vec, std::vector<int>::iterator low, std::vector<int>::iterator high);
void quickSort(std::vector<int> &vec, std::vector<int>::iterator low, std::vector<int>::iterator high);

#endif //LABB2_SORTING_QUICKSORT_H
