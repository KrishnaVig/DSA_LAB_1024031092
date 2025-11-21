#include <iostream>
using namespace std;

struct DNode
{
    char data;
    DNode *prev;
    DNode *next;
};

bool isPalindrome(DNode *head)
{
    if (!head)
        return true;

    DNode *tail = head;
    while (tail->next)
        tail = tail->next;

    while (head != tail && tail->next != head)
    {
        if (head->data != tail->data)
            return false;
        head = head->next;
        tail = tail->prev;
    }
    return true;
}

int main()
{
    DNode *n1 = new DNode{'r', nullptr, nullptr};
    DNode *n2 = new DNode{'a', n1, nullptr};
    DNode *n3 = new DNode{'d', n2, nullptr};
    DNode *n4 = new DNode{'a', n3, nullptr};
    DNode *n5 = new DNode{'r', n4, nullptr};

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;

    if (isPalindrome(n1))
        cout << "The doubly linked list is a palindrome\n";
    else
        cout << "The doubly linked list is not a palindrome\n";

    return 0;
}
