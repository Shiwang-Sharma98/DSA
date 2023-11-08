#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void display(queue<int> &q){
    for(int i=0;i<q.size();i++){
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }
}
void reverse(queue<int> &q){
    stack<int> st;
    while(q.size()!=0){
        st.push(q.front());
        q.pop();
    }
    while(st.size()!=0){
        q.push(st.top());
        st.pop();
    }
}
void removeAtEven(queue<int> &q){
    int n = q.size();
    for(int i=0;i<n;i++){
        if(i%2==0) q.pop();
        else{ // utha kar piche dal do
            q.push(q.front());
            q.pop();
        }
    }
}

int main(){
    queue<int> q;
    // push
    // front
    // pop
    // size
    // back
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    display(q);
    // reverse a stack using a queue
    //reverse(q);
    //cout<<endl;
    //display(q);
    // remove all ele present at even position of the queue
    removeAtEven(q);
    cout<<endl;
    display(q);
    return 0;
}