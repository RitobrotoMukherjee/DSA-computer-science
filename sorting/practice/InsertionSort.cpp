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

int main() {
    int size = 6;

    int arr[size] = { 6, 5, 7, 3, 12, 2 };

    printArray(arr, size);
}