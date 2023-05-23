//
// Created by Johannes Joujo on 2023-04-26.
//

#ifndef LABB2_SORTING_QUICKSORT_H
#define LABB2_SORTING_QUICKSORT_H

#include <iostream>
#include <vector>
/*
std::vector<int>::iterator partition(std::vector<int>::iterator low, std::vector<int>::iterator high);
void quickSort(std::vector<int>::iterator low, std::vector<int>::iterator high);
*/
/*
void quicksort(std::vector<int>& A, std::vector<int>::iterator low, std::vector<int>::iterator high);
std::vector<int>::iterator partition(std::vector<int>& A, std::vector<int>::iterator low, std::vector<int>::iterator high);
 */
/*
void quicksort(std::vector<int>& A, int low, int high);
std::vector<int>::iterator partition(std::vector<int>& A, int low, int high);
*/

int partition(std::vector<int>& A, int low, int high);
void quicksort(std::vector<int>& A, int low, int high);
#endif //LABB2_SORTING_QUICKSORT_H
