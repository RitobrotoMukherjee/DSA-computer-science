#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2, 4, 3, 1, 7, 11, 9};
    int start = 0;
    int size = v.size();

    while (start < size)
    {
        int next = start + 1;
        while (next < size)
        {
            int sum = v[start] + v[next];
            if (sum == 10)
            {
                cout << v[start] << " + " << v[next] << " = " << sum;
                cout << endl;
            }
            next++;
        }
        start++;
    }
}