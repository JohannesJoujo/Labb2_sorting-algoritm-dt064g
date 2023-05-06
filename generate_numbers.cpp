//
// Created by Johannes Joujo on 2023-04-25.
//

#include "generate_numbers.h"

void generate_random(std::vector<int>&vec){
    //std::generate(vec.begin(),vec.end(),std::rand);
    for(auto &e:vec){
        int rand_num=rand()%500+1;
        e=rand_num;
    }
}
void generate_decreasing(std::vector<int>&vec){
    int size=vec.size()+1;
    for(auto &e:vec){
        e=size;
        size--;
    }
}void generate_increasing(std::vector<int>&vec){
    int rand_num=rand()%500+1;
    for(auto &e:vec){
        e=rand_num;
        rand_num++;
    }
}

void generate_constant(std::vector<int> &vec) {
    int rand_num=rand()%500+1;
    for(auto &e:vec){
        e=rand_num;
    }
}
