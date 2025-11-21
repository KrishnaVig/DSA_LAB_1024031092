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
    void search(int val){
        Node* curr=head;
        int currPos=0;
        if(head==NULL){
            cout<<"Empty"<<endl;
        }
        while(curr->next!=NULL&&curr->data!=val){
            curr=curr->next;
            currPos++;
        }
        cout<<"The position is:"<<currPos<<endl;
    }
};
int main(){

return 0;
}