// if we use recursion to solve the problem of fib
// we have to calculate the same value multiple num of times
// to solve this problem we use DP
// we calculate the value only once ex f(3) in case of f(5)
// and for this problem we have to calculate the value of only n+1 functions and store it in a 
// memory and then we can reuse it from that space
// we have to remember --> f(0),f(1),f(2),f(3),f(4),f(5)
// make a resursion tree to understand more
// if we see two properties in a question them we will use DP
// 1 --> repetedly sub problem
// 2 --> optimal substructure --> if you have a optimal ans of two sub problems
//                                then you can a find a optimal solution of a 
//                                bigger sub problem , if this states true then we have
//                                a optimal structure                                   
#include<iostream>
#include<vector>
using namespace std;

vector<int> dp;

int f(int n){
    if(n==0 || n==1) return n;
    // dp check, to identify if problem was already solved earlier
    if(dp[n]!=-1) return dp[n];
    return dp[n] = f(n-1) + f(n-2); // storing ans in dp[n] and then returning dp[n]
}

int main(){
    int n;
    cin>>n;
    dp.clear();
    dp.resize(n+1,-1); // dp[i] = -1 --> that ith sub problem is not yet computed
    cout<<f(n);
    return 0;
}