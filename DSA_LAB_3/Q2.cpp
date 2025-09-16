#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main(){
string s="DataStructure";
string a;
stack<char>st;
for(int i=0;i<s.length();i++){
    char ch=s[i];
    st.push(ch);
}
while(!st.empty()){
    char ele=st.top();
    st.pop();
    a.push_back(ele);
}
cout<<a<<endl;
return 0;
}