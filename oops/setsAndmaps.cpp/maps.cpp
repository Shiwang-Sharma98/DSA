#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    // map<key,value> m;
    unordered_map<string,int> m;
    // method 1
    // pair<string,int> p1;
    // pair<string,int> p2;
    // pair<string,int> p3;

    // p1.first = "raghav";
    // p1.second = 23;
    // p2.first = "ishan";
    // p2.second = 24;
    // p3.first = "pillu";
    // p3.second = 45;
    // m.insert(p1);
    // m.insert(p2);
    // m.insert(p3);

    
    // for(auto p : m){
    //     cout<<p.first<<" "<<p.second<<endl;
    // }

    // method 2
    m["harsh"] = 23;
    m["ishan"] = 34;
    m["sss"] = 98;

    // for(auto p : m){
    //     cout<<p.first<<" "<<p.second<<endl;
    // }

    // to erase we use 
    // m.erase("ishan");

    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }

    // for using size
    // cout<<m.size();

    // see question number 242,1
    // find function same as sets

    cout<<m["ishan"];

    return 0;
}