#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Pyramid Height:";
    cin >> n;

    /**
     * ****
     * ***
     * **
     * *
    */
   int row = 1;
   int stars = n;
   while(row <= n){
    int col = 1;
    while(col <= stars) {
        cout << '*';
        col = col + 1;
    }

    cout << endl;
    stars = stars - 1;
    row = row + 1;

   }
}