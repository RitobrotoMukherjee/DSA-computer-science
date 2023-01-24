#include<iostream>
using namespace std;

void printArray(int arr[], int n) {
    cout << "Printing Array: ";

    for(int i = 0; i < n; i++) {
        cout << arr[i] << ", ";
    }
    cout << endl << endl;
}

void bubbleSort(int arr[], int n) {
    cout << "Starting Bubble Sort" << endl;

    cout << "End Bubble Sort" << endl << endl;
}

int main() {
    int size = 6;

    int arr[size] = { 7, 4, 12, 6, 5, 21 };

    printArray(arr, size);
    bubbleSort(arr, size);
    printArray(arr, size);

}