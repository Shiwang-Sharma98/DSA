#include<iostream>
#include<unordered_set>
using namespace std;

void f(string input,string output){
    if(input.size()==0){
        cout<<output<<endl;
        return;
    }
    for(int i=0;i<input.size();i++){
        char ch = input[i];
        string left = input.substr(0,i);
        string right = input.substr(i+1);
        string ros = left + right;
        f(ros,output+ch);
    }
}

// optimized function by using back tracking 

void f2(string &str,int i){
    if(i == str.size()-1){
        cout<<str<<endl;
        return;
    }
    for(int idx = i;idx<str.size();idx++){
        swap(str[idx],str[i]);
        f2(str,i+1);
        swap(str[idx],str[i]);
    }
}

// optimized function by using back tracking , but in this case repetation is allowed 
// and we will use a unorderd set to avoid repetation

void f3(string &str,int i){
    if(i == str.size()-1){
        cout<<str<<endl;
        return;
    }
    unordered_set<char> s;
    for(int idx = i;idx<str.size();idx++){
        if(s.find(str[idx])!=s.end()){
            continue;
        }
        s.insert(str[idx]);
        swap(str[idx],str[i]);
        f3(str,i+1);
        swap(str[idx],str[i]);
    }
}

int main(){
    string str = "aba";
    unordered_set<char> s;
    f3(str,0);
    return 0;
}