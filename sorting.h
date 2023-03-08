//
// Created by emrem on 8.03.2023.
//

#ifndef CS202_HW1_SORTING_H
#define CS202_HW1_SORTING_H

class sorting{
public:
    void insertionSort(int* arr, const int size, int &compCount, int &moveCount);
    void bubbleSort(int* arr, const int size, int &compCount, int &moveCount);
    void mergeSort(int* arr, const int size, int &compCount, int &moveCount);
    void quickSort(int* arr, const int size, int &compCount, int &moveCount);
    void hybridSort(int* arr, const int size, int &compCount, int &moveCount);
private:
    void swap(int &a, int&b);
};

#endif //CS202_HW1_SORTING_H
