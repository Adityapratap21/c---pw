// array implementation of QUEUE
// remove at even indices
// basic
#include<iostream>
#include<queue>
#include<stack>
using namespace std;
class QUEUE{
public:
  int f;
  int b;
  int arr[5];
  QUEUE(){
    f = b =0;

  }
  void push(int val){
    if(b==5){
        cout<<"Queue is fUll!"<<endl;
        return;
    }
    arr[b] = val;
    b++;
  }

  void pop(){
    if(f-b==0){
        cout<<"Queue is empty!"<<endl;
        return;
    }
    f++;
  }
  int front(){
    if(f-b==0){
        cout<<"Queue is empty!"<<endl;
        return -1;
    }
    return arr[f];
  }
  int back(){
    if(f-b==0){
        cout<<"Queue is empty!"<<endl;
        return -1;
    }
    return arr[b-1];
  }

  int size(){
    return b-f;
  }
  bool empty(){
    if(f-b==0) return true;
    else return false;
  }
  void display(){
    for(int i =f;i<b;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
  }
};

int main(){
    QUEUE q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.display();
    q.push(60);

    q.display();
    q.pop();
    q.display();



}