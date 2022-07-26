#include<bits/stdc++.h>
using namespace std;

int main () {
    vector<int> v = {1, 2, 3, 1, 2, 1, 1};
    int size = v.size();
    int majority_size = size/2;
    int max_element = INT_MIN;

    vector<int> count(size, 0);

    for(int i = 0; i < size; i++) {
        count[v[i]]++;
    }

    for(int i=0; i <size; i++) {
        if(count[i] > majority_size) {
            max_element = i;
        }
    }
    cout << "Majority Element: " << max_element;
    return 0;
}