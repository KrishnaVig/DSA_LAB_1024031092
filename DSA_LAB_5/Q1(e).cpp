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
    void deleteAtEnd(){
        Node* temp=head;
        Node* prev=NULL;
        if(head==NULL){
            return;
        }
        if(head->next==NULL){
            delete head;
            head=NULL;
        }
        while(temp->next!=NULL){
            prev =temp;
            temp=temp->next;
        }
        prev->next=NULL;
        delete temp;
    }
};
int main(){

return 0;
}