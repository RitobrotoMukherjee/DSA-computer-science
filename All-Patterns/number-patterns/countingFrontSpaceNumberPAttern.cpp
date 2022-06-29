#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Pyramid height: ";
    cin >> n;

    /**
     *    1
     *   23
     *  456
     * 78910
     */
    int row = 1;
    int counter = 1;
    while( row <= n ) {
        int spaces = n - row;
        while( spaces > 0){
            cout << ' ';
            spaces = spaces - 1;
        }
        int col = 1;
        while(col <= row){
            cout << counter;
            counter = counter + 1;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}