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
        void displayList(){
        Node* current = head;
        if (head == NULL) {
            cout << "The list is empty." << endl;
            return;
        }
        cout << "List: ";
        while(current != NULL){
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "NULL" << endl;
    }
};
int main(){
LinkedList list;

   
    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);
    list.displayList(); 

    list.deleteAtEnd();
    list.displayList(); 
    
    
    list.deleteAtEnd();
    list.displayList(); 
    
return 0;
}