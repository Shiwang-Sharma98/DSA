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

// in the below two functions you can directly send a ; as a would pass throught the value not by
// refernce though its a pointer ; as a is box containg adderss of head 

void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int size(Node* head){
    Node* temp = head;
    int n = 0;
    while(temp!=NULL){
        n++;
        temp = temp->next;
    }
    return n;
}
int main(){

    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;

    // now how to get the value of d
    // cout<<a->next->next->next->val<<endl;

    // Node* temp = a;
    // while(temp!=NULL){
    //     cout<<temp->val<<" ";
    //     temp = temp->next;
    // }

    // display list using pointers
    display(a);
    // how to find size of link list
    cout<<size(a);

    return 0;
}