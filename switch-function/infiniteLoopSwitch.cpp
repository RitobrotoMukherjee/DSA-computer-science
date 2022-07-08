#include<stdlib.h>
#include<iostream>
using namespace std;

int main () {
    char r = 'r';
    while (true) {
        switch(r) {
            case 'Q':
                cout << "It's Q" << endl;
                break;
            case 'r' :
                cout << "It's r" << endl;
                break;
            case 'R':
                cout << "It's R" << endl;
                break;
            
            default: cout << "It's default" << endl;
        }
        exit(1);
    }
}