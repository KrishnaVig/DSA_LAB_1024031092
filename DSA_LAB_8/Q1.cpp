#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int d) : data(d), left(NULL), right(NULL) {}
};

void preorder(Node *r)
{
    if (!r)
        return;
    cout << r->data << " ";
    preorder(r->left);
    preorder(r->right);
}
void inorder(Node *r)
{
    if (!r)
        return;
    inorder(r->left);
    cout << r->data << " ";
    inorder(r->right);
}
void postorder(Node *r)
{
    if (!r)
        return;
    postorder(r->left);
    postorder(r->right);
    cout << r->data << " ";
}

int main()
{
    Node *root = new Node(20);
    root->left = new Node(10);
    root->right = new Node(30);
    preorder(root);
    cout << endl;
    inorder(root);
    cout << endl;
    postorder(root);
    cout << endl;
}
