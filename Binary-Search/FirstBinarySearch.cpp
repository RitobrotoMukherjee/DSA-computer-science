#include<iostream>
using namespace std;

int binarySearch (int arr[], int size, int key) {

    int s = 0;
    int e = size;

    int mid = (s + e) / 2;

    while( s <= e ) {
        if(arr[mid] == key) {
            return mid;
        }

        if( key < arr[mid] ) {
            e = mid - 1;
        }

        if( key > arr[mid] ) {
            s = mid + 1;
        }

        mid = (s + e) / 2;
    }
    return -1;
}

int main () {

    int searchKey;
    cout << "Enter key to search in even array: ";
    cin >> searchKey;

    int even[6]  =  {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 8, 11, 14, 16};

    int evenIndex = binarySearch(even, 6, searchKey);
    int oddIndex = binarySearch(odd, 5, searchKey);

    cout << "The index of " << searchKey << " in Even Array: " << evenIndex << endl;
    cout << "The index of " << searchKey << " in odd Array: " << oddIndex;

    return 0;
}