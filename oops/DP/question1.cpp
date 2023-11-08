// give the min steps to reduce a num to 1
// by doing following steps 
// 1--> do n-1
// 2--> do n/2 if n%2==0
// 3--> do n/3 if n%3==0
#include<iostream>
#include<vector>
#include<algorithm>
#define inf INT16_MAX
using namespace std;

vector<int> dp;

int f(int n){
    if(n==1) return 0;
    if(n==2) return 1;
    if(n==3) return 1;
    return 1 + min({f(n-1),(n%2==0) ? f(n/2) : inf,(n%3==0) ? f(n/3) : inf});
}
// top down
int ftd(int n){
    if(n==1) return 0;
    if(n==2) return 1;
    if(n==3) return 1;
    if(dp[n]!=-1) return dp[n];
    return dp[n] = 1 + min({f(n-1),(n%2==0) ? f(n/2) : inf,(n%3==0) ? f(n/3) : inf});
}
// bottom up
int bup(int n){
    dp.clear();
    dp.resize(1005,-1);
    dp[1] = 0;
    dp[2] = dp[3] = 1;
    for(int i=4;i<=n;i++){
        dp[i] = 1 + min({dp[i-1],(i%2==0) ? dp[i/2] : inf,(i%3==0) ? dp[i/3] : inf});
    }
    return dp[n];
}
int main(){
    int n;
    cin>>n;
    dp.clear();
    dp.resize(1005,-1);
    cout<<bup(n);
    return 0;
}