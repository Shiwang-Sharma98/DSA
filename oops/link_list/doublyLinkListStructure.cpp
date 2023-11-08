#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

class DLL{  // user defined structure
public:
    Node* head;
    Node* tail;
    int size;
    DLL(){
        head = tail = NULL;
        size = 0;
    }
    void insertAtTail(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
        size++;
    }
    
    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        size++;
    }
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    void InsertAtIndex(int idx,int val){
        if(idx==0) insertAtHead(val);
        else if (idx<0 || idx>size) cout<<"invalid idx";
        else if (idx==size) insertAtTail(val);
        else{
            Node* t = new Node(val);
            Node* temp = head;
            int n = 0;
            while(n<idx-1){
                temp = temp->next;
                n++;

            }
            t->next = temp->next;
            temp->next = t;
            t->prev = temp;
            t->next->prev = t;
            size++;

        }
    }

    int getAtIndex(int idx){
        if(idx<0 || idx>=size){
            cout<<"invalid idx";
            return 0;
        }
        else if(idx==0) return head->val;
        else if(idx==size-1) return tail->val;
        else{
            Node* temp = head;
            for(int i = 0;i<idx;i++){
                temp = temp->next;
            }
            return temp->val;
        }
    }
    void deleteAtHead(){
        if(size==0){
            cout<<"list is empty!";
            return;
        }
        head = head->next;
        if(head!=NULL) head->prev = NULL;
        if(head==NULL) tail=NULL;
        size--;
    }
    void deleteAtTail(){
        if(size==0){
            cout<<"list is empty!";
            return;
        }
        else if(size==1){
            deleteAtHead();
            return;
        }
        Node* temp = tail->prev;
        temp->next = NULL;
        tail = temp;
        size--;
    }
    void deleteAtIndex(int idx){
        if(size==0){
            cout<<"list is empty!";
            return;
        }
        else if(idx<0 || idx>=size){
            cout<<"invalid idx";
        }
        else if(idx==0) deleteAtHead();
        else if(idx==size-1) deleteAtTail();
        else{
            Node* temp = head;
            for(int i=1;i<idx-1;i++){
                temp = temp->next;
            }
            temp->next = temp->next->next;
            temp->next->prev = temp;
            size--;
        }
    }
};
int main(){
    DLL list;
    list.insertAtTail(10);
    list.insertAtTail(20);
    list.insertAtTail(30);
    list.display();
    list.insertAtTail(40);
    list.display();
    list.insertAtHead(50);
    list.display();
    list.InsertAtIndex(2,60);
    list.display();
    list.deleteAtTail();
    list.display();
    list.deleteAtIndex(2);
    list.display();



    



    return 0;
}