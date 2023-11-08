// example CD racks 
// points to remember in stacks
// insertion of elements in stacks only happens at the top
// deletion of ele in a stack only happens at the top
// get ele only happens at the top   OR  you can access ele only from the top

// imagine stack as a bucket

// it usually has 3 functions (if the name of the stack is st)
// 1 -> st.push(val) == add ele at top
// 2 -> st.pop() == removes ele from top
// 3 -> st.top() == return the val at the top but you can't update the value (st.top()=5  won't work)
// 4 -> st.size()

// why to study stacks 
// 1 -> it provides us discipline
// 2 -> it gives us intiution in some problems


// stacks is also termed as == LIFO (last in first out) OR filo

#include<iostream>
#include<stack>
using namespace std;
int main(){

    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    // cout<<st.size()<<endl;
    // cout<<st.top()<<endl;

    // how to print the ele of stack (but we are emptying the stack here)
    // while(st.size()>0){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }

    // we will use extra stack
    stack<int> temp;
    while(st.size()>0){
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }
    cout<<endl;

    // now putting ele back to st 

    while(temp.size()>0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl;
    cout<<st.top()<<endl;
    cout<<temp.size()<<endl;



    return 0;
}
 