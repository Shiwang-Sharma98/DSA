#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class product{
public :
    int price;
    string name;

    product(int price,string name){
        this->name = name;
        this->price = price;
    }
};

// bool cus(product p1,product p2){
//     return p1.price>p2.price;
// }
// the above one will work but sir ne niche wala bola he

bool cus(const product &p1,const product &p2){
    return p1.price>p2.price;
}
int main(){
    vector<product> v;
    product p1(100,"ss");
    product p2(200,"aa");
    v.push_back(p1);
    v.push_back(p2);
    sort(v.begin(),v.end(),cus);
    for(int i=0;i<v.size();i++){
        cout<<v[i].price<<" "<<v[i].name;
        cout<<endl;
    }

    return 0;
}