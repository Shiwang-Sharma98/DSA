// https://atcoder.jp/contests/dp/tasks/dp_i
#include<iostream>
#include<vector>
#include<cstring>
#include<iomanip>
using namespace std;

double dp[3005][3005];

double f(vector<double> &pro,int i,int x){
    if(x==0) return 1;
    if(i==-1) return 0;
    if(dp[i][x] > -0.9) return dp[i][x];
    return dp[i][x] = f(pro,i-1,x-1)*pro[i] + f(pro,i-1,x)*(1-pro[i]);
}

int main(){
    int n;
    cin>>n;
    memset(dp,-1,sizeof dp);
    vector<double> pro(n);
    for(int i=0;i<n;i++){
        cin>>pro[i];
    }
    int x = (n+1)/2;
    cout<<fixed<<setprecision(9)<<f(pro,n-1,x);

    return 0;
}