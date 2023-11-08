#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;

vector<list<int>> graph;
unordered_set<int> visited;
int v;
void add_edges(int src,int dest,bool bi_dir = true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}

bool dfs(int curr,int end){
    if(curr == end) return true;
    visited.insert(curr);
    for(auto neighbour : graph[curr]){
        if(visited.find(neighbour)==visited.end()){
            bool result = dfs(neighbour,end);
            if(result==true) return true;
        }
    }
    return false;
}

bool dfs(int src,int parent,unordered_set<int> &vis){
    vis.insert(src);
    for(auto neighbour : graph[src]){
        if(vis.find(neighbour)!=vis.end() && neighbour!=parent){
            return true;
        }
        if(vis.find(neighbour)==vis.end()){
            bool res = dfs(neighbour,src,vis);
            if(res == true) return true;
        }
    }
    return false;
}

bool has_cycle(){
    unordered_set<int> vis;
    bool result = false;
    for(int i = 0;i<v;i++){
        if(vis.find(i)==vis.end()){
            result = dfs(i,-1,vis);
        }
        if(result==true) return true;
    }
    return false;
}

int main(){
    cin>>v;
    graph.resize(v,list<int> ());
    int e;
    cin>>e;
    visited.clear();
    while(e--){
        int s,d;
        cin>>s>>d;
        add_edges(s,d);
    }
    bool b = has_cycle();
    cout<<b;
    
    return 0;
}