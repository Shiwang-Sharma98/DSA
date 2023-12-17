#include<iostream>
#include<vector>
using namespace std;

int ans;

bool canGo(vector<vector<int>>&grid,int i,int j,int n){
    return i>=0 && j>=0 && i<n && j<n && grid[i][j]==0;
}

void f(vector<vector<int>>&grid,int i,int j,int n){
    if(i==n-1 & j==n-1){
        ans++;
        return;
    }

    grid[i][j] = 2;// means visited

    if(canGo(grid,i-1,j,n)==true){
        f(grid,i-1,j,n);
    }
    if(canGo(grid,i+1,j,n)==true){
        f(grid,i+1,j,n);
    }
    if(canGo(grid,i,j-1,n)==true){
        f(grid,i,j-1,n);
    }
    if(canGo(grid,i,j+1,n)==true){
        f(grid,i,j+1,n);
    }
    grid[i][j]=0;
}

int ratInMaze(vector<vector<int>>&grid,int n){
    ans = 0;
    f(grid,0,0,n);
    return ans;
}

int main(){
    vector<vector<int>> grid={
        {0,0,1,0,0,1,0},
        {1,0,1,1,0,0,0},
        {0,0,0,0,1,0,1},
        {1,0,1,0,0,0,0},
        {1,0,1,1,0,1,0},
        {1,0,0,0,0,1,0},
        {1,1,1,1,0,0,0}
    };
    cout<<ratInMaze(grid,7);
    return 0;
}