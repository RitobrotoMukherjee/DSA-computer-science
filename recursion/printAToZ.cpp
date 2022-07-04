#include<iostream>
using namespace std;

int aToz (int a = 'A') {
    char alphabet = a;
    if(alphabet > 'Z') {
        return alphabet;
    }
    cout << alphabet << ' ';
    return aToz(alphabet + 1);
}

int main() {
    cout << "Printing A To Z Using Recursion:" << endl << endl;

    aToz();
}