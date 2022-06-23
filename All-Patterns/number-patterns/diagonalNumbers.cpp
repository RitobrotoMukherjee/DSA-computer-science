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
}


