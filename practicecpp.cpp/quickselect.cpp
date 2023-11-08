#include<iostream>
using namespace std;
int partition(int arr[],int st,int en,int n){
    int pivotele = arr[(st+en)/2];
    int count = 0;
    for(int i=st;i<=en;i++){
        if(i==(st+en)/2) continue;
        if(arr[i]<=pivotele) count++;
    }
    int pivotidx = count+st;

    swap(arr[(st+en)/2],arr[pivotidx]);
    int i = st;
    int j = en;
    while(i<pivotidx && j>pivotidx){

        if(arr[i]<=pivotele) i++;
        if(arr[j]>pivotele) j--;
        if(arr[i]>pivotele && arr[j]<=pivotele ){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotidx;
}

int kthsmallest( int arr[],int st,int en,int k,int n){
  
    int pivotidx = partition(arr,st,en,n);
    int a = pivotidx+1;
    if(k==a) return arr[pivotidx];
    else if(a<k)   return  kthsmallest(arr,pivotidx+1,en,k,n);
    else  return  kthsmallest(arr,st,pivotidx-1,k,n);
    
}


int main(){
    // find the kth small ele of the array
    
    int arr[]={5,1,8,2,7,6,3,4,-8};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k = 4;
    cout<< kthsmallest(arr,0,n-1,k,n);
    
    return 0;
}