#include<iostream>
#include<vector>
using namespace std;


int maxno_ofonesindex(vector<vector<int>> &v){

    int maxnoones=INT16_MIN;
    int maxnoonesindex= -1;
    int columns = v[0].size();

    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            if(v[i][j]==1){
                int noofones = columns - j;
                if(noofones > maxnoones){
                    maxnoones=noofones;
                    maxnoonesindex=i;
                }
                break;
            }
        }
    }

    return maxnoonesindex;

}


int maxones(vector<vector<int>> &v){
    
    int leftones = -1 ;
    int leftonesindex = -1;
    int j = v[0].size()-1;

    while(j>=0 && v[0][j]==1){
        leftones=j;
        leftonesindex=0;
        j--;
    }

    for(int i=1 ; i<v.size();i++){

        while(j>=0 && v[i][j]==1){
            leftonesindex = i;
            j--;
        }
    }

return leftonesindex;

}



int sum(vector<vector<int>> &v,int l1,int l2,int r1,int r2){
    int ans = 0;
    for(int i=r1;i<=r2;i++){
        for(int j=l1;j<=l2;j++){
        ans=ans+v[i][j];
    }
    }

    return ans;
}

int main(){
    

    // given a boolean 2d array , where each row is sorted . find the row with the max no of 1s
    // method 1
    // int n,m;
    // cin>>n>>m;

    // vector<vector<int>> v(n,vector<int>(m));

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cin>>v[i][j];
    //     }
    // }
    // int result = maxno_ofonesindex(v);
    // cout<<result;

    // method 2

//     int n,m;
//     cin>>n>>m;

//     vector<vector<int>> v(n,vector<int>(m));

//    for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>v[i][j];
//         }
//     }

//     int result = maxones(v);
//     cout<<result;




    // given a matrix of n*m and two coordinates l1,r1 and l2,r2 return the sum of rectange from l1,r1
    // to l2,r2

    // method 1

    // int n,m;
    // cin>>n>>m;
    // cout<<"give the coordinates";
    // int l1,r1,l2,r2;
    // cin>>l1>>r1>>l2>>r2;

    // vector<vector<int>> v(n,vector<int> (m));

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cin>>v[i][j];
    //     }
    // }

    // cout<<sum(v,l1,l2,r1,r2);

    // method 2

    


    return 0;
}