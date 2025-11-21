#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int d) : data(d), left(NULL), right(NULL) {}
};

Node *findMin(Node *r)
{
    while (r->left)
        r = r->left;
    return r;
}
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

Node *deleteNode(Node *r, int k)
{
    if (!r)
        return r;
    if (k < r->data)
        r->left = deleteNode(r->left, k);
    else if (k > r->data)
        r->right = deleteNode(r->right, k);
    else
    {
        if (!r->left)
        {
            Node *t = r->right;
            delete r;
            return t;
        }
        else if (!r->right)
        {
            Node *t = r->left;
            delete r;
            return t;
        }
        Node *t = findMin(r->right);
        r->data = t->data;
        r->right = deleteNode(r->right, t->data);
    }
    return r;
}

int main()
{
    Node *root = NULL;
    root = insert(root, 20);
    root = insert(root, 10);
    deleteNode(root, 10);
}
