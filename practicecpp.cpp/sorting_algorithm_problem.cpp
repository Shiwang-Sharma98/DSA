#include<iostream>
#include<vector>
using namespace std;

void sorting(vector<int> &v){
    int n=v.size();
    for(int i=n-1;i>=0;i--){
        int j=0;
        bool flag = false;

        while(j!=i){
            if(v[j]==0 && v[j+1]!=0){
                swap(v[j],v[j+1]);
                flag=true;
            }
            j++;
        }
        if(!flag) break;
    }
    return;
}


int main(){

    // given an integer array arr, move all 0s to the end of it while maintaining the relative order 
    // of the non-zero ele

    // int n;
    // cin>>n;

    // vector<int> v(n);

    // for(int i=0;i<n;i++){
    //     cin>>v[i];
    // }

    // sorting(v);

    // for(int i=0;i<n;i++){
    //     cout<<v[i]<<" ";
    // }


    // given an array of names of the fruits; you are supposed to sort it in lexicographical order
    // using the selection sort

    int n;
    cin>>n;

    vector<string> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }
        for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }






    return 0;
}