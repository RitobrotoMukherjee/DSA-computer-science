#include<iostream>
using namespace std;


class Node {
  public:
    int data;
    Node* left;
    Node* right;

  Node(int d) {
    this->data = d;
    Node* left = NULL;
    Node* right = NULL;
  }
};

Node* buildTree(Node* root) {
  int d;
  cin >> d;

  if(d < 0) {
    return NULL;
  }

  root = new Node(d);

  cout << endl << "Enter data to the left of: " << d << ": ";
  root->left = buildTree(root->left);
  cout << endl << "Enter data to the right of: " << d << ": ";
  root->right = buildTree(root->right);
  return root;
};

void inorderTraversalPrint(Node* root) {
  if(root == NULL) {
    return ;
  }

  inorderTraversalPrint(root->left);
  cout << root->data << " ";
  inorderTraversalPrint(root->right);
};

int main () {
  cout << "*Inorder Traversal Of Tree*" << endl << endl;
  cout << "Enter Data: " << endl;

  Node* root = NULL;
  //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
  root = buildTree(root);

  cout << endl << " Print In Order Traversal : ";
  inorderTraversalPrint(root);

  return 0;
}