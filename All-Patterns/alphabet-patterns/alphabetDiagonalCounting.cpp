#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Pyramid size:" << ' ';
    cin >> n;

    /**
     * A
     * B C
     * C D E
     * D E F G
     * 
    */

    int row = 1;
    while( row <= n ){
        int col = 1;
        while( col<= row ){
            char a = 'A' +  row + col - 2;
            cout << a << ' ';
            col = col+1;
        }
        cout << endl;
        row = row + 1;
    }
}