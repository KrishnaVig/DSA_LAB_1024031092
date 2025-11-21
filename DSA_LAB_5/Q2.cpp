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
    int count(int key){
        Node* temp =head;
        int count=0;
        while(temp!=NULL){
            if(temp->data==key){
                count++;
            }
            temp=temp->next;
            
        }
        return count;
    }
    Node* deleteNode(int key){
        Node* temp=head;
        if(head->data==key){
            head=head->next;
            delete temp;
        }
        Node* current =head;
        while(current!=NULL&&current->next!=NULL){
            if(current->next->data==key){
                Node* temp=current->next;
                current->next=temp->next;
                delete temp;
            }
            else{
                current=current->next;
            }
        }
        return head;
    }
};
int main(){

return 0;
}