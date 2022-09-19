#include<iostream>
using namespace std;

void printArray(int arr[], int size) {
    cout << "Printing Array: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

void insertionSort(int arr[], int size) {
    int i = 1;
    while( i < size) {
        int temp = arr[i];
        int j = i - 1;
        while(j >= 0) {
            if(arr[j] > temp) {
                arr[j+1] = arr[j];
            } else {
                break;
            }
            j--;
        }
        arr[j+1] = temp;
        i++;
    }
};

int main () {
    int size = 6;
    int arr[size] = { 12, 15, 1, 3, 9, 6 };
    cout << "Before sorting" << endl;
    printArray(arr, size);

    insertionSort(arr, size);
    cout << endl << "After Insertion Sort" << endl;
    printArray(arr, size);
}