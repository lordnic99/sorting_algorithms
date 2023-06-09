#include "insertion_sort.h"

void insertion_sort(int *array, int lens) {
    int key{};
    int i, j;
    for(i = 1; i < lens; ++i) {
        key = array[i];
        j = i - 1;
        while (j >= 0 && key <= array[j]) {
            array[j+1] = array[j];
            j = j -1;
        }
        array[j+1] = key;
    }
}