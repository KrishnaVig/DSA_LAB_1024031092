#include <iostream>
using namespace std;

struct DNode
{
    int data;
    DNode *prev;
    DNode *next;
};

bool search(DNode *head, int val)
{
    while (head)
    {
        if (head->data == val)
            return true;
        head = head->next;
    }
    return false;
}

struct CNode
{
    int data;
    CNode *next;
};

bool search(CNode *last, int val)
{
    if (!last)
        return false;
    CNode *temp = last->next;
    do
    {
        if (temp->data == val)
            return true;
        temp = temp->next;
    } while (temp != last->next);
    return false;
}

int main()
{
    return 0;
}
