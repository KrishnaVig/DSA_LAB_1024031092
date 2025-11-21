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
    void insertAtEnd(int val){
        Node* newNode=new Node(val); 
        Node* temp=head;
        if(head==NULL){
            head=newNode;
        }
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
        newNode->next=NULL;
    }
};
int main(){

return 0;
}