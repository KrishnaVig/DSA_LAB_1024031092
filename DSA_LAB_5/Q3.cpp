#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
class LinkedList{
    Node* head;
    public:
    LinkedList(){
        head=NULL;
    }
    void midFind(){
        Node* slow=head;
        Node* fast=head;
        int count=0;
        while(fast->next!=NULL&&fast->next->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
            count++;
        }
        cout<<"The mid of linked list is: "<<count;
    }
};
int main(){

return 0;
}