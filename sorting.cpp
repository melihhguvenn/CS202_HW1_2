#include "sorting.h"
#include <iostream>

void sorting::bubbleSort(int *arr, const int size, int &compCount, int &moveCount) {
    
}

void sorting::hybridSort(int *arr, const int size, int &compCount, int &moveCount) {

}

void sorting::insertionSort(int *arr, const int size, int &compCount, int &moveCount) {
    for (int i = 1; i < size; ++i) {
        int nextItem = arr[i];
        int loc = i;
        while(loc > 0){
            if (arr[loc - 1] > nextItem){
                swap(arr[loc], arr[loc-1]);
                moveCount += 3;
            }
            loc--;
            compCount++;
        }
    }
}

void sorting::mergeSort(int *arr, const int size, int &compCount, int &moveCount) {

}

void sorting::quickSort(int *arr, const int size, int &compCount, int &moveCount) {

}

void sorting::swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}