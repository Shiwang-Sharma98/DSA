#include<iostream>
using namespace std;

class A{
public:
    int a_ka_public;
};

class B : virtual public A{
public:
    int b_ka_public;
};

class C : virtual public A{
public:
    int c_ka_public;
};

class D : public B,public C{
public:
    int d_ka_public;
    // so here we have a_ka_public from b as well as c
    // so to solve se below
    // or we can use virtual public A it will make only one instance of A
    void show(){
        // cout<<B::a_ka_public<<endl;
        // cout<<C::a_ka_public<<endl;
        cout<<a_ka_public<<endl;

    }
};



int main(){
    // when two instances of base class are present in derived class
    // b derives a, c derives a, and d derives b+c
    // now d has 2 instances of a
    // b derives a --> means a is the father of b



    return 0;
}