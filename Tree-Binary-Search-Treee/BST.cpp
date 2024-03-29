#include <iostream>
#include <queue>
using namespace std;

class ArrayMaintain
{
public:
  void getArrayData(int arr[], int size)
  {
    for (int i = 0; i < size; i++)
    {
      cin >> arr[i];
    }
  }

  void printArray(int arr[], int size)
  {
    cout << endl
         << "Printing Array: ";
    for (int i = 0; i < size; i++)
    {
      cout << arr[i] << " ";
    }
    cout << endl;
  }
};

class Node
{
public:
  int data;
  Node *left;
  Node *right;

  Node(int d)
  {
    this->data = d;
    this->left = NULL;
    this->right = NULL;
  }
};

class BuildTree
{
  
public:
  Node *root;
  Node *insertNode(Node *node, Node *current_head)
  {
    if(this->root == NULL) {
      this->root = node;
      return this->root;
    }

    if (current_head == NULL)
    {
      return node;
    }

    if (node->data > current_head->data)
    {
      current_head->right = insertNode(node, current_head->right);
    } else {
      current_head->left = insertNode(node, current_head->left);
    }

    return current_head;
  };

  void printTreeLevelOrder()
  {
    cout << endl
         << "Printing Tree :" << endl;

    queue<Node *> q;
    q.push(this->root);
    q.push(NULL);

    while (!q.empty())
    {
      Node *temp = q.front();
      q.pop();

      if (temp == NULL)
      {
        cout << endl;
        if (!q.empty())
        {
          q.push(NULL);
        }
      }
      else
      {
        cout << temp->data << " ";
        if (temp->left)
        {
          q.push(temp->left);
        }
        if (temp->right)
        {
          q.push(temp->right);
        }
      }
    }
  };

  BuildTree(Node* root_node)
  {
    this->root = root_node;
  };
};

int main()
{
  int arr[7] = {0};
  int size = 7;

  // 7 3 1 9 5 8 17

  cout << "Insert data in the array for building tree: " << endl;

  ArrayMaintain *arrays = new ArrayMaintain();

  arrays->getArrayData(arr, size);
  arrays->printArray(arr, size);

  cout << "Building the tree: " << endl;

  Node *root = NULL;

  BuildTree *tree = new BuildTree(root);

  for (int i = 0; i < size; i++)
  {
    tree->insertNode(new Node(arr[i]), tree->root);
  }
  tree->printTreeLevelOrder();
}