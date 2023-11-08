#include<iostream>
using namespace std;
#include<iostream>
#include<algorithm>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        left = NULL;
        right = NULL;
    }
};
void preOrder(Node* root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
void inOrder(Node* root){
    if(root==NULL) return;
    inOrder(root->left);
    cout<<root->val<<" ";
    inOrder(root->right);
}
int main(){
    // pre order traversal == root left right  
    // in order traversal == left root right  
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    preOrder(a);


    return 0;
}