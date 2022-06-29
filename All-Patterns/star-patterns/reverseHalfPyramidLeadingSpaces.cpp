#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Pyramid Size: ";
    cin >> n;

    /**
     * ****
     *  ***
     *   **
     *    *
     */
    int row = 1;
    while (row <= n)
    {
        int spaces = row - 1;
        while (spaces > 0)
        {
            cout << ' ';
            spaces = spaces - 1;
        }
        int col = n - row + 1;
        while (col > 0)
        {
            cout << '*';
            col = col - 1;
        }
        cout << endl;
        row = row +  1;
    }
}