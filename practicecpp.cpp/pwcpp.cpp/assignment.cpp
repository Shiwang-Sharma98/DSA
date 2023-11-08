#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;

int main(){
    
    // write a program to check weather the no is prime or not

    // int n;
    // cin>>n;
    // bool ans = true;
    // for(int i=2;i<=n-1;i++){
    //     if(n%i==0){
    //         ans=false;
    //         break;
    //     }
    // }
    // if(ans==false) cout<<" given no is composite";
    // else cout<<" given no is prime";


    // pattern

    // int n;
    // cin>>n;

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i;j++){
    //         cout<<" ";
    //     }
    //     for(int k=0;k<n;k++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }


    // WAP to find the smallest missing positive element in the sorted Array that contains only
    //positive elements.


    // int n;
    // cin>>n;

    // vector<int> v(n);

    // for(int i=0;i<n;i++){
    //     cin>>v[i];
    // }
    // bool flag = false;
    // for(int i=0;i<n-1;i++){
    //     if(v[i+1]-v[i]!=1){
    //         cout<<"the missing ele is :";
    //         cout<<v[i]+1;
    //         flag=true;
    //     }
    // }
    // if (flag == false)cout<<"no missing ele";


    // WAP to find the largest three elements in the array.

    // int arr[5]={10,3,1,21,10};
    // int max, max2, max3;
    // max3 = max = max2 = INT16_MIN;
    // for(int i = 0; i < 5; i++){
    //     if (arr[i] > max){
    //     max3 = max2;
    //     max2 = max;
    //     max = arr[i];
    // }
    // else if (arr[i] > max2 && arr[i]!=max){
    //     max3 = max2;
    //     max2 = arr[i];
    // }
    // else if (arr[i] > max3 && arr[i]!=max2 && arr[i]!=max)
    //     max3 = arr[i];
    // }
    // cout<<endl<<"Three largest elements of the array are "<<max<<", "<<max2<<" "<<max3;

    string s;
    getline(cin,s);

    stringstream ss(s);
    string temp;

    vector<string> v;

    while(ss>>temp){
        v.push_back(temp);
    }

    sort(v.begin(),v.end());



   
    
    return 0;



}