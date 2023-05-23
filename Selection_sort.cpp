//
// Created by Johannes Joujo on 2023-04-26.
//

#include "Selection_sort.h"
/*
void selection_sort(std::vector<int> &vec) {
    int min_index;
    for(int i =0;i<vec.size()-1;i++){
        min_index=i;
        for(int j=i+1;j<vec.size();j++){
            if(vec[j]<vec[i]){
                min_index=j;
            }
            if(min_index!=i){
                std::swap(vec[min_index],vec[i]);
            }
        }
    }
}*/

void selection_sort(std::vector<int> &vec) {
    for (int i = 0; i < vec.size() - 1; i++) {
        auto min_index = i;
        for (int j = i + 1; j < vec.size(); j++) {
            if (vec[j] < vec[min_index]) { // compare with vec[min_index]
                min_index = j;
            }
        }
        if (min_index != i) {
            std::swap(vec[min_index], vec[i]);
        }
    }
}

