#include<iostream>
#include<vector>
using namespace std;

int firstoccurance(int arr[],int x,int n){
    int lo = 0;
    int hi = n-1;
    int idx=-1;
    while(lo<=hi){
        int mid = (lo+hi)/2;
        if(arr[mid]<x) lo = mid+1;
        else if(arr[mid]>x) hi = mid-1;
        else {
            idx=mid;
            hi = mid-1;
        }
    }
    return idx;
}

int repetedele(int arr[],int n){
    int lo = 0;
    int hi = n-1;
    while(lo<=hi){
        int mid = lo + (hi+lo)/2;
        if(arr[mid]==mid){
            if(arr[mid+1]==mid){
                return arr[mid];
            }
            else if(arr[mid-1]==mid){
                return arr[mid];
            }
        }
        else return arr[mid+1];
        
    }
}



int main(){

    // int n;
    // cin>>n;

    // vector<int> v(n);

    // for(int i=0;i<n;i++){
    //     cin>>v[i];
    // }
    // int target;
    // cin>>target;
    // bool flag = false;
    // int low=0;
    // int hi=v.size()-1;
    // while(low<=hi){
    //     int mid = (low+hi)/2;
    //     if(v[mid]<target){
    //         low=mid+1;
    //     }
    //     else if(v[mid]>target){
    //         hi=mid-1;
    //     }
    //     else{
    //         flag = true;
    //     }
    // }
    // cout<<flag;

    // given a sorted array of n ele and a target x . find the first occurance of x in the array

    // int arr[]={1,2,2,3,3,3,3,3,4,4,5,8,9};
    // int n = 13;

    // int target=4;
    
    // cout<<firstoccurance(arr,target,n);


    // find the first repeted ele

    int arr[]={1,2,3,4,5,6,6,7};
    int n=9;
    cout<<repetedele(arr,n);


    return 0;
}