#include<bits/stdc++.h>
using namespace std;

void reachDestination(int src, int dest) {
    // Base case when reches destination
    if(src == dest) {
        cout << "Reached Destination";
        return;
    }

    cout << "Step: " << src << " My Destination: " << dest << endl;

    return reachDestination(src + 1, dest);
}

int main () {
    int src, dest;

    cout << "Enter The Source Point In Integer: ";
    cin >> src;

    cout << "Enter The Destination Point In Integer: ";
    cin >> dest;

    reachDestination(src, dest);
}

