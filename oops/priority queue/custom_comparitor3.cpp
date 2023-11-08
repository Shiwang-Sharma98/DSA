// but if want to make custom comparitor in priority queue then we have to use a class not 
// a function as queue is data structure and sort is an algo
// in that class we have to use operator over loading
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class customComparator{
public :
    bool operator()(int a,int b){
        return a>b;
    }
};

int main(){

    priority_queue<int,vector<int>,customComparator> pq;
    pq.push(3);
    pq.push(4);
    pq.push(5);
    pq.push(6);
    pq.push(7);
    cout<<pq.top();



    return 0;
}