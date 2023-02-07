#include<bits\stdc++.h>
#include<deque>

using namespace std;

void printDeque(deque<int> dq) {
    for(int i:dq) {
        cout << i << " | ";
    }
    cout << endl;
}

int main() {

    deque<int> d;

    d.push_back(2);
    d.push_front(1);
    d.push_back(3);

    printDeque(d);

    d.pop_front();
    d.push_back(6);
    printDeque(d);

}
