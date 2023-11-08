#include<iostream>
#include<list>
using namespace std;

class book {
private :
string name;
int price;
int no_of_pages;

public :
// setter;
void set(string n,int p,int x){
    name = n;
    price = p;
    no_of_pages = x;
}
// getter
void get(){
    cout<<name<<endl;
    cout<<price<<endl;
    cout<<no_of_pages<<endl;
}


};


int main(){

    book b1;
    b1.set("ring",400,5);
    b1.get();
    list<int> ll;
    ll.push_back(4);
    ll.push_back(5);
    ll.push_back(6);
    ll.push_back(7);
    while(ll.size()>0){
        cout<<ll.front();
        ll.pop_front();
    }

    return 0;
}