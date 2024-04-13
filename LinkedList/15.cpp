#include<iostream>
using namespace std;
class Node{  // user defined data type
public:
      int val;
      Node* next;
      Node(int val){
        this->val=val;
        this->next = NULL;
      }
};
class linkedList{  // user defined data structure
public:
   Node* head;
   int size;
   linkedList(){
    head = NULL;
    size = 0;
   }
   void insertAtEnd(int val){
    Node* temp = new Node(val);
    Node* t = head;
    if(size==0) head = temp;
    else{
        for(int i = 1;i<size;i++){
         t = t->next;
        }
        t->next = temp;

    }
    size++;
   }

   void insertAtHead(int val){
    Node* temp = new Node(val);
    if(size==0) head = temp;
    else{
        temp->next = head;
        head = temp;
    }
    size++;
   }

   void insertAtIndex(int val,int idx){
    Node* temp = new Node(val);
    if(idx<0 || idx>size) {
        cout<<"Index is Invalid";
        return;
    }
    else if(idx==0){
        temp->next = head;
        head = temp;
        size++;
        return;
    }

    else{
        Node* t = head;
        for(int i = 1;i<=idx-1;i++){
            t = t->next;
        }
        temp->next = t->next;
        t->next = temp;
    }
    size++;
   }
   int getAtidx(int idx){


        Node* temp = head;
        for(int i = 1;i<idx;i++){
            temp = temp->next;
        }
        return temp->val;

   }

   void display(){
    Node* temp = head;
     while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
     }
     cout<<endl;
   }

};

int main(){
    linkedList ll;
    ll.insertAtEnd(10);
   cout<<ll.size<<endl;
    ll.display();
    ll.insertAtEnd(20);
    cout<<ll.size<<endl;
    ll.display();
    ll.insertAtEnd(30);
    cout<<ll.size<<endl;
    ll.display();
    ll.insertAtHead(40);
    cout<<ll.size<<endl;
    ll.display();
    ll.insertAtHead(50);
    cout<<ll.size<<endl;
    ll.display();
    ll.insertAtIndex(60,0);
    cout<<ll.size<<endl;
    ll.display();
    ll.insertAtIndex(70,3);
    cout<<ll.size<<endl;
    ll.display();
   cout<<ll.getAtidx(6)<<endl;
   cout<<ll.getAtidx(1)<<endl;

}