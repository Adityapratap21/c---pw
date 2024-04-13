// maximum in binary tree
// find sum of tree nodes
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
 int MaxInTree(Node* root){
    if(root==NULL) return INT_MIN;
   int lMax = MaxInTree(root->left);
   int rMax = MaxInTree(root->right);
    return max(root->val,max(lMax,rMax));
 }

int main(){
    Node* a = new Node(10);  // root node
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    Node* f = new Node(60);
    Node* g = new Node(70);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right  =e;
    c->left = f;
    c->right = g;
   cout<<MaxInTree(a)<<endl;


}