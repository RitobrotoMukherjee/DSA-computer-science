#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter height of pyramid:" << ' ';
    cin >> n;

    /**
     * D
     * C D
     * B C D
     * A B C D
    */

    int row = 1;
    int count = n;
    while ( row <= n ) {
        int col = 1;
        while(col <= row){
            char a = 'A' + count + col - 2;
            cout << a << ' ';
            col = col + 1;
        }
        count = count - 1;
        cout << endl;
        row  = row + 1;
    }
}