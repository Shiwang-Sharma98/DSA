// now we will solve the same problem by bottom up solution
// in bottom up solution we don't have to face the problem of stack overflow
// in this no stack flow will take place
// we will solve the problem irteratively
#include<iostream>
#include<vector>
using namespace std;

vector<int> dp;

int f(int n){
    dp.clear();
    dp.resize(n+1,-1);
    dp[0] = 0;
    dp[1] = 1;
    for(int i=2;i<=n;i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}


int main(){
    int n;
    cin>>n;    
    cout<<f(n);
    return 0;
} 