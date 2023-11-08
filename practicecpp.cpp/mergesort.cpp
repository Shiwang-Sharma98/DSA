#include<iostream>
#include<vector>
using namespace std;

void mergesort(vector<int> &v,int l,int mid,int r){

    int an = mid-l+1;
    int bn = r-mid;

    vector<int> a(an);
    vector<int> b(bn);

    for(int i=0;i<an;i++){
        a[i]=v[l+i];
    }

    for(int j=0;j<bn;j++){
        b[j]=v[mid+1+j];
    }

    int i=0;
    int j=0;
    int k=l;

    while( i<an && j<bn){
        if(a[i]<b[j]){
            v[k++]=a[i++];
        }
        else{
            v[k++]=b[j++];
        }


    }

    while(i<an){
        v[k++]=a[i++];
    }
    while(j<bn){
        v[k++]=b[j++];
    }



}






void merge(vector <int> &v,int l,int r){
    int mid = (l+r)/2;
    if(l>=r) return;
    merge(v,l,mid);
    merge(v,mid+1,r);
    mergesort(v,l,mid,r);

}


int main(){

    int n;
    cin>>n;

    vector<int> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    merge(v,0,v.size()-1);

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }


    return 0;
}