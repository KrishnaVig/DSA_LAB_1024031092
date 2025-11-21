#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};


class CircularLinkedList{
    Node* head;

    public:
    CircularLinkedList(){
        head = NULL;
    }

    
    void insertEnd(int val){
        Node* newNode = new Node(val);
        
        
        if (head == NULL) {
            head = newNode;
            newNode->next = head; 
            return;
        }
        
        Node* current = head;
        
        while(current->next != head){
            current = current->next;
        }
        
        
        current->next = newNode; 
        newNode->next = head;    
    }

   
    int getSize(){
       
        if (head == NULL) {
            return 0;
        }

        int count = 0;
        Node* current = head;

       
        do {
            count++;
            current = current->next;
        } while (current != head);
        
        return count;
    }


    void displayList(){
        if (head == NULL) {
            cout << "List: EMPTY (Size: 0)" << endl;
            return;
        }
        
        Node* current = head;
        cout << "Circular List (Size: " << getSize() << "): ";
        
        
        do {
            cout << current->data << " -> ";
            current = current->next;
        } while (current != head);
        
        cout << "(Points back to " << head->data << ")" << endl;
    }

    ~CircularLinkedList() {
        if (head == NULL) return;
        
        Node* current = head->next;
        Node* next_node = NULL;

        head->next = NULL; 
        
        while (current != NULL) {
            next_node = current->next;
            delete current; 
            current = next_node;
        }
        delete head; 
        head = NULL; 
    }
};

int main(){
    CircularLinkedList list;

   
    
    list.insertEnd(10);
    list.insertEnd(20);
    list.insertEnd(30);
    list.displayList(); 

    
    cout << "Calculated Size: " << list.getSize() << endl; 



    return 0;
}