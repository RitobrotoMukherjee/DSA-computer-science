#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter rows:" << ' ';
    cin >> n;

    int row = 1;
    int count = 1;

    cout << "Get pyramid with formula" << endl;
    while(row <= n) {
        int col = 1;
        while(col <= n) {
            char a = 'A' + count - 1;
            cout << a << ' ';
            col = col + 1;
            count = count + 1;
        }
        cout << endl;
        row++;
    }

    cout << endl << "Get pyramid without formula:" << endl;
    int alphabet = 64;
    int row2 = 1;
    while(row2 <= n) {
        int col2 = 1;
        while(col2 <= n) {
            char a = alphabet + 1;
            cout << a << ' ';
            col2 = col2 + 1;
            alphabet++;
        }
        cout << endl;
        row2++;
    }
}