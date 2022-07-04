#include <iostream>
using namespace std;

int sumOfNBySubstracting(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n + sumOfNBySubstracting(n - 1);
};

int sumOfNByAdding(int n, int times = 1)
{
    /**
     * > take variable to start from 1;
     * > most case time == n return times;
     * > return times + sumOfNByAdding(n, times + 1);
     */
    if( times == n) {
        return times;
    }
    return times + sumOfNByAdding(n, times + 1);
}

int main()
{
    int n;
    cout << "Enter the number you want to sum till: ";
    cin >> n;

    cout << sumOfNBySubstracting(n);
    cout << endl
         << endl;
    cout << sumOfNByAdding(n);
}