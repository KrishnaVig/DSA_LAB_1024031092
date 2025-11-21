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
    void display(){
        Node* curr=head;
        if(head==NULL){
            cout<<"empty"<<endl;
        }
        while(curr->next!=NULL){
            cout<<curr->data;
        }
;    }
};
int main(){

return 0;
}