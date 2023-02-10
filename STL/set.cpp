#include<bits/stdc++.h>
using namespace std;

set<int> insertBulkIntoSet(vector<int> a) {
    set<int> s({0});
    if(a.empty()) {
        return s;
    }
    s.erase(0);
    for(auto i:a) {
        s.insert(i);
    }
    return s;
}

set<int> eraseRange(set<int> s, int find, int till) {
    set<int>::iterator start = s.find(find);
    set<int>::iterator end = s.find(till);

    s.erase(start, end);

    return s;
}

void printSet(set<int> s) {
    for(int i:s) {
        cout << i << " | ";
    }
    cout << endl;
}

int main() {
    set<int> s;

    cout << endl << "Sets are implemented using BST. Thus Ologn time complexity" << endl << endl;

    cout << "After bulk insert :" << endl;
    s = insertBulkIntoSet({1,1,3,3,3,5});
    printSet(s);

    cout << endl << "After Range Delete:" << endl;
    s = insertBulkIntoSet({ 10, 20, 30, 40, 50, 60, 60, 120, 130, 150, 150 });
    s = eraseRange(s, 60, 130);
    printSet(s);
    
    cout << endl;
}