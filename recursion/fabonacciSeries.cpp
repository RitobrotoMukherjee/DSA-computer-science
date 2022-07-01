#include<iostream>
using namespace std;

int printFabonacci(int n) {
    // Stop condition
    if (n == 0)
        return 0;
 
    // Stop condition
    if (n == 1 || n == 2)
        return 1;

    return (printFabonacci(n - 1) + printFabonacci(n - 2));
};

int main() {
    cout << "Fabonacci Series:" << endl;
    cout << "Problem: 0 1 1 2 3 5 8 13 21" << endl << endl;

    int n = 9;

    cout << "Answer: ";
    for(int i = 0; i < n; i++){
        cout << printFabonacci(i) << ' ';
    }
    
};