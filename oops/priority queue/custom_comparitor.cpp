// suppose we have to compare the product in flipcart and we are using sort function 
// first of all you can pass the third function to the sort function 
// ex sort(v.begin(),v.end(),custom cum)
// the custom we tell on which basis do you want to have comparision on
// like in the above case if we want to have a comparision on the price of the product 
// then we will do so
// the inbuild comparision is done on the basis of < sign --> this means that 
// if we have a and b and a < b it will pick a , hence it will arrange things in assending order
// but if we want things in decending order then we have to pass a custom comparitor
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// this is default if a<b then it will take a hence assending order
// but for decending order we will do a>b this will take a hence decending order
// the cpp inbuild says that if you want to swap return false
// trick
// tumhe jis order me chaheye voi return kardo
// bool cus(int a,int b){
//     if(a<b) return true;
//     else return false;
// }
bool cus(int a,int b){
    return a<b; // chota pehele bada badd me
}

int main(){
    vector<int> v = {1,3,4,5,6,7,8,43,333};
    sort(v.begin(),v.end(),cus);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}