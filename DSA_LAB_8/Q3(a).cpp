#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int d) : data(d), left(NULL), right(NULL) {}
};

Node *insert(Node *r, int v)
{
    if (!r)
        return new Node(v);
    if (v < r->data)
        r->left = insert(r->left, v);
    else if (v > r->data)
        r->right = insert(r->right, v);
    return r;
}

int main()
{
    Node *root = NULL;
    root = insert(root, 20);
    root = insert(root, 10);
    root = insert(root, 30);
}
