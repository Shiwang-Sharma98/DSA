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

void bfs(int src,int dest, vector<int> &dist){
    queue<int> q;
    visited.clear();
    dist.resize(v,INT16_MAX);
    dist[src] = 0;
    q.push(src);
    visited.insert(src);
    while(q.size()>0){
        int curr = q.front();
        q.pop();
        for(auto neighbour : graph[curr]){
            if(visited.find(neighbour)==visited.end()){
                q.push(neighbour);
                visited.insert(neighbour);
                dist[neighbour] = dist[curr] + 1;
            }
        }
    }
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
    int x,y;
    cin>>x>>y;
    vector<int> dist;
    bfs(x,y,dist);
    for(int i=0;i<dist.size();i++){
        cout<<dist[i]<<" ";
    }
    
    return 0;
}