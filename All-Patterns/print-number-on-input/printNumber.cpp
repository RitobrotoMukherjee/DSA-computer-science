#include <iostream>
using namespace std;
int main()
{
    int input;
    cout << "Enter Input: ";
    cin >> input;

    /*
    n = 3
    123
    456
    789
    */
   int i = 0;
   int count = 1;
   while( i < input ) {
    int j = 0;
    while( j < input ) {
        cout << count << ' ';
        count++;
        j++;
    }
    cout << endl;
    i++;
   }
}