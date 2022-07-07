#include<iostream>
using namespace std;

int binarySearch(int arr[], int key, int end, int start = 0) {
    if(start > end){
        return -1;
    }

    int mid = ( start + end ) / 2;

    if(key == arr[mid]) {
        return mid;
    }

    if(key < arr[mid]) {
        return binarySearch(arr, key, (mid - 1), start);
    }
    
    return binarySearch(arr, key, end, (mid + 1));
}

int main () {

    int searchKey;
    cout << "Enter key to search in even array: ";
    cin >> searchKey;

    int even[6]  =  {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 8, 11, 14, 16};

    int evenIndex = binarySearch(even, searchKey, 5);
    int oddIndex = binarySearch(odd, searchKey, 4);

    cout << "The index of " << searchKey << " in Even Array Index : " << evenIndex << endl;
    cout << "The index of " << searchKey << " in odd Array Index : " << oddIndex;

    return 0;
}