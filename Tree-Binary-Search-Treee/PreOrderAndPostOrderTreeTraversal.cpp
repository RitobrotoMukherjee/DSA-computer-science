#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;

    Node(int d) {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *createTree (Node *current_head = NULL) {
    int data;
    cin >> data;

    current_head = new Node(data);

    if(data < 0) {
        return NULL;
    }

    cout << endl << "Enter data to the left of " << data << " : ";
    current_head->left = createTree(current_head->left);
    cout << endl << "Enter data to the right of " << data << " : ";
    current_head->right = createTree(current_head->right);
    return current_head;
}

void PreOrderTraversal(Node *current_head) {
    if(current_head == NULL) {
        return ;
    }
    cout << current_head->data << " ";
    PreOrderTraversal(current_head->left);
    PreOrderTraversal(current_head->right);
}

void PostOrderTraversal(Node *current_head) {
    if(current_head == NULL) {
        return ;
    }
    
    PostOrderTraversal(current_head->left);
    PostOrderTraversal(current_head->right);
    cout << current_head->data << " ";
}


int main () {
    cout << "Enter Data: " << endl;

    Node *root = NULL;

    cout << "Creating Tree: " << endl << endl;

    Node *tree = createTree(root);

    //2 7 2 -1 -1 6 -1 -1 5 4 -1 -1 9 -1 -1

    cout << "Printing tree with root node: " << tree->data << " In pre order: ";
    PreOrderTraversal(tree);
    cout << endl << "Printing tree with root node: " << tree->data << " In post order: ";
    PostOrderTraversal(tree);
}