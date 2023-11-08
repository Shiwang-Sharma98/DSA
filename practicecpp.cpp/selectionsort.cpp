#include<iostream>
#include<vector>
using namespace std;

void selectionsort(vector<int> &v){
    int n=v.size();
    for(int i=0;i<n-1;i++){
        int min = INT16_MAX;
        int min_idx= -1;
        for(int j=i;j<n;j++){
            if(v[j]<min){
                min = v[j];
                min_idx=j;
            }
        }
        if(min_idx!=i){
            swap(v[i],v[(min_idx)]);
        }
    }

}


int main(){

    // repeatedly find the minimum element in unsorted array and place it at beginning

    int n;
    cin>>n;

    vector<int> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    selectionsort(v);

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }


    return 0;
}