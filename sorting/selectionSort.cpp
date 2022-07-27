#include<bits/stdc++.h>
using namespace std;

void printArr(int arr[], int size) {
    int i = 0;
    while( i < size ) {
        cout << arr[i] << ' ';
        i++;
    }
    cout << endl;
}

int main () {
    /*
    * given arr = { 12, 45, 23, 51, 19, 8 }
    * -> find smallest in n+1 till n
    * -> swap with first index
    * -> got to next index
    * -> find smallest from next index till end
    * -> repeat
    */

   int arr[6] = { 12, 45, 3, 51, 19, 18 };

   int firstIndex = 0;

   cout << "Before selection sort" << endl;
   printArr(arr, 6);

   while( firstIndex < 5 ) {
    for(int i = firstIndex + 1; i < 6; i++ ) {
        if(arr[i] < arr[firstIndex]) {
            swap(arr[firstIndex], arr[i]);
        }
    }
    firstIndex++;
   }
   cout << "After selection sort" << endl;
    printArr(arr, 6);
}