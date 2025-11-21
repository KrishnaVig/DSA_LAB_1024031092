#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

bool isCircular(Node *head)
{
    if (!head)
        return false;
    Node *temp = head->next;
    while (temp && temp != head)
    {
        temp = temp->next;
    }
    return temp == head;
}

int main()
{
    Node *n1 = new Node{10, nullptr};
    Node *n2 = new Node{20, nullptr};
    Node *n3 = new Node{30, nullptr};
    n1->next = n2;
    n2->next = n3;
    n3->next = n1;

    if (isCircular(n1))
        cout << "The linked list is circular\n";
    else
        cout << "The linked list is not circular\n";

    return 0;
}
