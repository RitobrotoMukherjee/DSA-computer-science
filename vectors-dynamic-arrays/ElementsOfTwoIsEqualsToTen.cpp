#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2, 4, 3, 1, 7, 11};
    int start = 0;
    int end = v.size() - 1;
    sort(v.begin(), v.end());
    while (end > start)
    {
        int sum = v[start] + v[end];
        if (sum == 10)
        {
            cout << v[start] << " + " << v[end] << " = " << sum;
            cout << endl;
            break;
        }
        if (sum > 10)
        {
            end--;
        }
        if (sum < 10)
        {
            start++;
        }
    }
}