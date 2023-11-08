#include<iostream>
#include<vector>
// roy and coin boxes hakerearth
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> f(n+10,0);
    int m;
    cin>>m;
    while(m--){
        int L,R;
        cin>>L>>R;
        f[L]++;
        f[R+1]--;
    }
    for(int i=1;i<f.size();i++){
        f[i] = f[i-1]+f[i];
    }
    vector<int> coins(10000005,0);
    for(int i = 0;i<=n;i++){
        coins[f[i]]++;
    }
    for(int i=coins.size()-2;i>=0;i--){
        coins[i] = coins[i] + coins[i+1];
    }
    int q;
    cin>>q;
    while(q--){
        int co;
        cin>>co;
        cout<<coins[co]<<endl;
    }

    return 0;
}