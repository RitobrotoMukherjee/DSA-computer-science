#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n) {
    cout << endl << "Printing Array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i];

        if(i != n - 1) {
            cout << ",";
        }
    }
    cout << endl;
}

void insertionSort(int arr[], int n) {
    cout << endl << "Starting Insertion Sort" << endl;

    for(int round = 1; round < n; round++ ) {
        for(int j = round; j > 0; j--) {
            if(arr[j] < arr[j - 1]) {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }

    cout << "Array Sorted using Insertion Sort" << endl;
}

int main() {
    int size = 7;

    int arr[size] = { 10, 1, 7, 4, 8, 2, 11 };

    printArray(arr, size);
    insertionSort(arr, size);
    printArray(arr, size);
}