#include<iostream>
#include<vector>
using namespace std;

vector<vector<char>> grid;

bool canplacequeen(int row,int col,int n){
    // col check
    for(int i=row-1;i>=0;i--){
        if(grid[i][col]=='Q'){
            return false;
        }
    }
    // left diagonal check
    for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--){
        if(grid[i][j]=='Q'){
            return false;
        }
    }
    // right diagonal check
    for(int i=row-1,j=col+1;i>=0 && j<n;i--,j++){
        if(grid[i][j]=='Q'){
            return false;
        }
    }
    return true;
}

void f(int row,int n){
    if(row==n){
        // we got one possible ans
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<grid[i][j];
            }
            cout<<endl;
        }
        return;
    }
    for(int col=0;col<n;col++){
        if(canplacequeen(row,col,n)){
            grid[row][col]='Q';
            f(row+1,n);
            grid[row][col]='.';
        }
    }
}

vector<vector<string>> nqueen(int n){
    grid.resize(n,vector<char>(n,'.'));
    f(0,n);
}

int main(){
    nqueen(4);
    return 0;
}