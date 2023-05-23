//
// Created by Johannes Joujo on 2023-04-26.
//

#include "QuickSort.h"
/*
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
}*/
/*
void quicksort(std::vector<int>& A, std::vector<int>::iterator low, std::vector<int>::iterator high){
    if (low < high){
        auto p= partition(A,low,high);
        quicksort(A,low,p);
        quicksort(A,p+1,high);
    }
}

std::vector<int>::iterator partition(std::vector<int>& A, std::vector<int>::iterator low, std::vector<int>::iterator high){
    auto pivot= low+((high-low)/2);
    auto i=low-1;
    auto j=high+1;

    while(1){
        do{
            i++;
        } while (*i < *pivot);
        do{
            j--;
        } while (*j > *pivot);

        if(i >= j){
            return j;
        }
        std::swap(*i,*j);
    }
}
*/
void quicksort(std::vector<int>& A, int low, int high){
    if(low>=0 && high>=0 && low<high){
        auto p= partition(A,low,high);
        quicksort(A,low,p);
        quicksort(A,(p+1),high);
    }
}
int partition(std::vector<int>& A, int low, int high){
    auto pivot= A[low+((high-low)/2)];
    //auto pivot= A[high-1];
    auto i=low-1;
    auto j=high+1;

    while (1){
        do{
            i++;
        } while (A[i]<pivot);

        do {
            j--;
        } while (A[j]>pivot);

        if(i>=j){
            return j;
        }
        std::swap(A[i],A[j]);
    }
}

