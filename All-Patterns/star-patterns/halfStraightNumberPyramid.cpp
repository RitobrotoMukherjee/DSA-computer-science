#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number Pyramid Height: ";
    cin >> n;

    /**
     *     1
     *    22
     *   333
     *  4444
     */

    int row = 1;
    while( row <= n ){
        int spaces = n - row;
        while(spaces > 0){
            cout << ' ';
            spaces = spaces - 1;
        }
        int col = 1;
        while(col <= row){
            cout << row;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}