#include<iostream>
#include<string.h>
using namespace std;

string digitToString(int digit) {
    string arr[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

    return arr[digit];
}

void sayDigit(int number) {
    if(number == 0) {
        return;
    }

    int digit = number % 10;
    number = number/10;

    sayDigit(number);
    
    cout << digitToString(digit) << " ";
}

int main () {
    int number;

    cout << "Enter number to say it's digits : ";
    cin >> number;

    sayDigit(number);
}