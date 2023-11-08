// min cost to cut a board into sq
// a board of len m and weidth n is given. the task is to break this board into m*n sq such
// that the cost of breaking is min . the cutting cost for each edge will be given for the 
// board in two arr X and arrY . in short you need to choose such a seq of cutting
// such that the cost is minimized return the min cost
// ex
// M = 6 N = 4
// x[] = {2,1,3,1,4}
// y[] = {4,1,2}
// output = 42
// hint or remember --> total cost = total cost + edge cost * total pieces
//points
// 1 -> if we have devided the grid in rectangles and a cut later will be done on multiple rec
// then cost of the cut should be comsidered on each rec
// 2 -> vertical cuts inc horiz blocks
//      horiz cut inc vertical blocks
// ans ---> initially the no of pieces are less so apply the max cost cuts on them
#define ll long long int
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool cmp(int x,int y){
    return x>y;
}

ll minCostToBreakGrid(int n,int m,vector<ll> &X,vector<ll> &Y){
    sort(X.begin(),X.end(),cmp);
    sort(Y.begin(),Y.end(),cmp);
    int hr = 1; // no of horizontal box
    int vr = 1; // no of vertical box
    int h = 0;
    int v = 0;
    ll ans = 0;
    while(h<Y.size() && v<X.size()){
        if(X[v]>Y[h]){
            ans += X[v]*vr;
            hr++;

            v++;
        }
        else{
            ans += Y[h]*hr;
            vr++;

            h++;
        }
    }
    while(h<Y.size()){
        ans += Y[h]*hr;
        vr++;

        h++;
    }
    while(v<X.size()){
        ans += X[v]*vr;
        hr++;

        v++;
    }
    return ans;
}

int main(){
    
    int n,m;
    cin>>m>>n;
    vector<ll> X,Y;
    for(int i=0;i<m-1;i++){
        int ele;
        cin>>ele;
        Y.push_back(ele);
    }
    for(int i=0;i<n-1;i++){
        int ele;
        cin>>ele;
        X.push_back(ele);
    }
    cout<<minCostToBreakGrid(n,m,X,Y);

    return 0;
}