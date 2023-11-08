// ds --> unordered_map, priority_queue<pair>, visited set
// 
// insert the pair<-1,src> in the priority queue
// one by one remove the root ele of the pq
// if the root is already visited then continue
// we mark the root visited 
// we store the wt of the pair in the ans
// update the mapping and go to every neighbour of the curr ele, and only add those 
// which are non visited and have a better wt proposition

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

ll prims(int src,int n){
    priority_queue<pp,vector<pp>,greater<pp>> pq;
    unordered_set<int> vis;
    unordered_map<int,int> m;
    vector<int> parent(n+1);
    for(int i=1;i<=n;i++){
        m[i]=INT16_MAX;
    }
    pq.push({0,src});
    m[src] = 0;
    //vis.insert(src);
    int Total_count = 0; // 0-->n-1
    ll ans = 0;
    while(Total_count<n && pq.size()>0){
        pp curr = pq.top();
        if(vis.find(curr.second)!=vis.end()){
            pq.pop();
            continue;   
        }
        vis.insert(curr.second);
        Total_count++;
        ans += curr.first;
        pq.pop();
        for(auto neighbour : graph[curr.second]){
            if((vis.find(neighbour.first)==vis.end()) && m[neighbour.first]>neighbour.second){
                pq.push({neighbour.second,neighbour.first});
                parent[neighbour.first] = curr.second;
                m[neighbour.first] = neighbour.second;
            }
        }
    }
    return ans;
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
    cout<<prims(src,n);
    return 0;
}