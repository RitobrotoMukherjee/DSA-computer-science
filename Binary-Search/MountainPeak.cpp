#include<bits/stdc++.h>
using namespace std;

int main () {
    int arr[5] = {1, 5, 10, 15, 2};

    int first = 0;
    int end = 4;

    int mid = first + (end - first)/2;

    while(first < end) {
        if(arr[mid] < arr[mid + 1]) {
            first = mid + 1;
        } else {
            end = mid;
        } 
        mid = first + (end - first)/2;
    }
    cout << "MaxIndex is: " << mid << endl;
}