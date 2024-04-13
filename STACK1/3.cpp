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
int main(){
    stack<int> st;
    cout<<st.size()<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    print(st);
    stack<int> gt;
    stack <int> rt;
    //empty st into gt
    while(st.size()>0){
        gt.push(st.top());
        st.pop();
    }

    //empty gt into rt
    while(gt.size()>0){
        rt.push(gt.top());
        gt.pop();
    }

    //empty rt into st
    while(rt.size()>0){
        st.push(rt.top());
        rt.pop();
    }
   print(st);
}