#include<iostream>
using namespace std;

/*
* Problem - 
    1
    2 3
    3 4 5
    4 5 6 7

    Time Complexity- O(n)
    Space Complexity- O(1)
*/

int main () {
    int n;
    cout << "Enter Heigth:";
    cin >> n;

    cout << endl << "Normal While Loop With variable" << endl;
    int row = 1;
    while ( row <= n ){ 
        int count = row;
        int col = 1;
        while( col <= row ) {
            cout << count << ' ';
            count++;
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
            cout << row2 + col2 - 1 << ' ';
            col2 = col2 + 1;
        }
        cout << endl;
        row2 = row2 + 1;
    }
}


