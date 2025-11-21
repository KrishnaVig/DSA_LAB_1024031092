#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int d) : data(d), left(NULL), right(NULL) {}
};

int maxDepth(Node *r)
{
    if (!r)
        return 0;
    return 1 + max(maxDepth(r->left), maxDepth(r->right));
}

int main()
{
    Node *root = new Node(20);
    root->left = new Node(10);
    root->right = new Node(30);
    cout << maxDepth(root);
}
