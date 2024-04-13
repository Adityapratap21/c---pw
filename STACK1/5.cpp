#include<iostream>
#include<stack>
using namespace std;
void displayRev(stack<int>& st){
    if(st.size()==0) return;
    int x = st.top();
    cout<<x<<" ";
    st.pop();
    displayRev(st);
    st.push(x);
}
void display(stack<int>& st){
    if(st.size()==0) return;
    int x = st.top();

    st.pop();
    display(st);
    cout<<x<<" ";
    st.push(x);
}
void pushAtBottom(stack<int>& st,int y){
    if(st.size()==0){
      st.push(y);
      return;
    }
    int x = st.top();

    st.pop();
    pushAtBottom(st,y);

    st.push(x);
}
void reverse(stack<int>& st){
    if(st.size()==1) return;
    int x = st.top();
    st.pop();
    reverse(st);
    pushAtBottom(st,x);
}
int main(){
    stack<int> st;
    cout<<st.size()<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    displayRev(st);
    cout<<endl;
    display(st);
    // using recursion
    pushAtBottom(st,-10);
    cout<<endl;
    display(st);
    cout<<endl;
    reverse(st);
    display(st);




}