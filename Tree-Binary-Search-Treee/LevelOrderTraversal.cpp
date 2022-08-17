#include<iostream>
#include<queue>
using namespace std;

class Node {
    public:
        int data;
        Node* right;
        Node* left;

    Node(int d) {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* buildTree(Node* root) {
    int data;
    cin >> data;

    if(data < 0) {
        return NULL;
    }

    root = new Node(data);

    cout << "Enter Data To The Left Of " << data << " : " << endl;
    root->left = buildTree(root->left);

    cout << "Enter Data To The Right Of: " << data << " : " << endl;
    root->right = buildTree(root->right);
    return root;
};

void printTreeLevelOrder(Node* tree) {
    cout << endl << "Printing Tree :" << endl;

    queue<Node*> q;
    q.push(tree);
    q.push(NULL);

    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();
        
        if(temp == NULL) {
            cout << endl;
            if(!q.empty()) {
                q.push(NULL);
            }
        } else {
            cout << temp->data << " ";
            if(temp->left) {
                q.push(temp->left);
            }
            if(temp->right) {
                q.push(temp->right);
            }
        }
    }

};

int main() {
    Node* root = NULL;

    cout << "Enter Data To Insert: ";
    //2 7 2 -1 -1 6 -1 -1 5 -1 9 -1 -1 
    root = buildTree(root);

    printTreeLevelOrder(root);
}