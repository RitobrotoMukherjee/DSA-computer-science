#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Pyramid Height:" << ' ';
    cin >> n;

    /**
     *    *
     *   **
     *  ***
     */
    int row = 1;
    while (row <= n)
    {
        int spaces = n - row;
        int col = 1;
        while (spaces >= 0)
        {
            cout << ' ';
            spaces = spaces - 1;
        }
        while( col <= row){
            cout << '*';
            col = col + 1;
        }
        cout << endl;
        row  = row + 1;
    }
}