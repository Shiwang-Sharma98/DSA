#include<iostream>
#include<vector>
using namespace std;

int sumofdigits(int n){
    int lastdigit;
    if(n<10){
        return n;
    }
    else{
        lastdigit=n%10;
        return lastdigit+sumofdigits(n/10);
    }

}

int f(int p,int q){
    if(q==0){
        return 1;
    }
    return p*f(p,q-1);
}

int f1(int p,int q){
    if(q==0){
        return 1;
    }
    if(q%2==0){
        return f1(p,q/2)*f1(p,q/2);
    }
    if(q%2!=0){
        return p*f1(p,(q-1)/2)*f1(p,(q-1)/2);
    }
}

int maxvalue(vector<int> &v,int idx=0){
    
    if(idx==v.size()-1){
        return v[idx];
    }

    return max(v[idx],maxvalue(v,idx+1));
    

}

int sumofarray(vector<int> v,int idx=0){

    if(idx==v.size()-1){
        return v[idx];
    }
    return v[idx]+sumofarray(v,idx+1);

}

string remove__a(vector<string> &s,int idx=0){

    if(idx==s.size()){
        return "";
    }
    
    if(s[idx]=="a"){
        return " "+remove__a(s,idx+1);
    }
    return s[idx]+remove__a(s,idx+1);


}









int main(){

    // given an integer , find out the sum of its digits using recusion
    // int n;
    // cin>>n;

    // int a= sumofdigits(n);
    // cout<<a;

    // given two numbers p and q , find the value p power q using recursive function
    // method 1(f)
    // int p,q;
    // cin>>p>>q;
    // cout<<f(p,q);

    // method 2(f1)
    // int p,q;
    // cin>>p>>q;
    // cout<<f1(p,q);


    // print the max value of the array using recursion
    //     int n;
    //     cin>>n;

    //     vector<int> v(n);

    //     for(int i=0;i<n;i++){
    //         cin>>v[i];
    //     }

    //    cout<<maxvalue(v);


    // sum of the array

    // int n;
    // cin>>n;

    // vector<int> v(n);

    // for(int i=0;i<n;i++){
    //     cin>>v[i];
    // }

    // cout<<sumofarray(v);


    // remove all the occurnces of a from string s= "abcax"

    // int n;
    // cin>>n;

    // vector<string> s(n);

    // for(int i=0;i<n;i++){
    //     cin>>s[i];
    // }

    // for(int i=0;i<n;i++){
    //     cout<<s[i]<<" ";
    // }

    // remove__a(s);


    // check weather the no. is palamdrome or not 

    // do from video


    




    return 0;
}