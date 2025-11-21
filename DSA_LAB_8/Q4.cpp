#include <iostream>
#include <climits>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int d) : data(d), left(NULL), right(NULL) {}
};

bool isBSTUtil(Node *r, long mn, long mx)
{
    if (!r)
        return true;
    if (r->data <= mn || r->data >= mx)
        return false;
    return isBSTUtil(r->left, mn, r->data) && isBSTUtil(r->right, r->data, mx);
}

bool isBST(Node *r) { return isBSTUtil(r, LONG_MIN, LONG_MAX); }

int main()
{
    Node *root = new Node(20);
    root->left = new Node(10);
    root->right = new Node(30);
    cout << isBST(root);
}
