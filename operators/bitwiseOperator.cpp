#include<iostream>
using namespace std;

/**
 * AND => &
 * OR => |
 * NOT => ~
 * XOR => ^
*/
int main() {
    int x = 2;
    int y = 3;

    cout << "x & y: " << (x&y) << endl;
    cout << "x | y: " << (x|y) << endl;
    cout << "~x: "<< ~x << endl;
    cout << "x ^ y: "<< (x^y) << endl;
}