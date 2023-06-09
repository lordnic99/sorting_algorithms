#include "bubble_sort.h"
#include <any>
#include <iostream>

void bubble_sort(int *array, int lens) {
    for(int i = 0; i < lens; ++i) {
        for(int j = 0; j < lens - i - 1; ++j) {
            if(array[j] >= array[j+1]) {
                std::swap(array[j], array[j+1]);
            }
        }
    }
}