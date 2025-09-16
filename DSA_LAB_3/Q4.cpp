#include<iostream>
#include<stack>
using namespace std;
int priority(char c) {
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}
int main(){
    string s;
    cout<<"Emter your string:";
    cin>>s;
    int n=s.size();
    int i=0;
    stack<char>st;
    string ans="";
    while(i<n){
        char c=s[i];
        if(s[i]>='A'&&s[i]<='Z'||s[i]>='a'&&s[i]<='z'||s[i]>='0'&&s[i]<='9'){
            ans+=s[i];
        }
        if(s[i]=='('){
            st.push(s[i]);
        }
        if(s[i]==')'){
            while(!st.empty()&&st.top()!='('){
                ans+=st.top();
                st.pop();
            }
        }
        if(!st.empty()){
            st.pop();
        }
        
        else{
            while(st.empty()&&priority(st.top())>=priority(c)){
                ans+=st.top();
                st.pop();
            }
        }
    }
    while(!st.empty()){
        ans+=st.top();
        st.pop();
    }
    cout<<ans;
    return 0;
}