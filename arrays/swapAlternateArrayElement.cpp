#include<iostream>
using namespace std;

void printArr(int arr[], int size) {
    cout << "{ ";
    for(int i=0; i<size; i++) {
        cout << arr[i] << ", ";
    }
    cout << " }" << endl;
}

void swapArr(int arr[], int size) {
    int start = 0;

    while(start + 1 < size) {
        swap(arr[start], arr[start + 1]);
        start = start + 2;
    }
}

int main () {
    int arr1[6] = { 1, 2, 3, 4, 5, 6 };
    int arr2[5] = { 1, 2, 7, 8, 5 };

    cout << "Even arr: ";
    printArr(arr1, 6);

    swapArr(arr1, 6);

    cout << "Even arr swapped: ";
    printArr(arr1, 6);

    cout << "Odd arr: ";
    printArr(arr2, 5);

    swapArr(arr2, 5);

    cout << "Odd arr swapped: ";
    printArr(arr2, 5);
}