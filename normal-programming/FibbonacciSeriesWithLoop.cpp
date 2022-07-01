#include<iostream>
using namespace std;

int  main() {
    int n;
    cout << "Print Fibbonacci series till: ";
    cin >> n;

    int a = 0;
    int b = 1;

    
    cout << a << ' ' << b << ' ';
    for( int i = 2; i <= n; i++) {
        int temp = a;
        
        a = b;
        b = temp + b;

        cout << b << ' ';

    }
}