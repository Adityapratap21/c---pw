//delete node given node value
//Delete Node
#include<iostream>
using namespace std;
class Node{
public:
     int val;
     Node* next;
     Node(int val){
        this->val = val;
        this->next = NULL;
     }
};
void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
Node* deleteNode(Node* head,int targetval){
    if(head->val==targetval){
        head = head->next;
        return head;
    }
    Node* temp = head;
    while(temp->next->val!=targetval){
        temp = temp->next;
    }
    temp->next = temp->next->next;
    return head;
}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);

    a->next = b;
    b->next = c;
    c->next = d;
    Node* head = a;
    display(head);
    head = deleteNode(head,20);
    display(head);
     head = deleteNode(head,30);
    display(head);
}