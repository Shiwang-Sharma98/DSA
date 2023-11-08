#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n;
    cin>>n;


    // int a=1;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i;j++){
    //         cout<<" ";
    //     }
    //     for(int k=1;k<=a;k++){
    //         cout<<k;
    //     }
    //     a+=2;
    //     cout<<endl;
    // }

    int a=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=a;k++){
            cout<<char(k+64);
        }
        a+=2;
        cout<<endl;
    }

    



    

    return 0;
}