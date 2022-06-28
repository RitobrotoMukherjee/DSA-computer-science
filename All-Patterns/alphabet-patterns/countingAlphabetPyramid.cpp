#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Pyramid Size:" << ' ';
    cin >> n;

    /**
     * A
     * B C
     * D E F
     */

    int row = 0;
    char start = 'A';
    while(row < n) {
        int col = 0;
        while(col <= row){
            char a = start;
            cout << a << ' ';
            col = col + 1;
            start = start + 1;
        }
        cout << endl;
        row = row + 1;
    }
}