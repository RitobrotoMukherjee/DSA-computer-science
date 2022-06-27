#include<iostream>
using namespace std;

int main() {
    int input;
    cout << "Enter Row:";
    cin >> input;

    int row = 1;
    while (row <= input) {
        int col = 1;
        while(col <= input) {
            char a = 'A' + col - 1;
            cout << a  << ' ';
            col++;
        }
        cout << endl;
        row++;
    }
}