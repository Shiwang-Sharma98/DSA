#include<iostream>
#include<vector>
using namespace std;

// you are given an integer n . on each step you may select one of the digits from the number 
// how many steps are req to make the num equal to 0
// input -> 27
// output -> 5
// explanation --> 27->20->18->10->9->0

vector<int> dp;

vector<int> get_digits(int n){
    vector<int> result;
    while(n>0){
        if((n%10)!=0){
            result.push_back(n%10);
        }
        n = n/10;
    }
    return result;
}
int f(int n){
    if(n==0) return 0;
    if(n<=9) return 1;
    int ans = INT16_MAX;
    vector<int> d = get_digits(n);
    if(dp[n]!=-1) return dp[n];
    for(int i=0;i<d.size();i++){
        ans = min(ans,f(n-d[i]));
    }
    return dp[n] = ans+1;
}
int main(){
    dp.clear();
    dp.resize(1000005,-1);
    int n;
    cin>>n;
    cout<<f(n);

    return 0;
}