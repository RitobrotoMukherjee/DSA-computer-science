#include<iostream>
using namespace std;

void printArr(int arr[], int size) {
    cout << "{ ";
    for(int i=0; i<size; i++) {
        cout << arr[i] << ", ";
    }
    cout << " }" << endl;
}

int sum(int arr[], int size) {
    int sum = 0;
    for(int i=0; i<size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main () {
    int arr[5] = { 1, 5, 7, 15, -2 };
    
    printArr(arr, 5);

    cout << "The sum of above arr: " << sum(arr, 5);
}