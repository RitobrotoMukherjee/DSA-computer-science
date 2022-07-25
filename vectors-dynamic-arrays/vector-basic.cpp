#include<bits/stdc++.h>
using namespace std;

int printVectorSize(vector<int> v) {
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;

    return 0;
}

void printVector(vector<int> v) {
    cout << endl << "Printing Vector: ";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << ' ';
    }

    cout << endl << endl;
    return;
}

int main () {
    vector<int> v;

    printVectorSize(v);
    printVector(v);

    v.push_back(3);

    printVectorSize(v);
    printVector(v);

    v.push_back(6);
    v.push_back(9);

    printVectorSize(v);

    printVector(v);
}