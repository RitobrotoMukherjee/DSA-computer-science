#include<iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter Height:";
    cin >> n;

    /*
     1
     2 1
     3 2 1
     4 3 2 1
    */

   int row = 1;
   while( row <= n ) {
    int col = 1;
    int val = row;
    while( col <= row ) {
        cout << val << ' ';
        val = val -  1;
        col = col + 1;
    }
    cout << endl;
    row = row + 1;
   }
}