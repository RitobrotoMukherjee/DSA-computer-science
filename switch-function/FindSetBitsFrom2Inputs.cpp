#include<iostream>
using namespace std;

int counSettBits(int x = 0) {
    int count = 0;
    while( x != 0 ){
        if(x&1) {
            count = count + 1;
        }
        x = x >> 1;
    }
    return count;
}

int totalBits(int a, int b) {
    int countA = counSettBits(a);
    int countB = counSettBits(b);

    return countA + countB;
}

int main() {
    int a, b;

    cout << "A: ";
    cin >> a;
    cout << "B: ";
    cin >> b;

    cout << "Total Set bits in " << a << " and " << b << " : " << totalBits(a, b) << endl;

    return 0;

}