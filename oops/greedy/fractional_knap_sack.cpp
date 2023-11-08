// you are given a bagpack and items having weight w and profit p 
// you can pick the items fractionally also
// find the max profit that can be made
// just make the p/w ratio high 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool cus(pair<int,int> p1,pair<int,int> p2){
    double r1 = p1.first/p1.second;
    double r2 = p2.first/p2.second;
    return r1>r2;
}

double fractinalKsnapsack(vector<int> &profit,vector<int> &weight,int n,int W){
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        v.push_back({profit[i],weight[i]});
    }
    sort(v.begin(),v.end(),cus);
    double result = 0;
    for(int i=0;i<n;i++){
        if(v[i].second<W){
            result += v[i].first;
            W -= v[i].second;
        }
        else{
            result += (v[i].first/v[i].second)*W;
            W = 0;
            break;
        }
    }
    return result;

}

int main(){
    vector<int> profit = {60,100,120};
    vector<int> weight = {10,20,30};
    int W = 50;
    int n = 3; // num of items
    cout<<fractinalKsnapsack(profit,weight,n,W);


    return 0;
}