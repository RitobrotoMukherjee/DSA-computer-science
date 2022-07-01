#include<iostream>
using namespace std;

int sumOfN(int n){
    if(n <= 1) {
        return 1;
    }
    return n + sumOfN(n - 1);
};

int main() {
    int n;
    cout << "Enter the number you want to sum till: ";
    cin >> n;

    cout << sumOfN(n);
}