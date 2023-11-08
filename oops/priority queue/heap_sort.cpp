#include<iostream>
#include<vector>
using namespace std;

class MaxHeap{
public:
    vector<int> hp;
    int i; // [0,i] it shows which part is a heap
    void downHeapify(int idx, int bound){
        while(idx < hp.size()){
            int lc = 2*idx+1;
            int rc = 2*idx+2;
            if(lc >= bound) break;
            int maxEl = idx;
            if(hp[lc]>hp[maxEl]){
                maxEl = lc;
            }
            if(rc < bound && hp[rc]>hp[maxEl]){
                maxEl = rc;
            }
            if(maxEl != idx){
                swap(hp[maxEl],hp[idx]);
                idx = maxEl; // for next traversal
            }
            else break;
        }
    }
    void display(){
        cout<<"[";
        for(int j=0;j<i;j++){
            cout<<hp[j]<<" ";
        }
        cout<<"]";
        cout<<endl;
    }
    MaxHeap(vector<int> &v){
        hp = v;
        int n = hp.size();
        i = n;
        for(int j=n/2;j>=0;j--){
            downHeapify(j,i);
        }
    }
    void heapsort(){
        int sz = hp.size();
        while(sz > 0){
            int ele = 0;
            swap(hp[ele],hp[i]);
            i--;
            sz--;
            downHeapify(0,i);
        }
        cout<<"[";
        for(int j=0;j<hp.size();j++){
            cout<<hp[j]<<" ";
        }
        cout<<"]";
        cout<<endl;
    }

};

void heapsort(vector<int> &v){
    MaxHeap hp(v);
    hp.heapsort();
}

int main(){
    
    vector<int> v = {9,6,1,19,3,2,8,12,5,100};
    heapsort(v);


    return 0;
}