#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
        int data;
        node* left;
        node* right;

    node(int d) {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* createTree(node* root) {
    int data;
    cin >> data;

    root = new node(data);

    if(data < 0) {
        return NULL;
    }

    cout << "Enter Data To Insert In Left Of " << data << " : " << endl;
    root->left = createTree(root->left);
    cout << "Enter Data To Insert In Right Of " << data << " : " << endl;
    root->right = createTree(root->right);
    return root;
};

int main () {
    node* root = NULL;
    cout << "Enter data to insert in node: ";
    root = createTree(root);
}
