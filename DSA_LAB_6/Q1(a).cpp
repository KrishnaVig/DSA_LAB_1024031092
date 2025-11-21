#include <iostream>
using namespace std;

struct DNode
{
    int data;
    DNode *prev;
    DNode *next;
};

void insertFirst(DNode *&head, int val)
{
    DNode *n = new DNode{val, nullptr, head};
    if (head)
        head->prev = n;
    head = n;
}

void insertLast(DNode *&head, int val)
{
    DNode *n = new DNode{val, nullptr, nullptr};
    if (!head)
    {
        head = n;
        return;
    }
    DNode *temp = head;
    while (temp->next)
        temp = temp->next;
    temp->next = n;
    n->prev = temp;
}

void insertAfter(DNode *head, int key, int val)
{
    DNode *temp = head;
    while (temp && temp->data != key)
        temp = temp->next;
    if (temp)
    {
        DNode *n = new DNode{val, temp, temp->next};
        if (temp->next)
            temp->next->prev = n;
        temp->next = n;
    }
}

struct CNode
{
    int data;
    CNode *next;
};

void insertFirst(CNode *&last, int val)
{
    CNode *n = new CNode{val, nullptr};
    if (!last)
    {
        last = n;
        n->next = n;
        return;
    }
    n->next = last->next;
    last->next = n;
}

void insertLast(CNode *&last, int val)
{
    CNode *n = new CNode{val, nullptr};
    if (!last)
    {
        last = n;
        n->next = n;
        return;
    }
    n->next = last->next;
    last->next = n;
    last = n;
}

void insertAfter(CNode *last, int key, int val)
{
    CNode *temp = last ? last->next : nullptr;
    if (!temp)
        return;
    do
    {
        if (temp->data == key)
        {
            CNode *n = new CNode{val, temp->next};
            temp->next = n;
            if (temp == last)
                last = n;
            break;
        }
        temp = temp->next;
    } while (temp != last->next);
}

int main()
{
    return 0;
}
