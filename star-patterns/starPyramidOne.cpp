#include<iostream>
using namespace std;

int main() {
    int input;
    cout << "Give number of rows: ";
    cin >> input;

    /*
        *
        **
        ***
        ****
    */
   int row = 1;
   while( row <= input ){ 
    int column = 1;
    while( column <= row ) {
        cout << "*";
        column++;
    }
    cout << endl;
    row++;
   }
   return 0;
}