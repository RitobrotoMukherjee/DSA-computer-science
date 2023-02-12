#include<iostream>
#include<array>
#include<map>
#include<unordered_map>

using namespace std;

void printOrderedMap(map<int, string> myMap) {
    cout << endl;

    for(map<int, string>::iterator it = myMap.begin(); it != myMap.end(); ++it) {
        cout << "Key: " << it->first + 1 << ", Value:  " << it->second << ' ';
        cout << endl;
    }
    cout << endl;
}

map<int, string> createMapFromArray(array<string, 6> arr) {
    cout << endl << "Normal map are always sorted thus implemented using Red Black BST:" << endl;
    cout << endl << "Operations Time Complexitiy of normal maps are: O(logn)" <<  endl;

    map<int, string> mp;
    
    for(int i = 0; i < arr.size(); i++) {
        mp.insert(pair<int, string>(i, arr[i]));
    }

    return mp;
}

void printUnorderedMap(unordered_map<int, string> umap) {
    cout <<  endl;

    unordered_map<int, string>::iterator it = umap.begin();

    while(it != umap.end()) {
        cout << "Key: " << it->first + 1 << " Value: " << it->second << endl;
        ++it;
    }
    cout << endl;
}

unordered_map<int, string> createUnorderedMapFromArray(array<string, 6> arr) {
    cout << endl << "Unordered map keys are not sorted because it's implemented using Hash Table:" << endl;
    cout << endl << "Operations Time Complexitiy of unordered maps are: O(1) " << endl;

    unordered_map<int, string> mp;
    
    for(int i = 0; i < arr.size(); i++) {
        mp[i]  = arr[i];
    }
    // for(auto i:mp) { 
    //     cout << i.first << " : " << i.second;
    // }
    return mp;
}

int main() {

    array<string, 6> list = { "Rito", "Mukherjee", "Babui", "Joy", "Queen", "Roy" };

    map<int, string> mp = createMapFromArray(list);

    printOrderedMap(mp);

    unordered_map<int, string> ump = createUnorderedMapFromArray(list);

    printUnorderedMap(ump);
    
}