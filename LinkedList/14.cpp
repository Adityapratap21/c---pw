// linkedlist class
// insert at any index
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
     void insertAtIdx(int idx,int val){
        if(idx<0 || idx>size) cout<<"Invalid Index"<<endl;
        else if(idx==0) insertAtHead(val);
        else if(idx==size) insertAtEnd(val);
        else{
            Node* t = new Node(val);
            Node* temp = head;
            for(int i=1;i<=idx-1;i++){
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next=t;
            size++;
        }
     }
     int getAtIdx(int idx){
        if(idx<0 || idx>=size){
            cout<<"Invalid Index";
            return -1;
        }
        else if(idx==0) return head->val;
        else if(idx==size-1) return tail->val;
        else{
            Node* temp = head;
            for(int i = 1;i<=idx;i++){
                temp = temp->next;
            }
            return temp->val;
        }
     }
     void deleteHead(){
        if(size==0){
            cout<<"Linked list is empty";
            return;
        }
        head = head->next;
        size--;
     }
     void deleteAtTail(){
        if(size==0){
            cout<<"Linked list is empty";
            return;
        }
        Node* temp = head;
        while(temp->next!=tail){
         temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
        size--;
     }
     void deleteAtIdx(int idx){
        if(size==0){
            cout<<"Linked list is empty";
            return;

        }
        else if(idx<0 || idx>=size){
            cout<<"Invalid Index";
            return;
        }
        else if(idx==0) return deleteHead();
        else if(idx==size-1) return deleteAtTail();
        else{
            Node* temp = head;
            for(int i =1;i<=idx-1;i++){
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }
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
     ll.insertAtHead(24); //{24->50->10->20->30->40->NULL}
     ll.display();
     ll.insertAtIdx(4,80); //{24->50->10->20->80->30->40->NULL}
     ll.display();
     cout<<ll.getAtIdx(6)<<endl;
     ll.deleteHead();
     ll.display();
     ll.deleteAtTail();
     ll.display();
     ll.deleteAtIdx(3);
     ll.display();



}