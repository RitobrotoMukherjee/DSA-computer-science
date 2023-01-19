#include<iostream>
using namespace std;

/* Print array function */

void printArray(int arr[], int size) {
    cout << "Printing Array: ";
    for(int i = 0;  i<size; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
}
/*
* on each rounds put smallest element at the right place
*/
void selectionSort(int arr[], int size) {
    cout << "Selection Sort Started" << endl;

    for(int i = 0; i < size - 1; i++) {
        int minIdx = i;
        for(int j = i+1; j < size; j++) {
            if(arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]);
    }

    cout << "Selection Sort Done" << endl; 
}

int main () {
    int size = 6;
    int arr[6] = { 9, 5, 4, 3, 2, 0 };

    printArray(arr, size);
    selectionSort(arr, size);

    printArray(arr, size);

}