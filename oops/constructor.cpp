#include<iostream>
using namespace std;

class bike{
public:
    static int noofbikes;// now this belongs to the class
    int sizeoftyre;

    // constructoer , return type always same as class, no name
    // bike (){
    //     cout<<"calling of constructor ";
    // }

    // distructor free ups memory
    // ~bike(){
    //     cout<<"distructor call hua ";
    // }
};
int bike::noofbikes=10;

int main(){
    
    bike tvs; // object creation // compiler will call constructor to allocate memory to the object tvs 
    bike royalinfielf;
    cout<<royalinfielf.noofbikes;
   
    // class is just a blue print it doesn't occupy any space in the memory , object occupy space in the 
    // memory
    // constructor is a hidden function that
    // do memory allocation
    // and intialization of object 


   

    // types of constructor
    //  defaut (but i can make my own too)
    //  parameterized cons
    //  copy constructor
        
    //  constructor is very very similar to a function
    
    // distructer is called when object goes out of scope
    
    // shallow and deep copy
    // ex we have obj 1 and obj 2
    // and obj 1 == obj 2;
    // now if we change obj1 and as a result obj2 also changes then its a shallow copy
    // but if on changing obj1 the obj2 remains same then its a deep copy
    
    
    return 0;
}