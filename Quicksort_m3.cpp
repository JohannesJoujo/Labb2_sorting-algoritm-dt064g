//
// Created by Johannes Joujo on 2023-04-26.
//

#include "Quicksort_m3.h"

void quickSort_m3(std::vector<int>& A, int low, int high){
    if(low>=0 && high>=0 && low<high){
        auto p= partition_m3(A,low,high);
        quickSort_m3(A,low,p);
        quickSort_m3(A,(p+1),high);
    }
}
int partition_m3(std::vector<int>& A, int low, int high){
    auto pivot= med_of_3(A,low,high);
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

int med_of_3(std::vector<int>& A, int low, int high){
    auto mid=((high+low)/2);

    if(A[mid]<A[low]){
        std::swap(A[mid],A[low]);
    }
    if(A[high]<A[low]){
        std::swap(A[high],A[low]);
    }
    if(A[mid]<A[high]){
        std::swap(A[mid],A[high]);
    }
    return A[high];
}

