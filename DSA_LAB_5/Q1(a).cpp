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
cout << "Inserting 10, 20, and 30 at the beginning..." << endl;

    
    list.insertAtBegin(10); 
    list.displayList(); 

    
    list.insertAtBegin(20); 
    list.displayList(); 

    
    list.insertAtBegin(30); 
    list.displayList();
return 0;
}