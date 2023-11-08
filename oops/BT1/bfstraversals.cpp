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
void print(Node* a,int level,int currLevel=1){
    if(a==NULL) return;
    if(currLevel==level){
        cout<<a->val<<" ";
        return;
    }
    print(a->left,level,currLevel+1);
    print(a->right,level,currLevel+1);
}
int levels(Node* root){
    if(root==NULL) return 0;
    return 1 + max(levels(root->left),levels(root->right));
}
void levelOrder(Node* a){
    for(int i=1;i<=levels(a);i++){
        print(a,i);
        cout<<endl;
    }
}
int main(){
    
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

    // print ele in the nth level = function print
    // int level = 3;
    // print(a,level);

    // level order traversal = function levelOrder
    // levelOrder(a);


    return 0;
}