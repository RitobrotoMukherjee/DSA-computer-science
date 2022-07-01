#include<iostream>
using namespace std;

int main () {
    int n;
    cout << "Prime Or Non Prime Number" << endl;
    cout << "Enter number to check: ";
    cin >> n;

    for(int i = 2; i < n; i++) {
        if(n % i == 0) {
            cout << n << " is a Non Prime Number.";
            return 0; 
        }
    }
    cout << n << " is a Prime Number";
}