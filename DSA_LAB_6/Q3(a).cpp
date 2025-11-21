#include <iostream>
using namespace std;

struct DNode
{
    int data;
    DNode *prev;
    DNode *next;
};

int size(DNode *head)
{
    int count = 0;
    while (head)
    {
        count++;
        head = head->next;
    }
    return count;
}

int main()
{
    DNode *head = nullptr;

    DNode *n1 = new DNode{10, nullptr, nullptr};
    DNode *n2 = new DNode{20, n1, nullptr};
    DNode *n3 = new DNode{30, n2, nullptr};

    n1->next = n2;
    n2->next = n3;
    head = n1;

    cout << "Size of Doubly Linked List is " << size(head) << endl;

    return 0;
}
