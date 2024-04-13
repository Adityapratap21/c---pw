// vector implementation of stack
#include<iostream>
using namespace std;
class Stack{ // user defined data structure
public:
    vector<int>v;

    Stack(){

    }
    void push(int val){
        v.push_back(val);
    }
    void pop(){
         if(v.size()==0){
            cout<<"Stack is empty"<<endl;
            return;
        }
        v.pop_back();
    }
    int top(){
        if(v.size()==0){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return v[v.size()-1];
    }
    int size(){
        return v.size();
    }
    void display(){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
    }

};
int main(){
    Stack st;
    cout<<st.top()<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout<<st.size()<<endl;
    st.pop();
    cout<<st.size()<<endl;
    cout<<st.top()<<endl;
    st.push(50);
    st.push(60);
    st.push(70);
    cout<<endl;
    cout<<st.top()<<endl;
    st.display();
}