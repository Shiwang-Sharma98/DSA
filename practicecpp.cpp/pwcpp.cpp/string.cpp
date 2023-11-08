#include<iostream>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;

int main(){

    // string s;
    // getline(cin,s);
    // cout<<s;   

    // input a string of length n and count all vovels
    // int n;
    // cin>>n;
    // char ch[n];
    // for(int i=0;i<n;i++){
    //     cin>>ch[i];
    // }

    // int count=0;
    // for(int i=0;i<n;i++){
    //     if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'){
    //         count++;
    //     }
    // }
    // cout<<count<<endl;
    // cout<<ch;


    // input a string and return the num of times the neighbour char are diff from each other

    // string s;
    // cin>>s;

    // int count = 0;
    // int n=s.length();
    // for(int i=0;i<n;i++){
    //     if(s[i]!=s[i-1] && s[i]!=s[i+1]){
    //         count++;
    //     }
    //     else if(i==0 &&  s[i]!=s[i+1] )  {
    //         count++;
    //     }
    //     else if(i==n-1 && s[i]!=s[i-1]){
    //         count++;
    //     }

    // }
    // cout<<count;

    // int n;
    // cin>>n;

    // vector<int> v(n);

    // for(int i=0;i<n;i++){
    //     cin>>v[i];
    // }

    // reverse(v.begin(),v.end());

    //  for(int i=0;i<n;i++){
    //     cout<<v[i];
    // }

    string s = "raghav is a maths teacher. he is a maths DSA mentor maths as well";
    
    vector<string> v;
    stringstream ss(s);
    string temp;

    while(ss>>temp){
        v.push_back(temp);
    }

    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    int maxcount = 1;
    int count = 1;
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]) count++;
        else count = 1;
        maxcount=max(maxcount,count);
    }

    cout<<maxcount;


  
     
    return 0;
}