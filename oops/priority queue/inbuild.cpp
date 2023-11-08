#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> maxpq;
    maxpq.push(10);
    maxpq.push(120);
    maxpq.push(103);
    maxpq.push(104);
    maxpq.push(105);
    maxpq.push(106);
    maxpq.push(107);
    maxpq.push(13);
    // in built priority is max heap
    cout<<maxpq.top()<<endl;
    // to make minheap
    priority_queue<int,vector<int>,greater<int>> pq;
    pq.push(2);
    pq.push(3);
    pq.push(4);
    pq.push(5);
    pq.push(6);
    cout<<pq.top()<<endl;
    vector<int> v = {9,6,-1,19,3,2,8,12,5,100};
    // priority queue by pass vector
    priority_queue<int,vector<int>,greater<int>> minHeapVector(v.begin(),v.end());
    cout<<minHeapVector.top();

    return 0;
}