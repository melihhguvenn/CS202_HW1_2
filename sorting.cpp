#include "sorting.h"
#include <iostream>

void sorting::bubbleSort(int *arr, const int size, int &compCount, int &moveCount) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - 1 - i; ++j) {
            if (arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
                moveCount += 3;
            }
            compCount += 1;
        }
    }
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
    int end = size - 1;
    int start = 0;

    mergeSort(arr, start, end, compCount, moveCount);
}

void sorting::mergeSort(int *arr, int start, int end, int &compCount, int &moveCount) {
    if (start != end){
        int middle = (start + end) / 2;
        mergeSort(arr, start, middle, compCount, moveCount);
        mergeSort(arr, middle + 1, end, compCount, moveCount);
        merge(arr, start, middle, end, compCount, moveCount);
    }
}

void sorting::merge(int *arr, int start, int mid, int end, int &compCount, int &moveCount) {
    int start1 = start;
    int end1 = mid;
    int start2 = mid + 1;
    int end2 = end;

    int index = 0;
    int size = end - start + 1;

    int tempArray[size];

    while (start1 <= end1 && start2 <= end2){
        if (arr[start1] < arr[start2]){
            tempArray[index] = arr[start1];
            start1++;
        }
        else{
            tempArray[index] = arr[start2];
            start2++;
        }
        moveCount++;
        compCount++;
        index++;
    }

    while(start1 <= end1){
        tempArray[index] = arr[start1];
        index++;
        start1++;
        moveCount++;
        compCount++;
    }

    while(start2 <= end2){
        tempArray[index] = arr[start2];
        start2++;
        index++;
        moveCount++;
        compCount++;
    }

    for (int i = 0; i < index; ++i) {
        arr[start + i] = tempArray[i];
        moveCount++;
        compCount++;
    }
}

void sorting::quickSort(int *arr, const int size, int &compCount, int &moveCount) {
    int end = size - 1;
    int start = 0;
    compCount = 0;
    moveCount = 0;

    quickSort(arr, start, end, compCount, moveCount);
}

void sorting::quickSort(int *arr, int start, int end, int &compCount, int &moveCount) {
    int pivotIndex;
    if (start < end){
        partition(arr, start, end, pivotIndex, compCount, moveCount);
        quickSort(arr, start, pivotIndex - 1, compCount, moveCount);
        quickSort(arr, pivotIndex + 1, end, compCount, moveCount);
    }
}

void sorting::partition(int *arr, int start, int end, int &pivotIndex, int &compCount, int &moveCount) {
    int pivot = arr[start];
    int endS1 = start;
    int startUnk = start + 1;

    while (startUnk <= end){
        if (arr[startUnk] < pivot){
            endS1++;
            swap(arr[startUnk], arr[endS1]);
            moveCount += 3;
        }
        compCount++;
        startUnk++;
    }

    swap(arr[start], arr[endS1]);
    moveCount += 3;

    pivotIndex = endS1;
}

void sorting::swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}