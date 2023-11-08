#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
#include<queue>
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

bool bfs(int src){
    unordered_set<int> vis;
    vector<int> parent(v,-1);
    queue<int> q;
    q.push(src);
    vis.insert(src);
    while(q.size()>0){
        int node = q.front();
        q.pop();
        for(auto neighbour : graph[node]){
            if(vis.find(neighbour)==vis.end()){
                q.push(neighbour);
                parent[neighbour] = node;
                vis.insert(neighbour);
            }
            if(vis.find(neighbour)!=vis.end() && parent[node]!=neighbour){
                return true;
            }
        }
    }
}

bool has_cycle(){
    unordered_set<int> vis;
    bool result = false;
    for(int i = 0;i<v;i++){
        if(vis.find(i)==vis.end()){
            result = bfs(i);
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