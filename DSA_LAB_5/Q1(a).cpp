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
    void insertAtBegin(int val){
        Node* temp=new Node(val);
            if(head==NULL){
                head=temp;
             }
             temp->next=head;
             head=temp;
    }
};
int main(){

return 0;
}