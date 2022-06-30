#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Pyramid height in number:";
    cin >> n;

    /**
     *
     *    1
     *   121
     *  12321
     * 1234321
     */

    int row = 1;
    while(row <= n){
        int spaces = n - row;
        while(spaces > 0){
            cout << ' ';
            spaces = spaces - 1;
        }

        int col1 = 1;
        while(col1 <= row){
            cout << col1;
            col1 = col1 + 1;
        }

        int col2 = row - 1;
        while(col2 > 0){
            cout << col2;
            col2 = col2 - 1;
        }
        cout << endl;
        row = row + 1;
    }
}