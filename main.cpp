#include <bits/chrono.h>
#include <chrono>
#include <iostream>
#include <memory>
#include <string>
#include "bubble_sort.h"
#include "selection_sort.h"
#include "insertion_sort.h"

void init_data(int *array, int size) {
    for(int i = size - 1; i >= 0; --i) {
        array[size - i - 1] = i + 1; 
    }
}

void print_array(int *array, int size) {
    for(int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }
}

int main(int argc, const char** argv) {
    /* Array declare */
    int arr_size = std::stoi(argv[1]);
    auto array = std::make_unique<int[]>(arr_size);

    /* Bubble sort */
    init_data(array.get(), arr_size);
    std::cout << "====== Bubble Sort Algorithms ========" << std::endl;
    auto time_start = std::chrono::high_resolution_clock::now();
    bubble_sort(array.get(), arr_size);
    auto time_stop = std::chrono::high_resolution_clock::now();
    auto duration = (time_stop - time_start);
    std::cout << "Total sort time: " << duration.count() << " microsecond!" << std::endl;

    /* Selection sort */
    init_data(array.get(), arr_size);
    std::cout << "====== Selection Sort Algorithms ========" << std::endl;
    time_start = std::chrono::high_resolution_clock::now();
    selection_sort(array.get(), arr_size);
    time_stop = std::chrono::high_resolution_clock::now();
    duration = (time_stop - time_start);
    std::cout << "Total sort time: " << duration.count() << " microsecond!" << std::endl;

    /* Insertion sort */
    init_data(array.get(), arr_size);
    std::cout << "====== Insertion Sort Algorithms ========" << std::endl;
    time_start = std::chrono::high_resolution_clock::now();
    insertion_sort(array.get(), arr_size);
    time_stop = std::chrono::high_resolution_clock::now();
    duration = (time_stop - time_start);
    std::cout << "Total sort time: " << duration.count() << " microsecond!" << std::endl;
    // print_array(array.get(), arr_size);
    return 0;
}