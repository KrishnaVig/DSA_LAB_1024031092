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

int minElement(Node *r)
{
    while (r->left)
        r = r->left;
    return r->data;
}

int main()
{
    Node *root = NULL;
    int a[] = {20, 10, 30, 5, 15};
    for (int x : a)
        root = insert(root, x);
    cout << minElement(root);
}
