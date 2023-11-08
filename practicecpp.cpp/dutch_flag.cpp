#include<iostream>
#include<vector>
using namespace std;

void swap1(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}


void sort(vector<int> &v){
    int low = 0;
    int mid = 0;
    int hi = v.size()-1;

    while(mid<=hi){
        if(v[mid]==2){
            swap1(v[mid],v[hi]);
            hi--;
        }
        else if (v[mid]==0){
            swap1(v[mid],v[low]);
            low++;
            mid++;
        }
        else if (v[mid]==1){
            mid++;
        }
    }
}


int main(){
    // sort the array of 0s,1s,2s 
    // 2 0 2 1 1 0
    // ans 0 0 1 1 2 2

    int n;
    cin>>n;

    vector<int> v;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    sort(v);
     for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;

}