#include<iostream>
#include<vector>
using namespace std;

void squarevector(vector<int> v){

    vector<int> ans(v.size());
    int i=0;
    int j=v.size()-1;
    int k=0;

    while(j>i){

        if(abs(v[i])>abs(v[j])){
            ans[k]=v[i]*v[i];
            k++;
            i++;
        }

        else if(abs(v[i])<abs(v[j])){
            ans[k]=v[j]*v[j];
            k++;
            j--;
        }

        else{
            v[k]=v[j]*v[j];
            j--;
            k++;
        }
        

    }

    int leftp1=0;
    int rightp1=ans.size()-1;
    while(rightp1>leftp1){
        swap(ans[rightp1],ans[leftp1]);
        leftp1++;
        rightp1--;
    }

    



}


int main(){

    // int n,m;
    // cin>>n>>m;

    // vector<int> a(n);
    // vector<int> b(m);
    // vector<int> ans(m+n);

    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    // }

    // for(int j=0;j<m;j++){
    //     cin>>b[j];
    // }

    // int x = 0;
    // int y = 0;
    // int z = 0;

    // while( x<n && y<m){
    //     if(a[x]>b[y]){
    //         ans[z]=b[y];
    //         z++;
    //         y++;
    //     }
    //     if(a[x]==b[y]){
    //         ans[z]=b[y];
    //         z++;
    //         y++;
    //     }
    //     else{
    //         ans[z]=a[x];
    //         z++;
    //         x++;
    //     }
        
    // }

    // while(x<n){
    //     ans[z]=a[x];
    //     x++;
    //     z++;
    // }

    // while(y<m){
    //     ans[z]=b[y];
    //     y++;
    //     z++;
    // }


    // for(int i=0;i<m+n;i++){
    //     cout<<ans[i]<<" ";
    // }


    int n;
    cin>>n;

    vector<int> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    squarevector(v);

    return 0;
}