#include <stdlib.h>
#include <iostream>

using namespace std;

void bsort(int array[], int size, int& cost) {
    for (int pass = 0; pass < size-1; ++pass) { // need n-1 passes
        for (int i = 1; i < size; ++i) { // bubble sort on each pass
            if (array[i] < array[i-1]) {
                swap(array[i], array[i-1]);
            }
            ++cost;
        }
    }
}

void isort(int array[], int size, int& cost) {
    for (int i = 1; i < size; ++i) {
        int j = i-1;
        int tmp = array[i];
        while(j >=0 & array[j] > tmp) {
            array[j+1] = array[j];
            j--; 
            cost++;
        }
        array[j+1] = tmp;
    }
}

void ssort(int array[], int size, int& cost);
void msort(int array[], int size, int& cost);
//void my_qsort(int array[], int size, int (*choose_pivot)(int [], int)); // quicksort
