#include<iostream>
#include<vector>
using namespace std;

class MaxHeap{
public:
    vector<int> hp;
    void downHeapify(int idx){
        while(idx < hp.size()){
            int lc = 2*idx+1;
            int rc = 2*idx+2;
            if(lc >= hp.size()) break;
            int maxEl = idx;
            if(hp[lc]>hp[maxEl]){
                maxEl = lc;
            }
            if(rc < hp.size() && hp[rc]>hp[maxEl]){
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
        for(int i=0;i<hp.size();i++){
            cout<<hp[i]<<" ";
        }
        cout<<"]";
        cout<<endl;
    }
    MaxHeap(vector<int> v){
        hp = v;
        int n = hp.size();
        for(int i=n/2;i>=0;i--){
            downHeapify(i);
        }
    }

};

int main(){
    
    // method 1 --> sort the given array and it will take the form of a max heap
    // every sorted array is a max heap but every max heap is not a sorted array
    // the time complexicity of method 1 is nlog(n);
    // we need to optimize it
    // method 2 --> at any point of time region of the array which is a valid heep is [0,i]
    // but as we know that the in this half of the nodes are leaf nodes so they have to travel 
    // log(n)
    // this can be optimized by down heapification(on the nodes above leaf nodes) 
    // so that the max nodes do not have to travel
    // in this the time complexicity is of the order of n
    vector<int> v = {9,6,1,19,3,2,8,12,5,100};
    MaxHeap hp(v);  
    hp.display();


    return 0;
}