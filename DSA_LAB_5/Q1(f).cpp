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
    void deleteNode(int pos){
        Node* curr=head;
        int currPos=0;
        Node* prev=NULL;
        if(head==NULL){
            return;
        }
        while(curr->next!=NULL&&currPos<pos-1){
            prev =curr;
            curr=curr->next;
            currPos++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
};
int main(){

return 0;
}