#include<iostream>
using namespace std;

class a{
    public:     // it can be inherited as well as can be accessed;
     int a_ka_public;
    private:    // it can neither be inherited nor be accessed; 
     int a_ka_public; 
    protected:  // it can be inherited;
     int a_ka_protected; 
   
};

class b : public a{
    public:
     int b_ka_public;
};


int main(){
    a A;
    b B;
    B.b_ka_public = 10;
    B.a_ka_public = 12;

    

    return 0;
}