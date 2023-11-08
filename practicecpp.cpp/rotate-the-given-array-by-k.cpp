#include<iostream>
#include<vector>
using namespace std;

int main(){
    // rotate the given array a by k steps , where k is non-negative 
   // note:k can be greater than n as well where n is the size of array a


    // method 1
   cout<<"give the size of array";
    int n;
    cin>>n;

    vector<int> v(n);
    cout<<"enter the array";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<"give the value of k:";
    int k;
    cin>>k;
    k=k%n;
    int array[n];
    int j=0;
    for(int i=n-k;i<n;i++){
        array[j++]=v[i];
    }

    for(int i=0;i<=k;i++){
        array[j++]=v[i];
    }

    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }


    // method 2 // without using an extra array // by using reverse operation of vectors
    cout<<"give the size of array";
    int n;
    cin>>n;

    vector<int> v(n);
    cout<<"enter the array";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<"give the value of k:";
    int k;
    cin>>k;
    k=k%n;

    // reverse(v.begin(),v.end())
    // reverse(v.begin(),v.begin()+k)
    // reverse(v.begin()+k,v.end())
    // cout<<the array would be reversed


    return 0;
}