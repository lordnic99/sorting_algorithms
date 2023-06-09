#include "selection_sort.h"

void selection_sort(int *array, int lens) {
    int smallest{};
    for(int i = 0; i < lens; ++i) {
        for(int j = i; j < lens; ++j) {
            if(array[i] <= array[j]) {
                smallest = array[i];
            }
        }
        array[i] = smallest;
    }
}