#include<iostream>
using namespace std;

void printNumberDescending(int range) {
    if(range == 0) {
        cout << "Number Printed In Desending Order " << endl;
        return;
    }

    cout << "Number: " << range << endl;
    return printNumberDescending(range - 1);
}

void printNumberAscending(int range) {
    if(range == 0) {
        cout << "Number Printing In Ascending Order From " << endl;
        return;
    }

    printNumberAscending(range - 1);
    cout << "Number: " << range << endl;
}

int main() {
    int range;

    cout << "Enter Till The Range You Want To Print Starting From 1: ";

    cin >> range;

    printNumberDescending(range);
    cout << endl;
    printNumberAscending(range);
}