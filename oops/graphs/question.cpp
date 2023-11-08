// given a undirected weighted graph along with a src and des find the shortest path bwt the src
// and des in terms of sum of edge cost
// dijkstra's algorithm

#include<bits/stdc++.h>
#define ll long long int
#define pp pair<int,int>
using namespace std;

vector<list<pp>> graph;
void add_edge(int u,int v,int wt,bool bidir = true){
    graph[u].push_back({v,wt});
    if(bidir){
        graph[v].push_back({u,wt});
    }
}

unordered_map<int,int> dijkstra(int src,int n){
    priority_queue<pp,vector<pp>,greater<pp>> pq;
    unordered_set<int> vis;
    unordered_map<int,int> m;
    vector<int> via(n+1);
    for(int i=1;i<=n;i++){
        m[i]=INT16_MAX;
    }
    pq.push({0,src});
    m[src] = 0;
    //vis.insert(src);
    while(pq.size()>0){
        pp curr = pq.top();
        if(vis.find(curr.second)!=vis.end()){
            pq.pop();
            continue;   
        }
        vis.insert(curr.second);
        pq.pop();
        for(auto neighbour : graph[curr.second]){
            if((vis.find(neighbour.first)==vis.end()) && m[neighbour.first]>m[curr.second]+neighbour.second){
                pq.push({m[curr.second]+neighbour.second,neighbour.first});
                via[neighbour.first] = curr.second;
                m[neighbour.first] =m[curr.second]+neighbour.second;
            }
        }
    }
    return m;
}

int main(){
    int n,m;
    cin>>n>>m;
    graph.resize(n+1,list<pp> ());
    while(m--){
        int u,v,wt;
        cin>>u>>v>>wt;
        add_edge(u,v,wt);
    }
    int src;
    cin>>src;
    unordered_map<int,int> sp = dijkstra(src,n);
    int dest;
    cin>>dest;
    cout<<sp[dest];
    return 0;
}