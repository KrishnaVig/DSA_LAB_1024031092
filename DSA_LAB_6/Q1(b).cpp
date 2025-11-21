#include <iostream>
using namespace std;

struct DNode
{
    int data;
    DNode *prev;
    DNode *next;
};

void deleteNode(DNode *&head, int val)
{
    DNode *temp = head;
    while (temp && temp->data != val)
        temp = temp->next;
    if (!temp)
        return;
    if (temp->prev)
        temp->prev->next = temp->next;
    else
        head = temp->next;
    if (temp->next)
        temp->next->prev = temp->prev;
    delete temp;
}

struct CNode
{
    int data;
    CNode *next;
};

void deleteNode(CNode *&last, int val)
{
    if (!last)
        return;
    CNode *curr = last->next, *prev = last;
    do
    {
        if (curr->data == val)
        {
            if (curr == last)
            {
                if (curr == curr->next)
                {
                    delete last;
                    last = nullptr;
                    return;
                }
                last = prev;
            }
            prev->next = curr->next;
            delete curr;
            return;
        }
        prev = curr;
        curr = curr->next;
    } while (curr != last->next);
}

int main()
{
    return 0;
}
