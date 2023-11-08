#include<iostream>
#include<stack>
using namespace std;

void print(stack<int> st){
    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}

int main(){
    // stack<int> st;
    // st.push(10);
    // st.push(20);
    // st.push(30);
    // st.push(40);
    // st.push(50);
    // stack<int> gt;
    // stack<int> ht;
    // print(st);
    // // reverse the stack using two different stack
    // while(st.size()>0){
    //     gt.push(st.top());
    //     st.pop();
    // }
    // while(gt.size()>0){
    //     ht.push(gt.top());
    //     gt.pop();
    // }
    // while(ht.size()>0){
    //     st.push(ht.top());
    //     ht.pop();
    // }
    // cout<<gt.size()<<endl;
    // cout<<ht.size()<<endl;
    // cout<<st.size()<<endl;
    // cout<<st.top()<<endl;
    // print(st);
    // cout<<st.top()<<endl;

    // push ele at bottom of stack/ any index
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    stack<int> temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    st.push(70);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
    print(st);

    return 0;
}