//
// Created by Johannes Joujo on 2023-04-26.
//

#ifndef LABB2_SORTING_QUICKSORT_M3_H
#define LABB2_SORTING_QUICKSORT_M3_H

#include <iostream>
#include <vector>


std::vector<int>::iterator partition_m3(std::vector<int> &vec, std::vector<int>::iterator low, std::vector<int>::iterator high);
void quickSort_m3(std::vector<int> &vec, std::vector<int>::iterator low, std::vector<int>::iterator high);
std::vector<int>::iterator med_of_3(std::vector<int>::iterator low, std::vector<int>::iterator high);


#endif //LABB2_SORTING_QUICKSORT_M3_H
