#include<iostream>
#include<stack>
#include<queue>
using namespace std;
class Stack{
    public:
    int top;
    int *arr;
    int size;
    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }
    void push(int ele){
        if(size-top>1){
            top++;
            arr[top]=ele;
        }
        else{
            cout<<"Stack overflow"<<endl;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }

        else{
            cout<<"Stack underflow"<<endl;
        }
    }
   int peek(){
    if(top>=0){
        return arr[top];
    }
    else{
        cout<<"Stack is empty"<<endl;
    }
   }
   bool isEmpty(){
    if(top>=0){
        return false;
    }
   }
   bool isFull(){
    if(size-top>1){
        return false;
    }
   }

};
int main(){
    Stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout<<"The top element is: "<<s.peek()<<endl;
    s.pop();
    s.pop();
    cout<<"top element is: "<<s.peek()<<endl;
    cout<<"Is the stack empty? "<<s.isEmpty()<<endl;
    cout<<"Is the stack full? "<<s.isFull()<<endl;

return 0;
}