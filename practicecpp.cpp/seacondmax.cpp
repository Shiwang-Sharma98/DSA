#include<iostream>
#include<vector>
using namespace std;

int seacondlargestele(vector<int> &v){

    int max=    INT16_MIN;
    int smax=   INT16_MIN;

    for(int i=0;i<v.size();i++){
        if(v[i]>max){
            max=v[i];
        }
    }

    for(int i=0;i<v.size();i++){
        if(v[i]>smax && v[i]!=max){
            smax=v[i];
        }
    }

    return smax;

}

int main(){

    int n;
    cin>>n;

    vector<int> v(n);
    cout<<"give the array";
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }

    cout<<"check the array";
    for(int j=0;j<v.size();j++){
        cout<<v[j]<<" ";
    }
    cout<<endl;
    cout<<"the seacond largest ele is : ";
    int a = seacondlargestele(v);
    cout<<a;
    return 0;
}