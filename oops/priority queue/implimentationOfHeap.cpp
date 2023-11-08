#include<iostream>
#include<vector>
using namespace std;
// max heap means --> larger the value more is the priority
// min heap means --> smaller the value more is the priority
// no if we want to delete the ele with most priority while maintaining the properties of max heap
// here we will swap the ele at the front and the last ele of the arr as to perform pop_back is easy
// now the left sub tree and right sub tree both are max heap but the whole tree is not an max heap
// to over come this we will compare root, root->left, root->right and swap the max with the root
// continue doing this 

// how to delete ele at any index of at any node on the tree
// ans make the value 0f that node infinty so we can upheapify it and make it a root node
// now we can easily delete the root node by pop function
class MaxHeap{
private:
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
public:
    void popAtIndex(int idx){
        hp[idx] = INT16_MAX;
        upHeapify(idx);
        pop();
    }
    void pop(){
        swap(hp[0],hp[hp.size()-1]);
        hp.pop_back();
        downHeapify(0);
    }
    void push(int ele){
        hp.push_back(ele);
        upHeapify(hp.size()-1);
    }
    bool empty(){
        if(hp.size()==0) return true;
        else return false;
    }
    void display(){
        cout<<"[";
        for(int i=0;i<hp.size();i++){
            cout<<hp[i]<<" ";
        }
        cout<<"]";
        cout<<endl;
    }
    // peek will give heighest prio ele
    int peek(){
        return hp[0];
    }

};

int main(){
    MaxHeap hp;
    hp.push(3);
    hp.push(4);
    hp.push(11);
    hp.push(9);
    hp.push(14);
    hp.push(-1);
    hp.push(30);
    hp.push(44);
    hp.push(50);
    hp.display();
    // cout<<hp.peek();
    // cout<<hp.empty();
    hp.pop();
    hp.display();
    hp.pop();
    hp.display();
    hp.popAtIndex(3);
    hp.display();




    
    return 0;
}