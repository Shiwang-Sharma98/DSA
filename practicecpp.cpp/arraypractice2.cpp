#include<iostream>
#include<vector>
using namespace std;

void sortzerosandones(vector <int> &v){
     int leftp=0;
    int rightp=v.size()-1;

    while(rightp>leftp){
        if(v[leftp]==1 && v[rightp]==0){
            v[leftp]=0;
            v[rightp]=1;
            leftp++;
            rightp--;
        }
        else if(v[leftp]==0 && v[rightp]==1){
            leftp++;
            rightp--;
        }
        else if(v[leftp]==0 && v[rightp]==0){
            leftp++;
        }
        else if(v[leftp]==1 && v[rightp]==1){
            
            rightp--;
        }
}
}

void sortingoddandeven(vector <int> &v){
    int leftp=0;
    int rightp=v.size()-1;

    while(rightp>leftp){
        if(v[leftp]%2==1 && v[rightp]%2==0){
            swap(v[leftp],v[rightp]);
            leftp++;
            rightp--;
        }
        if(v[leftp]%2==0){
            leftp++;
        }
        if(v[rightp]%2==1){
            rightp--;
        }

    }
}

void squaringarray(vector <int> &v){
    vector<int> ans;
    int leftp= 0;
    int rightp= v.size()-1;

    while(rightp>=leftp){
        if(abs(v[leftp])<abs(v[rightp])){
            ans.push_back(v[rightp]*v[rightp]);
            rightp--;
        }
    
        else{
            ans.push_back(v[leftp]*v[leftp]);
            leftp++;
        }
        
    }

    int leftp1=0;
    int rightp1=ans.size()-1;
    while(rightp1>leftp1){
        swap(ans[rightp1],ans[leftp1]);
        leftp1++;
        rightp1--;
    }


    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}


void prifixsum(vector <int> &v){
    for(int i=1;i<v.size();i++){
        v[i]=v[i]+v[i-1];
    }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

}

bool partitionofarray(vector<int> &v){
    int total=0;
    for(int i=0;i<v.size();i++){
        total=total+v[i];
    }
    int priffix=0;
    int suffix;
    for(int i=0;i<v.size();i++){
        priffix=priffix+v[i];
        suffix=total-priffix;
        if(priffix==suffix){
            return true;
        }
    }
    return false;

} 



int main(){

    // sort an array consisting of only 0 and 1

    // int n;
    // cin>>n;

    // vector <int> v(n);

    // for(int i=0;i<n;i++){
    //     cin>>v[i];
    // }

    // sortzerosandones(v);

    // for(int i=0;i<n;i++){
    //     cout<<v[i]<<" ";
        
    // }

    // given an array of integers "a" , move all the even integers at the beginning of the array follo
    // wed by all the odd integers . the relative order of odd and even integers does not matter 
    // return any array that satisfies the condition

    // int n;
    // cin>>n;

    // vector <int> v(n);

    // for(int i=0;i<n;i++){
    //     cin>>v[i];
    // }

    // sortingoddandeven(v);

    // for(int i=0;i<n;i++){
    //     cout<<v[i]<<" ";
        
    // }

    // given an integer array "a" sorted in non-decreasing order , return an array of the squares of 
    // each number sorted in non-decreasing order

    // int n;
    // cin>>n;

    // vector<int> v(n);

    // for(int i=0;i<n;i++){
    //     cin>>v[i];
    // }

    // squaringarray(v);


    // given an integer array "a" , return the prifix sum/running sum in the same array without creating
    // a new array


    // int n;
    // cin>>n;

    // vector <int> v(n);

    // for(int i=0;i<n;i++){
    //     cin>>v[i];
    // }

    // prifixsum(v);
    


    // check if we can partiton the array into two subarrays with equal sum. more formally, check
    // that the prifix sum of a part of the array is equal to the suffix sum of the rest of the array


    // int n;
    // cin>>n;

    // vector <int> v(n);

    // for(int i=0;i<n;i++){
    //     cin>>v[i];
    // }

    // cout<<partitionofarray(v);


    // given an array of integers of size n . answer q queries where you need to print the sum of 
    // of values in a given range of indices from  L to r (both included)


    int n;
    cin>>n;

    vector <int> v(n);

    for(int i=1;i<n;i++){
        cin>>v[i];
    }
    // q=queries
    cout<<"enter the no of queries :";
    int q;
    cin>>q;    
    cout<<endl;
    while(q>0){
        cout<<"give the value of l and r :";
        int L,r;
        cin>>L>>r;
        int ans;
        for(int i=L;i<=r;i++){
            ans=ans+v[i];
        }
        cout<<ans;
    q--;

    }




    return 0;
}