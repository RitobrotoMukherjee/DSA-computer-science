#include<iostream>
using namespace std;

int main() {
    /*
    input: 3

    321
    321
    321
    */
   int input;
   int i = 0;
   
   cout << "Enter the brick size: ";
   cin >> input;

    cout << "With For loop: " << endl;
   for(int i = 0; i < input; i++) {
    for(int j = input; j > 0; j--){
        cout << j;
    }
    cout << endl;
   }

   cout << "With While loop: " << endl;
   
   while( i < input ) {
    int j = input;
    while( j > 0 ) {
        cout << j;
        j = j - 1;
    }
    cout << endl;
    i = i + 1;
   }
   return 0;
}