// ele are always stored in a sorted order but following the properties of 
// set that is repeated ele can't be stored
// all the functions work same as unordered set but the time complexicity is of order of logn
// but in case of unordered set the time complexicity is of the order of 1
#include<iostream>
#include<set>
#include<map>
using namespace std;
int main(){
    // set<int> s;
    // s.insert(3);
    // s.insert(10);
    // s.insert(2);
    // for(int ele : s){
    //     cout<<ele<<" ";
    // }
    map<int,int> m;
    m[2] = 20;
    m[1] = 30;
    m[3] = 10;
    for(auto x : m){
        cout<<x.first<<endl;
    }
    for(auto x : m){
        cout<<x.second<<endl;
    }

    return 0;
}