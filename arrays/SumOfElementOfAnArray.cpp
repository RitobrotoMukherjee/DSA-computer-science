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
    int size;
    cout << "Enter Size Of Array: ";
    cin >> size;

    int arr[102];
    cout << "Enter elements: " << endl;
    for(int i=0; i < size; i++) {
        cin >> arr[i];
        cout << endl;
    }
    
    printArr(arr, 5);

    cout << "The sum of above arr: " << sum(arr, 5);
}