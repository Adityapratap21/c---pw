// printing element of linkedlist by recursion
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
void displayrec(Node* head){

    if(head==NULL) return;
   cout<<head->val<<" ";
   displayrec(head->next);
}
void displayrevRec(Node* head){

    if(head==NULL) return;
    displayrevRec(head->next);
   cout<<head->val<<" ";

}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    a->next = b;
    b->next = c;
    c->next = d;
    displayrec(a);
    cout<<endl;
    displayrevRec(a);
}