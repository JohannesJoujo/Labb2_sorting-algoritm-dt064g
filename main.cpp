#include <iostream>
#include "generate_numbers.h"
#include "Insertion_sort.h"
#include "time_calc.h"
#include "Selection_sort.h"
#include "QuickSort.h"
#include "Quicksort_m3.h"
#include <string>
#include <fstream>

void new_try(size_t sz, std::vector<int>&vec);
int main() {
    int size=20000;
    int samples=10;
    std::vector<int> insertion(size);
    std::vector<double> time_vec(size);
    generate_constant(insertion);
/*
    for(auto e:insertion){
        std::cout<<e<<", ";
    }*/

    int choose_option=10;
    while (choose_option >= 5){
        std::cout<<"Your options are:\n";
        std::cout<<"[1] for Insertion sort\n[2] for selection sort\n[3] for Quicksort\n[4] for Quicksort_m3\n ";
        std::cin>>choose_option;
    }
    std::ofstream file("Sort.txt", std::ios::app);
    switch (choose_option) {
        double avrage_avikelse;
        double avrage_time;
        int tries;
        case 1:
            tries=size;
            file<<"insertion_sort\nN\tT[ms]\tStdev[ms]\tSamples\n";
            for (int j = 0; j < samples; j++) {
                for (int i = 0; i < 10; i++) {
                    new_try(tries,insertion);
                    auto start = std::chrono::steady_clock::now();
                    insertion_sort(insertion.begin(), insertion.end());
                    auto end = std::chrono::steady_clock::now();
                    time_vec.push_back(std::chrono::duration<double, std::milli>(end - start).count());
                    //std::cout<<"Size of the vector: "<<insertion.size()<<"\n";
                    assert(std::is_sorted(insertion.begin(),insertion.end()));
                }
                avrage_avikelse= standardavvikelse(time_vec);
                avrage_time= avg(time_vec);
                file<<insertion.size()<<"\t"<<avrage_time<<"\t"<<avrage_avikelse<<"\t"<<samples<<"\n";
                time_vec.clear();
                //time_vec.resize(size);
                tries=tries + size;
            }

            break;
        case 2:
            /*
            tries=size;
            for(int c=0;c<10;c++) {

                for (int j = 0; j < samples; j++) {
                    for (int i = 0; i < tries; i++) {
                        auto start = std::chrono::steady_clock::now();
                        selection_sort(insertion);
                        auto end = std::chrono::steady_clock::now();
                        time_vec.push_back(std::chrono::duration<double, std::milli>(end - start).count());
                    }
                }
                avrage_avikelse = standardavvikelse(time_vec);
                avrage_time = avg(time_vec);

                file << "selection_sort\nN\t\t\tT[ms]\t\t\tStdev[ms]\t\t\tSamples\n" << tries << "\t\t\t" << avrage_time
                     << "\t\t\t"
                     << avrage_avikelse << "\t\t\t" << samples << "\n";
                tries = tries +size;
            }*/
            tries=size;
            file<<"selection_sort\nN\tT[ms]\tStdev[ms]\tSamples\n";
            for (int j = 0; j < samples; j++) {
                for (int i = 0; i < 10; i++) {
                    new_try(tries,insertion);
                    auto start = std::chrono::steady_clock::now();
                    selection_sort(insertion);
                    auto end = std::chrono::steady_clock::now();
                    time_vec.push_back(std::chrono::duration<double, std::milli>(end - start).count());
                    //std::cout<<"Size of the vector: "<<insertion.size()<<"\n";
                    assert(std::is_sorted(insertion.begin(),insertion.end()));
                }
                avrage_avikelse= standardavvikelse(time_vec);
                avrage_time= avg(time_vec);
                file<<insertion.size()<<"\t"<<avrage_time<<"\t"<<avrage_avikelse<<"\t"<<samples<<"\n";
                time_vec.clear();
                //time_vec.resize(size);
                tries=tries + size;
            }
            break;
        case 3:
            /*
            tries=size;
            for(int c=0;c<10;c++) {
                for (int j = 0; j < samples; j++) {
                    for (int i = 0; i < tries; i++) {
                        auto start = std::chrono::steady_clock::now();
                        quickSort(insertion, insertion.begin(), insertion.end());
                        auto end = std::chrono::steady_clock::now();
                        time_vec.push_back(std::chrono::duration<double, std::milli>(end - start).count());
                    }
                }
                avrage_avikelse = standardavvikelse(time_vec);
                avrage_time = avg(time_vec);

                file << "quickSort\nN\t\t\tT[ms]\t\t\tStdev[ms]\t\t\tSamples\n" << tries << "\t\t\t" << avrage_time
                     << "\t\t\t"
                     << avrage_avikelse << "\t\t\t" << samples << "\n";
                tries = tries + size;
            }*/
            tries=size;
            file<<"quickSort\nN\tT[ms]\tStdev[ms]\tSamples\n";
            for (int j = 0; j < samples; j++) {
                for (int i = 0; i < 10; i++) {
                    new_try(tries,insertion);
                    auto start = std::chrono::steady_clock::now();
                    quickSort(insertion.begin(), insertion.end());
                    auto end = std::chrono::steady_clock::now();
                    time_vec.push_back(std::chrono::duration<double, std::milli>(end - start).count());
                    assert(std::is_sorted(insertion.begin(),insertion.end()));
                    //std::cout<<"Size of the vector: "<<insertion.size()<<"\n";
                }
                avrage_avikelse= standardavvikelse(time_vec);
                avrage_time= avg(time_vec);
                file<<insertion.size()<<"\t"<<avrage_time<<"\t"<<avrage_avikelse<<"\t"<<samples<<"\n";
                time_vec.clear();
                //time_vec.resize(size);
                tries=tries + size;
            }
            break;
        case 4:
            /*
            tries=size;
            for(int c=0;c<10;c++) {
                for (int j = 0; j < samples; j++) {
                    for (int i = 0; i < tries; i++) {
                        auto start = std::chrono::steady_clock::now();
                        quickSort_m3(insertion.begin(), insertion.end());
                        auto end = std::chrono::steady_clock::now();
                        time_vec.push_back(std::chrono::duration<double, std::milli>(end - start).count());
                    }
                }
                avrage_avikelse = standardavvikelse(time_vec);
                avrage_time = avg(time_vec);

                file << "quickSort_m3\nN\t\t\tT[ms]\t\t\tStdev[ms]\t\t\tSamples\n" << tries << "\t\t\t" << avrage_time
                     << "\t\t\t"
                     << avrage_avikelse << "\t\t\t" << samples << "\n";
                tries = tries +size;
            }
            */
            tries=size;
            file<<"quickSort_m3\nN\tT[ms]\tStdev[ms]\tSamples\n";
            for (int j = 0; j < samples; j++) {
                for (int i = 0; i < 10; i++) {
                    new_try(tries,insertion);
                    auto start = std::chrono::steady_clock::now();
                    quickSort_m3(insertion.begin(), insertion.end());
                    auto end = std::chrono::steady_clock::now();
                    time_vec.push_back(std::chrono::duration<double, std::milli>(end - start).count());
                    assert(std::is_sorted(insertion.begin(),insertion.end()));
                    //std::cout<<"Size of the vector: "<<insertion.size()<<"\n";
                }
                avrage_avikelse= standardavvikelse(time_vec);
                avrage_time= avg(time_vec);
                file<<insertion.size()<<"\t"<<avrage_time<<"\t"<<avrage_avikelse<<"\t"<<samples<<"\n";
                time_vec.clear();
                //time_vec.resize(size);
                tries=tries + size;
            }
            break;
        default:
            std::cout << "Error! The operator is not correct";
            break;
    }
    file.close();

/*
for(int j=0;j<samples;j++) {
    for (int i = 0; i < size; i++) {
        auto start = std::chrono::steady_clock::now();
        quickSort_m3(insertion, insertion.begin(), insertion.end());
        auto end = std::chrono::steady_clock::now();
        time_avg_vec.push_back(std::chrono::duration<double, std::milli>(end - start).count());
    }
}*/
    /*
    for(auto e:insertion){
        std::cout<<e<<", ";
    }*/
    if(std::is_sorted(insertion.begin(),insertion.end())){
        std::cout<<"\nsorted\n";
    } else{
        std::cout<<"\nnot sorted\n";
    }
    int decide=0;
    std::cout<<"Tryck på 1 om du vill radera filen: ";
    std::cin>>decide;
    if(decide==1) {
        remove("Sort.txt");
    }

    char run_again='h';
    std::cout<<"Run again? y/n ";
    std::cin>>run_again;

    if(run_again=='y'){
        main();
    }
    return 0;
}
void new_try(size_t sz, std::vector<int>&vec){
    vec.clear();
    vec.resize(sz);
    generate_constant(vec);
}