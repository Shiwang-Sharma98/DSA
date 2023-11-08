#include<iostream>
#include<vector>
using namespace std;


int partition (vector<int> &v,int first,int last){

    int pivot = v[last];
    int i = first-1;
    int j = first;

    for(;j<last;j++){
        if(v[j]<pivot){
            i++;
            swap(v[i],v[j]);
        }
    }
    swap(v[i+1],v[last]);
    return i+1;

}




void quicksort(vector<int> &v,int first,int last){

    if(first>=last) return;

    int pi = partition(v,first,last);
    quicksort(v,first,pi-1);
    quicksort(v,pi+1,last);



}


int main(){
    
    int n;
    cin>>n;

    vector<int> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    quicksort(v,0,n-1);


    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}