#include<iostream>
#include<vector>
using namespace std;

vector<int> pre(vector<int> &v){
    vector<int> ans;
    ans.push_back(-1);
    int max=INT16_MIN;
    for(int i=1;i<v.size();i++){
        for(int j=0;j<i;j++){
            if(v[j]>max){
                max=v[j];
            }
        }
        ans.push_back(max);
    }
    return ans;
}


int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }



    vector<int> ans(v.size());
    ans=pre(v);

    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }

    


    return 0;
}