#include <iostream>
using namespace std;

int main()
{
    int input;
    cout << "Enter heigth of pyramid:";
    cin >> input;

    /*
     1
     2 3
     4 5 6
    */

    int row = 1;
    int counter = 1;
    while (row <= input)
    {
        int column = 1;
        while (column <= row)
        {
            cout  << counter << ' ';
            counter = counter + 1;
            column++;
        }
        cout << endl;
        row = row + 1;
    }
}