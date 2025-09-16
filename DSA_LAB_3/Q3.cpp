#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<char>st;
    string str;
    for(int i=0;i<str.size();i++){
        if(str[i]=='('|| str[i]=='{'|| str[i]=='['){
            st.push(str[i]);
        }else{
            if(st.size()==0){
                return false;
            }
            if(st.top()=='('&& str[i]=='('||st.top()=='{'&& str[i]=='}'||st.top()=='['&& str[i]==']'){
                st.pop();
            }
            else{
                return false;
            }
        }
    }
    return 0;
}