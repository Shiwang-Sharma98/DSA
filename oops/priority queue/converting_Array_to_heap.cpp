#include<iostream>
#include<vector>
using namespace std;

class MaxHeap{
public:
    vector<int> hp;
    void upHeapify(int ci){
        while(ci>0){
            int pi = (ci -1)/2;
            if(hp[pi]<hp[ci]){
                swap(hp[pi],hp[ci]);
                ci = pi;
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
        for(int i=1;i<hp.size();i++){
            upHeapify(i);
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
    vector<int> v = {9,6,1,19,3,2,8,12,5};
    MaxHeap hp(v);  
    hp.display();


    return 0;
}