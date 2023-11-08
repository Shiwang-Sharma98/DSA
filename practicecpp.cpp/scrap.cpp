#include<iostream>
#include<vector>
using namespace std;


int main(){
    int n;
    cin>>n;
    vector<int> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int a =0;
    for(int i=0;i<n;i++){
        int min = INT16_MAX;
        int minidx = -1;
        for(int j=0;j<n;j++){
            if(v[j]<min && v[j]>0){
                min=v[j];
                minidx=j;
            }
        }
       
        v[minidx] = a;
        a--;
    }

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }



    return 0;
}