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

Node *inorderSuccessor(Node *r, int k)
{
    Node *succ = NULL;
    while (r)
    {
        if (k < r->data)
        {
            succ = r;
            r = r->left;
        }
        else
            r = r->right;
    }
    return succ;
}

int main()
{
    Node *root = NULL;
    int a[] = {20, 10, 30, 5, 15};
    for (int x : a)
        root = insert(root, x);
    Node *s = inorderSuccessor(root, 15);
    if (s)
        cout << s->data;
}
