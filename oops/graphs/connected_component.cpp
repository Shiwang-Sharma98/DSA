#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;

vector<list<int>> graph;
int v;
void add_edges(int src,int dest,bool bi_dir = true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}

void dfs(int node,unordered_set<int>& visited){
    visited.insert(node);
    for(auto neigh : graph[node]){
        if(visited.find(neigh)==visited.end()){
            dfs(neigh,visited);
        }
    }
}

int cc(){
    int result = 0;
    unordered_set<int> visited;
    for(int i=0;i<v;i++){
        if(visited.find(i)==visited.end()){
            result++;
            dfs(i,visited);
        }
    }
    return result;
}

int main(){
    cin>>v;
    graph.resize(v,list<int> ());
    int e;
    cin>>e;
    while(e--){
        int s,d;
        cin>>s>>d;
        add_edges(s,d);
    }
    cout<<cc()<<endl;
    return 0;
}