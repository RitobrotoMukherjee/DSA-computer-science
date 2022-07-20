#include<iostream>
using namespace std;

int printArray(int arr[], int size) {
    for(int i=0; i<size; i++) {
        cout << arr[i] << ' ';
    }
    return 0;
}

void reverseArr (int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while(start <= end) {
        // swap(arr[start], arr[end]);

        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        start++;
        end--;
    }

    cout << "Reversed Arr:" << endl << printArray(arr, size);
}

int main () {
    int size;
    cout << "Enter Array Size: ";
    cin >> size;

    int arr[50];

    for(int i=0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Main Arr: " << endl << printArray(arr, size) << endl;

    reverseArr(arr, size);

    return 0;
}