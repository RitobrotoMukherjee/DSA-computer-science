#include<iostream>
using namespace std;

int factorial(int n) {
    if(n == 0)
        return 1;
    
    int smallProblem = factorial(n - 1);
    int biggerProblem = n * smallProblem;

    return biggerProblem;
}

int main () {
    int n;
    
    cout << "Enter the number you want to find the factorial of: ";
    cin >> n;

    cout << "The factorial of " << n << " is: " << factorial(n);

    return 0;
}