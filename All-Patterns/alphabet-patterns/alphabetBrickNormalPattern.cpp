#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Height Of The Pattern:" << ' ';
    cin >> n;

    /**
     * A A A
     * B B B
     * C C C
     *
     * Using ASCII
     * A = 065
     * a = 097
     */
    int row = 1;
    char ch = 'A';
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            cout << ch << ' ';
            col = col + 1;
        }
        ch = ch + 1;
        cout << endl;
        row++;
    }

    cout << endl
         << "While Loop WithOut Extra variable" << endl;
    int row2 = 1;
    while (row2 <= n)
    {
        int col2 = 1;
        while (col2 <= n)
        {
            char ch = 'A' + row2 - 1; // type casting
            cout << ch << ' ';
            col2 = col2 + 1;
        }
        cout << endl;
        row2 = row2 + 1;
    }
}