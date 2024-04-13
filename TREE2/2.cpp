// print nth level element

#include<iostream>
using namespace std;
class Node{  // this is a TreeNode
public:
     int val;
     Node* left;
     Node* right;
     Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
     }
};
 void nthLevel(Node* root,int curr,int level){
    if(root==NULL) return;  // base case
    if(curr==level){
        cout<<root->val<<" ";
        return;
    }
    nthLevel(root->left,curr+1,level);    // left
    nthLevel(root->right,curr+1,level);   // right
 }

int main(){
    Node* a = new Node(1);  // root node
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right  =e;
    c->left = f;
    c->right = g;
    int level  = 3;
    nthLevel(a,1,level);

}