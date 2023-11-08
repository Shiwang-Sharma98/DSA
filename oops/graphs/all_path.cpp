#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;

vector<list<int>> graph;
unordered_set<int> visited;
vector<vector<int>> result;
int v;
void add_edges(int src,int dest,bool bi_dir = true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}

void dfs(int curr,int end,vector<int> &paths){
    if(curr == end){
        paths.push_back(curr);
        result.push_back(paths);
        paths.pop_back();
        return;
    } 
    paths.push_back(curr);
    visited.insert(curr);
    for(auto neighbour : graph[curr]){
        if(visited.find(neighbour)==visited.end()){
            dfs(neighbour,end,paths);
        }
    }
    paths.pop_back();
    visited.erase(curr);
    return;
}

void all_path(int src,int dest){
    vector<int> v;
    dfs(src,dest,v);
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
    all_path(x,y);
    for(auto ele : result){
        for(auto path : ele){
            cout<<path<<" ";
        }
        cout<<endl;
    }
    return 0;
}