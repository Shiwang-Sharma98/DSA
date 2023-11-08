#include<iostream>
#include<vector>
using namespace std;

void nextper(vector<int> &v){
    int idx= -1;
        int n = v.size();
        for(int i=n-2;i>=0;i--){
            if(v[i]<v[i+1]){
                idx=i;
                break;
            }
        }
        int a = idx;
        
        while(n-1>a){
            swap(v[a+1],v[n-1]);    
            
            a++;
            n--;
        }

        swap(v[idx+1],v[idx]);


    // int idx= -1;
    //     int n = nums.size();
    //     for(int i=n-2;i>=0;i--){
    //         if(nums[i]<nums[i+1]){
    //             idx=i;
    //             break;
    //         }
    //     }
    //     if(idx==-1){
    //         reverse(nums.begin(),nums.end());
    //     }
        
    //     reverse(nums.begin()+idx+1,nums.end());
    //     int temp = nums[idx];
    //     nums[idx] = nums[idx+1];
    //     nums[idx+1] = temp;
        

    
        
}


int main(){
    
    int n;
    cin>>n;
    vector<int> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    nextper(v);
    for(int i=0;i<n;i++){
        cout<<v[i];
    }


    return 0;
}