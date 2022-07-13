#include<iostream>
using namespace std;

int findNthTermOfFibonacci(int n) {
    int a = 0;
    int b = 1;

    for(int i = 2; i < n; i++) {
        int temp = b;

        b = a + b;
        a = temp;
    }
    return b;
}

int main () {
    int n;

    cout << "Enter term of Fibonacci series: ";
    cin  >> n;

    cout << "The number at " << n << "th place is: " << findNthTermOfFibonacci(n) << endl;
    return 0;

}