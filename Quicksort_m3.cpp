//
// Created by Johannes Joujo on 2023-04-26.
//

#include "Quicksort_m3.h"
/*
void quickSort_m3(std::vector<int>::iterator low, std::vector<int>::iterator high) {
    if (low < high) {
        auto pi = partition_m3(low, high);
        quickSort_m3(low, pi-1);
        quickSort_m3(pi + 1, high);
    }
}

std::vector<int>::iterator partition_m3( std::vector<int>::iterator low, std::vector<int>::iterator high) {
    auto pivot = med_of_3(low, high);
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

std::vector<int>::iterator med_of_3(std::vector<int>::iterator low, std::vector<int>::iterator high) {
    auto mid=low+((high-low)/2);
    if(*high < *low){
        std::swap(*high,*low);
    }
    if(*mid < *low){
        std::swap(*mid,*low);
    }
    if(*high > *mid){
        std::swap(*high,*mid);
    }
    return high;
}*/
/*
void quicksort_m3(std::vector<int>& A, std::vector<int>::iterator low, std::vector<int>::iterator high){
    if (low < high){
        auto p= partition_m3(A,low,high);
        quicksort_m3(A,low,p);
        quicksort_m3(A,p+1,high);
    }
}

std::vector<int>::iterator partition_m3(std::vector<int>& A, std::vector<int>::iterator low, std::vector<int>::iterator high){
    //auto pivot= low+((high-low)/2);
    auto pivot= med_of_3(low,high);
    auto i=low-1;
    auto j=high+1;

    while(1){
        do{
            i++;
        } while (*i<*pivot);
        do{
            j--;
        } while (*j>*pivot);

        if(i>=j){
            return j;
        }
        std::swap(*i,*j);
    }
}
*/
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

/*
std::vector<int>::iterator med_of_3(std::vector<int>::iterator low, std::vector<int>::iterator high){

    auto temp_mid = (high - low) / 2;
    auto mid = low + temp_mid;
    if (*low > *mid) {
        std::swap(*low, *mid);
    }
    if (*mid > *high) {
        std::swap(*mid, *high);
    }
    if (*mid < *low) {
        std::swap(*mid, *low);
    }
    return mid;

    auto mid=low+((high-low)/2);
    if(*high < *low){
        std::swap(*high,*low);
    }
    if(*mid < *low){
        std::swap(*mid,*low);
    }
    if(*high > *mid){
        std::swap(*high,*mid);
    }
    return high;


    auto temp_mid = (high - low) / 2;
    auto mid = low + temp_mid;

    if(*mid<*low){
        std::swap(*mid,*low);
    }
    if(*high<*low){
        std::swap(*high,*low);
    }
    if(*mid<*high){
        std::swap(*mid,*high);
    }
    return high;
}
*/
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

