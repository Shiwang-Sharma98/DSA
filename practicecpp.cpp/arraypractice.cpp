#include<iostream>
#include<vector>
using namespace std;




int main(){

    // find the total no of pairs in the array whose sum is equal to the given value x

    // cout<<"give the size of array";
    // int n;
    // cin>>n;

    // vector<int> v(n);
    // cout<<"enter the array";
    // for(int i=0;i<n;i++){
    //     cin>>v[i];
    // }
    // cout<<"check the array";
    // for(int j=0;j<n;j++){
    //     cout<<v[j]<<" ";
    // }
    // cout<<endl;
    // cout<<"enter the target sum "<<endl;
    // int targetsum;
    // cin>>targetsum;
    // int ans=0;


    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(v[i]+v[j]==targetsum){
    //             ans++;
    //         }
    //     }
    // }
    // cout<<ans;


    // count the no of triplets whose sum is equal to the given no x

    // cout<<"give the size of array";
    // int n;
    // cin>>n;

    // vector<int> v(n);
    // cout<<"enter the array";
    // for(int i=0;i<n;i++){
    //     cin>>v[i];
    // }

    // int targetsum;
    // cin>>targetsum;
    // int ans=0;

    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         for(int k=j+1;k<n;k++){
    //             if(v[i]+v[j]+v[k]==targetsum){
    //                 ans++;
    //             }
    //         }
    //     }
    // }
    // cout<<ans<<endl;


    // find the unique no in a given array where all the ele are being repeated twice with one value being unique
    // hint --->  replace by -1 and traverse the array again


   // rotate the given array a by k steps , where k is non-negative 
   // note:k can be greater than n as well where n is the size of array a



    // given q queries check if the given number is present in the array or not


    int n;
    cin>>n;

    vector <int> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    const int N = 1e5 + 10;
    vector <int> freq(N,0);

    for(int i=0;i<n;i++){
        freq[v[i]]++;
    }

    cout<<"enter the queries";
    int q;
    cin>>q;

    while(q>0){
        int queryelement;
        cin>>queryelement;
        cout<<freq[queryelement];
        q--;
    }









    





    

    return 0;
}