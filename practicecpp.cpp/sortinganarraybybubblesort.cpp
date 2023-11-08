#include<iostream>
#include<vector>
using namespace std;

int minimum(vector<int> &v){

    int min=INT16_MAX;
    int minindex= -1;
   for(int i=0;i<v.size();i++){
        if(v[i]<min){
            min=v[i];
            minindex=i;
        }     
    }
    v[minindex]=INT16_MAX;
    return min;

}


void sorting(vector<int> &v){
    vector<int> ans(v.size());
    for(int i=0;i<ans.size();i++){
    ans[i]=minimum(v);
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}


void bubblesort(vector<int> &v){
    
    int n= v.size();
    for(int i=0;i<n-1;i++){
        bool flag = false;
        for(int j=0;j<n-1-i;j++){
            if(v[j]>v[j+1]){
                flag = true;
                swap(v[j],v[j+1]);
            }
        }
        if(flag==false){
            break;
        }
    }
    return;

}

int main(){
    
    int n;
    cin>>n;
    vector<int> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

   // sorting(v);

   // bubble sort method
   // crucks of bubble swap is ---> repeatedly swap two adjacent elements if in wrong order 

   bubblesort(v);

   for(int i=0;i<n;i++){
    cout<<v[i]<<"  ";
   }

    return 0;
}