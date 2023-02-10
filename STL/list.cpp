#include <bits\stdc++.h>
#include <list>

using namespace std;

void printList(list<int> l)
{
    if (!l.empty())
    {
        for (int i:l)
        {
            cout << i << " | ";
        }
        cout << endl;
        return;
    }
    cout << "List is not empty" << endl;
    return;
}

int main()
{
    cout << "Lists are basically doubly Linked Lists:" << endl
         << endl;
         
    list<int> lst;

    lst.push_back(1);
    lst.push_back(2);
    cout << "before push front list - lst: " << endl;
    printList(lst);
    lst.push_front(3);
    cout << "after push front list - lst: " << endl;
    printList(lst);

    list<int> cpy(lst);
    
    cout << "after copy cpy list: " << endl;
    printList(cpy);
}