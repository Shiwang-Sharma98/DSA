#include<iostream>
#include<queue>
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

Node* construct(int arr[],int n){
    queue<Node*> q;
    Node* root = new Node(arr[0]);
    q.push(root);
    int i = 1;
    int j = 2;
    while(q.size()>0 && i<n){
        Node* temp = q.front();
        q.pop();
        Node* l;
        Node* r;
        if(arr[i]!=INT16_MIN) l = new Node(arr[i]);
        else l = NULL;
        if(j!=n && arr[j]!=INT16_MIN) r = new Node(arr[j]);
        else r = NULL;
        temp->left = l;
        temp->right = r;
        if(l!=NULL) q.push(l);
        if(r!=NULL) q.push(r);
        i+=2;
        j+=2;
    }
    return root;
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

void leftBoundary(Node* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) return;
    cout<<root->val<<" ";
    leftBoundary(root->left);
    if(root->left==NULL)leftBoundary(root->right);
}

void leafNode(Node* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) cout<<root->val<<" ";
    leafNode(root->left);
    leafNode(root->right);
}

void rightBoundary(Node* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) return;
    if(root->right==NULL)rightBoundary(root->left);
    rightBoundary(root->right);
    cout<<root->val<<" ";
}

int main(){
    // construct
    int arr[]={1,2,3,4,5,INT16_MIN,6,7,INT16_MIN,8,INT16_MIN,9,10,INT16_MIN,11,INT16_MIN,12,INT16_MIN,13,INT16_MIN,14,15,16,INT16_MIN,17,INT16_MIN,INT16_MIN,18,INT16_MIN,19,INT16_MIN,INT16_MIN,INT16_MIN,20,21,22,23,INT16_MIN,24,25,26,27,INT16_MIN,INT16_MIN,28,INT16_MIN,INT16_MIN};
    int n = sizeof(arr)/sizeof(arr[0]);
    Node* root = construct(arr,n);
    // boundary traversal
    leftBoundary(root);
    cout<<endl;
    leafNode(root);
    cout<<endl;
    rightBoundary(root->right);

    return 0;
}