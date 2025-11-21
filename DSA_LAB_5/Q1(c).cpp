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
    void insert(int val,int pos){
        Node* current=head;
        int currentPos=0;
        Node* newNode=new Node(val);
        if(head==NULL){
            head=newNode;
        }
        while(current->next!=NULL&&currentPos<pos-1){
            current=current->next;
            currentPos++;
        }
        newNode->next=current->next;
        current->next=newNode;
    }
};
int main(){

return 0;
}