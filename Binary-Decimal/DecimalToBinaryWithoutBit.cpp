#include<iostream>
#include<math.h>
using namespace std;

int main () {
    int n;
    cout << "Enter number to convert: ";
    cin >> n;

    int ans = 0;
    int i = 0;
    while(n != 0) {
        int bit = n % 2;
        ans = (bit * pow( 10, i )) + ans;

        i++;
        n = n/2;
    }
    cout << ans;
    return 1;

}