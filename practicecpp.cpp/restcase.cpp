#include<iostream>
using namespace std;

int main(){
    int height[]={0,1,0,2,1,0,1,3,2,1,2,1};
    int n=12;
    
     int last[n];
        last[n-1]=-1;
        int max = height[n-1];
        for(int i=n-2;i>=0;i--){
            last[i]=max;
            if(height[i]>max) max=height[i];
        }

    for(int i=0;i<n;i++){
        cout<<last[i]<<" ";
    }


    return 0;
}