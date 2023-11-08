#include<iostream>
#include<vector>
using namespace std;
vector<int> h;
vector<int> dp;
int k;
int f(int i){
    if(i>=h.size()){
        return INT16_MAX;
    }
    if(i==h.size()-1){
        // last stone
        return 0;
    }
    if(dp[i]!=-1) return dp[i];
    int ans = INT16_MAX;
    for(int j=1;j<=k;j++){
        if(i+j>=h.size()) break;
        ans = min(ans,abs(h[i]-h[i+j]) + f(i+j));
    }
    return dp[i] = ans;
    
}

int main(){
    // find the min cost to reach the last stone
    int n; // n is no of stones and k is the stones he can jump on while he is on a stone 
    cin>>n>>k; 
    h.resize(n);  
    dp.resize(n,-1);
    for(int i=0;i<h.size();i++){
        cin>>h[i];
    }
    cout<<f(0);
    return 0;
}