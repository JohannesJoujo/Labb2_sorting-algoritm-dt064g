//
// Created by Johannes Joujo on 2023-04-26.
//

#ifndef LABB2_SORTING_QUICKSORT_M3_H
#define LABB2_SORTING_QUICKSORT_M3_H

#include <iostream>
#include <vector>

/*
std::vector<int>::iterator partition_m3(std::vector<int>::iterator low, std::vector<int>::iterator high);
void quickSort_m3(std::vector<int>::iterator low, std::vector<int>::iterator high);
std::vector<int>::iterator med_of_3(std::vector<int>::iterator low, std::vector<int>::iterator high);
*/
/*
std::vector<int>::iterator med_of_3(std::vector<int>::iterator low, std::vector<int>::iterator high);
void quicksort_m3(std::vector<int>& A, std::vector<int>::iterator low, std::vector<int>::iterator high);
std::vector<int>::iterator partition_m3(std::vector<int>& A, std::vector<int>::iterator low, std::vector<int>::iterator high);
*/

int partition_m3(std::vector<int>& A, int low, int high);
void quickSort_m3(std::vector<int>& A, int low, int high);
int med_of_3(std::vector<int>& A, int low, int high);

#endif //LABB2_SORTING_QUICKSORT_M3_H
