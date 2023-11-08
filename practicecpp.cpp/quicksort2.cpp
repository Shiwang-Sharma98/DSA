#include<iostream>
using namespace std;
int partition(int arr[],int st,int en){
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

void quicksort( int arr[],int st,int en){
    if(st>=en) return;
    int pivotidx = partition(arr,st,en);
    quicksort(arr,st,pivotidx-1);
    quicksort(arr,pivotidx+1,en);
}



int main(){

    int arr[]={6,50,44,-8,3,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}