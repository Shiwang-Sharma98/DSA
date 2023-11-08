#include<vector>
#include<iostream>
using namespace std;

void sprialprint(vector<vector<int>> &v){

    int top = 0;
    int bottom = v.size()-1;
    int left = 0;
    int right = v[0].size()-1;
    int direction = 0;

    while(right>=left && bottom>=top){

        if(direction==0){
            for(int i=left;i<=right;i++){
                cout<<v[top][i]<<" ";
            }
            top++;

        }

        if(direction==1){
            for(int i=top;i<=bottom;i++){
                cout<<v[i][right]<<" ";                        
            }
            right--;
        }

        if(direction==2){
            for(int i=right;i>=left;i--){
                cout<<v[bottom][i]<<" ";
            }
            bottom--;
        }
        
        if(direction==3){
            for(int i=bottom;i>=top;i--){
                cout<<v[i][left]<<" ";                        
            }
            left++;
        }
        direction++;
        direction=direction%4;
    }
}


int main(){
    
    int n,m;
    cin>>n>>m;

    vector<vector<int>> v(n,vector<int> (m));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }

    sprialprint(v);
    


    return 0;
}