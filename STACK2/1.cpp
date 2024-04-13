// remove consecutive duplicates in a string
#include<iostream>
#include<stack>
using namespace std;
string removeDuplicates(string s){
    stack<char> st;
    st.push(s[0]);
    for(int i = 1;i<s.length();i++){
        if(s[i]!=st.top()) st.push(s[i]);
    }
    s = "";
    while(st.size()>0){
        s = s + st.top();
        st.pop();

    }
    reverse(s.begin(),s.end());
    return s;

}
int main(){
    string s = "aaabbcddaabffg";
    cout<<s<<endl;
    s = removeDuplicates(s);
    cout<<s<<endl;
}