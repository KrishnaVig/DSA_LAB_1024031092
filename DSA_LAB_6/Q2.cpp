#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void display(Node *last)
{
    if (!last)
        return;
    Node *temp = last->next;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != last->next);
    cout << last->next->data << endl;
}

int main()
{
    Node *last = nullptr;

   
    Node *n1 = new Node{20, nullptr};
    Node *n2 = new Node{100, nullptr};
    Node *n3 = new Node{40, nullptr};
    Node *n4 = new Node{80, nullptr};
    Node *n5 = new Node{60, nullptr};

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = n1;
    last = n5;

    display(last);



    return 0;
}
