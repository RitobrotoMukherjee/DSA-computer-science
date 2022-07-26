#include<bits/stdc++.h>
using namespace std;

int main () {
    int arr[7] = {1, 2, 3, 1, 2, 1, 1};
    int count[10] = {0};

    int majority_max = 7/2;
    int size = sizeof(arr)/sizeof(int);
    int max_val = INT_MIN;

    for( int i=0; i < size; i++) {
        count[arr[i]]++;
    }

    for (int i = 0; i < size; i++) {
        if(count[i] > majority_max) {
            max_val = i;
        }
    }

    cout << "Majority: " << max_val;
}
