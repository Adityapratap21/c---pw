// linkedlist class
// insert at head
#include<iostream>
using namespace std;
class Node{  // User defined data type
public:
      int val;
      Node* next;
      Node(int val){
        this->val = val;
        this->next = NULL;
      }

};
class LinkedList{  // User defined data structure
public:
     Node* head;
     Node* tail;
     int size;
     LinkedList(){
        head = tail = NULL;
        size = 0;
     }
     void insertAtEnd(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
     }
     void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
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
    LinkedList ll; // { }
    ll.insertAtEnd(10); // {10->NULL}
     ll.display();
     cout<<ll.size<<endl;
    ll.insertAtEnd(20); // {10->20->NULL}
    ll.display();
    cout<<ll.size<<endl;
    ll.insertAtEnd(30); // {10->20->30->NULL}
     ll.display();
     cout<<ll.size<<endl;
     ll.insertAtEnd(40); //{10->20->30->40->NULL}
     ll.display();
     cout<<ll.size<<endl;
     ll.insertAtHead(50); //{50->10->20->30->40->NULL}
     ll.display();
     ll.insertAtHead(24);
     ll.display();



}