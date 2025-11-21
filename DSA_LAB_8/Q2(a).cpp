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

Node *searchRec(Node *r, int k)
{
    if (!r || r->data == k)
        return r;
    return k < r->data ? searchRec(r->left, k) : searchRec(r->right, k);
}
Node *searchNonRec(Node *r, int k)
{
    while (r)
    {
        if (k == r->data)
            return r;
        r = k < r->data ? r->left : r->right;
    }
    return NULL;
}

int main()
{
    Node *root = NULL;
    int a[] = {20, 10, 30, 5, 15};
    for (int x : a)
        root = insert(root, x);
    cout << (searchRec(root, 15) ? "Found" : "Not Found") << endl;
    cout << (searchNonRec(root, 30) ? "Found" : "Not Found") << endl;
}
