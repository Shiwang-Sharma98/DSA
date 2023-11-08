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
int main(){

    // 10 20 30 40 
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    // forming link list
    a.next = &b;
    b.next = &c;
    c.next = &d;
    // accessing b without using b
    // cout<<(a.next)->val<<endl;
    // or
    // cout<<(*(a.next)).val<<endl;
    // going from a to d
    // cout<<(((a.next)->next)->next)->val<<endl;
    // printing all values of link list using loop
    Node temp = a; // deep copy
    while(1){
        cout<<temp.val<<" ";
        if(temp.next==NULL) break;
        temp = *(temp.next);
    }

    return 0;
}