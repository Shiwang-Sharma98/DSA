#include<iostream>
#include<vector>
using namespace std;

void incresingorder(int n){
    if(n<1) return;
    incresingorder(n-1);
    cout<<n<<" ";
}

void multiple(int n,int k){
    if(k==0) return ;
    multiple(n,k-1);
    cout<<k*n<<" ";
}




int main(){
    // given a number n. find the increasing seq from 1 to n without using any loop

    //     int n;
    //     cin>>n;

    //    incresingorder(n);

    // given a number num and a value k. print k multiples of num

    // int n,k;
    // cin>>n>>k;

    // multiple(n,k);

    // given a number n. find the sum of natural num till n but with alternate signs

    // given an array of n integers and a target value x. print weether x exit in the array or not

    int n;
    cin>>n;
    vector<int> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }




    return 0;
}