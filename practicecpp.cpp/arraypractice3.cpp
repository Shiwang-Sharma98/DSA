#include<iostream>
#include<vector>
using namespace std;

int main(){
    // int n;
    // cin>>n;

    // vector <int> v(n);

    // for(int i=0;i<n;i++){
    //     cin>>v[i];
    // }
    // int q;
    // cout<<"enter the no of queries :";
    // cin>>q;

    // while(q>0){
    //     int l;
    //     int r;
    //     cout<<"give the value of l and r:";
    //     cin>>l>>r;
    //     int ans=0;
    //     for(int i=l-1;i<=r-1;i++){
    //         ans=ans+v[i];
    //     }
    //     cout<<ans<<endl;
    //     q--;
    // }



    // print the plus pattern

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==n/2){
                cout<<"*";
            }
            else if(i==n/2){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            }
            cout<<endl;
        }
        return 0;
    }
    


    
