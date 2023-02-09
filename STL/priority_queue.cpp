#include<iostream>
#include<queue>
#include<string>

using namespace std;

string checkMaxQueueEmpty(priority_queue<int> q) {
    if(q.empty()) {
        return "Empty";
    }
    return "Not Empty";
}

string checkMiniQueueEmpty(priority_queue<int, vector<int>, greater<int>> q) {
    if(q.empty()) {
        return "Empty";
    }
    return "Not Empty";
}

void printMaxPriorityQueue(priority_queue<int> q) {
    cout << endl << "Print Max Priority Queue:" << endl;
    cout << "Check Priority queue empty -> " << checkMaxQueueEmpty(q) << endl;

    int size = q.size();
    for(int i = 0; i < size; i++) {
        cout << q.top() << " | ";
        q.pop();
    }
    cout << endl;
    cout << "Check Priority queue empty -> " << checkMaxQueueEmpty(q) << endl;
}

void printMiniPriorityQueue(priority_queue<int, vector<int>, greater<int>> q) {
    cout << endl << "Print Mini Priority Queue:" << endl;
    cout << "Check Priority queue empty -> " << checkMiniQueueEmpty(q) << endl;

    int size = q.size();
    for(int i = 0; i < size; i++) {
        cout << q.top() << " | ";
        q.pop();
    }
    cout << endl;
    cout << "Check Priority queue empty -> " << checkMiniQueueEmpty(q) << endl;
}

int main() {
    priority_queue<int> maxi;

    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(1);
    maxi.push(12);
    maxi.push(3);

    printMaxPriorityQueue(maxi);

    mini.push(1);
    mini.push(12);
    mini.push(3);

    printMiniPriorityQueue(mini);

}