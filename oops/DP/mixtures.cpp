//   https://www.spoj.com/problems/MIXTURES/
#include<iostream>
#include<vector>
#include<climits>
#include<cstring>
#define ll long long int
using namespace std;
ll dp[105][105];
ll g(vector<int> &color,int i,int j){
    ll result = 0;
    for(int m = i;m<=j;m++){
        result = (result%100 + color[m]%100)%100;
    }
    return result;
}

ll f(vector<int> &color,int i,int j){
    if(i==j) return dp[i][j] = 0;
    if(dp[i][j]!=-1) return dp[i][j];
    ll ans = INT16_MAX;
    for(int k = i;k<j;k++){
        ans = min(ans,f(color,i,k)+f(color,k+1,j)+g(color,i,k)*g(color,k+1,j));
    }
    return dp[i][j] = ans;
}

int main(){
    int n;
    while(cin>>n){
        
        vector<int> color(n);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            color.push_back(x);

        }
        memset(dp,-1,sizeof dp);
        cout<<f(color,0,color.size()-1)<<endl;
        color.clear();
    }
    return 0;
}