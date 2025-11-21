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
    void reverse(){
        Node* temp =head;
        Node* prev=NULL;
        while(temp!=NULL){
            Node* front =temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;
        }
    }
};
int main(){

return 0;
}