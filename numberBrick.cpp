#include <iostream>
using namespace std;
/*
input

111
222
333

*/
int main() {
  int n;

  cout << "Enter Number Brick Sie:";
  cin >> n;

  int i = 1;

  while( i <= n ) {
    int j = 1;
    while( j <= n ) {
      cout << i;
      j++;
    }
    cout << endl;
    i = i + 1;
  }
  return 0;
}