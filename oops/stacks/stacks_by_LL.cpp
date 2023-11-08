#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        next = NULL;
    }

};

class Stack{
public:
    Node* head = NULL;

    void push(int a){
        Node* temp = new Node(a);
        temp->next = head;
        head = temp;
    }
    void pop(){
        head = head->next;
    }
    int top(){
        return head->val;
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
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout<<st.top()<<endl;
    st.pop();
    st.display();
    



    return 0;
}