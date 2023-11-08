// https://atcoder.jp/contests/dp/tasks/dp_d
#include<iostream>
#include<vector>
#include<climits>
#define ll long long int
using namespace std;

vector<vector<ll>> dp;

ll f(vector<int> wts,vector<int> val,int idx,int W){
    if(idx==val.size()) return 0;
    if(dp[idx][W]!=-1) return dp[idx][W]; 
    ll ans = INT16_MIN;
    ans = max(ans,f(wts,val,idx+1,W));
    if(W>=wts[idx]){
        ans = max(ans,f(wts,val,idx+1,W-wts[idx])+val[idx]);
    }   
    return dp[idx][W]=ans;
}

int main(){
    int n,W;
    cin>>n>>W;
    dp.clear();
    dp.resize(105,vector<ll> (100005,-1));
    vector<int> wts,val;
    for(int i=0;i<n;i++){
        int w,v;
        cin>>w>>v;
        wts.push_back(w);
        val.push_back(v);
    }
    cout<<f(wts,val,0,W);
}