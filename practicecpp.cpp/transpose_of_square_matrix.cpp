#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n,m;
    cin>>m>>n;

    vector<vector<int>> v(n,vector<int> (m));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    cout<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<=i-1;j++){
            swap(v[i][j],v[j][i]);
        }
    }
    cout<<endl;
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}