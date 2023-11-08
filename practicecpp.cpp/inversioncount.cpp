#include<iostream>
#include<vector>
using namespace std;
int count = 0;
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


int inversion(vector<int> a,vector<int> b){
    int c = 0;
    int i=0;
    int j=0;

    while(i<a.size() && j<b.size()){
        if(a[i]>b[j]){
        c += (a.size()-i);
            j++; 
        }
        else{
            i++;
        }
    }
    return c;

}



void merge(vector <int> &v,int l,int r){
    if(l>=r) return;
    int mid = (l+r)/2;
    
    int an = mid-l+1;
    int bn = r-mid;

    vector<int> a(an);
    vector<int> b(bn);

    for(int i=0;i<an;i++){
        a[i]=v[i];
    }

    for(int j=0;j<bn;j++){
        b[j]=v[mid+1+j];
    }
    merge(v,l,mid);
    merge(v,mid+1,r);
    count += inversion(a,b);
    mergesort(v,l,mid,r);
    a.clear();
    b.clear();
}


int main(){

    int arr[]={5,1,3,0,4,9,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);

    

    merge(v,0,v.size()-1);
    cout<<count;
    


    return 0;
}