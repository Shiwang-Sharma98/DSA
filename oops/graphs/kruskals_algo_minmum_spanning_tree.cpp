#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long int  
using namespace std;

int find(vector<int> &parent,int x){
    return parent[x] = ((parent[x]==x)? x : find(parent,parent[x]));
}

void Union(vector<int> &parent,vector<int> &rank,int a,int b){
    a = find(parent,a);
    b = find(parent,b);
    if(a==b) return;
    if(rank[a]>=rank[b]){
        parent[b] = a;
        rank[a]++;
    }
    else{
        parent[a] = b;
        rank[b]++;
    }
}

class Edge{
public:
    int sr;
    int de;
    int wt;
};

bool cmp(Edge e1,Edge e2){
    return e1.wt<e2.wt;
}

ll kruskals(vector<Edge> &input,int n,int e){
    sort(input.begin(),input.end(),cmp);
    vector<int> parent(n+1);
    vector<int> rank(n+1,1);
    for(int i=0;i<=n;i++){
        parent[i] = i;
    }
    int edgeCount = 0;
    int i = 0;
    ll ans = 0;
    while(edgeCount<n-1){
        Edge curr = input[i];
        int srcPar = find(parent,curr.sr);
        int desPar = find(parent,curr.de);
        if(srcPar!=desPar){
            Union(parent,rank,srcPar,desPar);
            ans += curr.wt;
            edgeCount++;
        }
        i++;
    }
    return ans;
}

int main(){

    int n,e;
    cin>>n>>e;
    vector<Edge> v(e);
    for(int i=0;i<e;i++){
        cin>>v[i].sr>>v[i].de>>v[i].wt;
    }
    cout<<kruskals(v,n,e);

    return 0;
}