#include<iostream>
#include<stack>
using namespace std;
void print(stack<int>& v){
    stack<int> temp;
     while(v.size()>0){

        temp.push(v.top());
        v.pop();

    }
    // puting elements back from temp to st
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        v.push(temp.top());
        temp.pop();

    }
    cout<<endl;
}
void pushAtBottom(stack<int>& st,int x){
    stack<int> temp;
     while(st.size()>0){

        temp.push(st.top());
        st.pop();

    }
    st.push(x);
    // puting elements back from temp to st
    while(temp.size()>0){

        st.push(temp.top());
        temp.pop();

    }

}
void pushAtIdx(stack<int>& st,int idx,int x){
      stack<int> temp;
     while(st.size()>idx){

        temp.push(st.top());
        st.pop();

    }
    st.push(x);
    // puting elements back from temp to st
    while(temp.size()>0){

        st.push(temp.top());
        temp.pop();

    }
}
int main(){
    stack<int> st;
    cout<<st.size()<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    print(st);
    pushAtBottom(st,80);
    print(st);
    pushAtIdx(st,2,110);
    print(st);




}