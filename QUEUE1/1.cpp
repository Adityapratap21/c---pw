// basic
#include<iostream>
#include<queue>
using namespace std;
void display(queue<int> &q){
    int n = q.size();
    while(n){
       cout<<q.front()<<" ";
       int x = q.front();
       q.pop();
       q.push(x);
       n--;
    }
}
int main(){
    queue<int> q;
    // push
    // pop
    // front->top
    // size,empty
    // back

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    cout<<q.size()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    cout<<q.size()<<endl;
    display(q);



}