#include <iostream>
#include "generate_numbers.h"
#include "Insertion_sort.h"
#include "time_calc.h"
#include "Selection_sort.h"
#include "QuickSort.h"
#include "Quicksort_m3.h"
#include <string>
#include <fstream>

int main() {
    int size=200;
    int samples=10;
    std::vector<int> insertion(size);
    std::vector<double> time_avg_vec(size);
    generate_decreasing(insertion);
/*
    for(auto e:insertion){
        std::cout<<e<<", ";
    }*/

    int choose_option;
    std::cout<<"choose 1 for Insertion sort, 2 for selection sort, 3 for Quicksort, 4 for Quicksort_m3";
    std::cin>>choose_option;
    switch (choose_option) {
        case 1:
            for(int j=0;j<samples;j++) {
                for (int i = 0; i < size; i++) {
                    auto start = std::chrono::steady_clock::now();
                    insertion_sort(insertion.begin(), insertion.end());
                    auto end = std::chrono::steady_clock::now();
                    time_avg_vec.push_back(std::chrono::duration<double, std::milli>(end - start).count());
                }
            }
            break;
        case 2:
            for(int j=0;j<samples;j++) {
                for (int i = 0; i < size; i++) {
                    auto start = std::chrono::steady_clock::now();
                    selection_sort(insertion);
                    auto end = std::chrono::steady_clock::now();
                    time_avg_vec.push_back(std::chrono::duration<double, std::milli>(end - start).count());
                }
            }
            break;
        case 3:
            for(int j=0;j<samples;j++) {
                for (int i = 0; i < size; i++) {
                    auto start = std::chrono::steady_clock::now();
                    quickSort(insertion, insertion.begin(), insertion.end());
                    auto end = std::chrono::steady_clock::now();
                    time_avg_vec.push_back(std::chrono::duration<double, std::milli>(end - start).count());
                }
            }
            break;
        case 4:
            for(int j=0;j<samples;j++) {
                for (int i = 0; i < size; i++) {
                    auto start = std::chrono::steady_clock::now();
                    quickSort_m3(insertion, insertion.begin(), insertion.end());
                    auto end = std::chrono::steady_clock::now();
                    time_avg_vec.push_back(std::chrono::duration<double, std::milli>(end - start).count());
                }
            }
            break;
        default:
            std::cout << "Error! The operator is not correct";
            break;
    }
/*
for(int j=0;j<samples;j++) {
    for (int i = 0; i < size; i++) {
        auto start = std::chrono::steady_clock::now();
        quickSort_m3(insertion, insertion.begin(), insertion.end());
        auto end = std::chrono::steady_clock::now();
        time_avg_vec.push_back(std::chrono::duration<double, std::milli>(end - start).count());
    }
}*/

auto avrage_avikelse= standardavvikelse(time_avg_vec);
auto avrage_time= avg(time_avg_vec);
std::cout<<"avrage avikelse: "<<avrage_avikelse<<"\n";
std::cout<<"avrage time: "<<avrage_time<<"\n";

    std::ofstream file("quickSort_m3.txt", std::ios::app);
    file<<"quickSort_m3\nN\t\t\tT[ms]\t\t\tStdev[ms]\t\t\tSamples\n"<<size<<"\t\t\t"<<avrage_time<<"\t\t\t"
    <<avrage_avikelse<<"\t\t\t"<<samples<<"\n";

    for(auto e:insertion){
        std::cout<<e<<", ";
    }
    if(std::is_sorted(insertion.begin(),insertion.end())){
        std::cout<<"\nsorted\n";
    } else{
        std::cout<<"\nnot sorted\n";
    }
    file.close();
    int decide=0;
    std::cout<<"Tryck på 1 om du vill radera filen: ";
    std::cin>>decide;
    if(decide==1) {
        remove("quickSort_m3.txt");
    }

    return 0;
}
