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

   cout << endl << "Normal While Loop With variable" << endl;
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

   cout << endl << "While Loop WithOut Extra variable" << endl;
   int row2 = 1;
    while ( row2 <= n ){
        int col2 = 1;
        while( col2 <= row2 ) {
            cout << row2 - col2 + 1 << ' ';
            col2 = col2 + 1;
        }
        cout << endl;
        row2 = row2 + 1;
    }
}