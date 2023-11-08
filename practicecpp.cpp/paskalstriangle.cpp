#include<iostream>
#include<vector>
using namespace std;

int factorial(int a){
    int ans=1;
    for(int i=1;i<=a;i++){
        ans=ans*i;
    }
    return ans;
}

int combination(int i,int k){   
    int a= factorial(i);
    int b= factorial(k)*factorial(i-k);
    int ans=a/b;
    return ans;
    
}


vector<vector<int>> paskaltriangle(int n){

    vector<vector<int>> paskal(n);

    for(int i=0;i<n;i++){
        paskal[i].resize(i+1);

        for(int j=0;j<i+1;j++){
            if(j==0 || j==i){
                paskal[i][j]=1;
            }
            else{
                paskal[i][j]=paskal[i-1][j]+paskal[i-1][j-1];
            }
        }

    }

    return paskal;

}

int main(){
    
    // method 1

    // int n;
    // cin>>n;

    // for(int i=0;i<n;i++){
        

    //     for(int k=0;k<=i;k++){
    //         cout<<combination(i,k)<<" ";
    //     }
    //     cout<<endl;
    // }

    //method 2

    int n;
    cin>>n;

    vector<vector<int>> ans(n);

    ans = paskaltriangle(n);

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    
    

    

    return 0;
}