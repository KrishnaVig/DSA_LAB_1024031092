#include<iostream>
#include<stack>
#include<queue>
#include<math.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter your string:"<<endl;
    cin>>s;
    stack<int>s1;
    for(int i=0;i<s.length();i++){
        if(s[i]>='0'&&s[i]<='9'){
            s1.push(s[i]-'0');
        }
        else{
            int op2=s1.top();
            s1.pop();
            int op1=s1.top();
            s1.pop();
            switch(s[i])
            {
                case '+':
                s1.push(op1+op2);
                break;
                case '-':
                s1.push(op1-op2);
                break;
                case '*':
                s1.push(op1*op2);
                break;
                case '/':
                s1.push(op1/op2);
                break;
                case '^':
                s1.push(pow(op1,op2));
                break;
            }
        }
    }
    cout<<s1.top()<<endl;
return 0;
}