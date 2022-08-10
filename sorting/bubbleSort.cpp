#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size) {
    cout << "Printing Array: " << endl;
    for(int i = 0; i < size; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

int main () {
    int arr[6] = {1, 9, 53, 10, 3, 2};
    int n = 6;

    /**
     * Bubble sort 
     * Sorting adjacent elements based on rounds
     * Sort the largest element to the correct place
    */

   cout << "Array before bubble sort: " << endl;
   printArray(arr, n);

    for(int i = 1; i < n; i++ ) {
        // rounds are represented by i
        for(int j = 0; j < n - i; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    cout << endl << "Array after bubble sort: " << endl;
    printArray(arr, n);
}