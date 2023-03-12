#include <iostream>
#include "sorting.h"
#include <cstdlib>

using namespace std;


int main() {
    sorting a;
    int b, c;
    int size = 20;
    int *arr;
    arr = new int[size];
    for (int i = 0; i < size; ++i) {
        arr[i] =rand();
    }
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    a.quickSort(arr, size, b, c);
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    delete arr;
    return 0;
}