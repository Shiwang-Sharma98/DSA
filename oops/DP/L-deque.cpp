//       https://atcoder.jp/contests/dp/tasks/dp_l
#include<iostream>
#include<vector>
#define ll long long int
using namespace std;

vector<vector<ll>> dp;

ll f(vector<ll> &v,int i,int j){
    if(i==j) return v[i];
    if(dp[i][j]!=-1) return dp[i][j];
    return dp[i][j] = max(v[i]-f(v,i+1,j),v[j]-f(v,i,j-1));
}

int main(){
    dp.clear();
    dp.resize(3005,vector<ll>(3005,-1));
    int n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<f(v,0,n-1);
    return 0;
}