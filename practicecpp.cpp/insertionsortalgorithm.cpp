#include<vector>
#include<iostream>
using namespace std;

void insertsort(vector<int> &v){
   int n= v.size();
   for(int i=0;i<n;i++){
    int j=i;
    while(j>=1){
        if(v[j]>=v[j-1]) break;
        else{
            swap(v[j],v[j-1]);
            j--;
        }
    }

   }

}


int main(){

    // repeatedly take ele from unsorted subarray and insert in sorted subarray

    int n;
    cin>>n;

    vector<int> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }    

    insertsort(v);

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}