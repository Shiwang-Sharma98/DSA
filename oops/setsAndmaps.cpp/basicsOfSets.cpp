#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    // a type of data structure that has t.c. of order of 1 for every operation like 
    // insert, delete, find etc
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    //s.erase(2);
    
    // ele's are stored in a random order in set's
    // to print ele we use for each loop
    // for(int ele : s){
    //     cout<<ele<<" ";
    // }
    // set stores only unique ele so if you store any ele twice it would be printed once only
    // even the size of the set remains same
    // s.insert(1); 
    for(int ele : s){
        cout<<ele<<" ";
    }
    // cout<<endl;
    // cout<<s.size();

    // to check weather the ele exists in set or not
    int target = 0;
    // s.find() searches in set and if not found returns s.end() which is iterator next to the last value in set
    // if(s.find(target)!=s.end()){ // target exists
        //cout<<"exists"<<endl;
    //}
    // else cout<<"doesn't exists";

    return 0;
}
