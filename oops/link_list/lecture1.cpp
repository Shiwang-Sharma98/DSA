#include<iostream>
using namespace std;

class Student {
public:
    string name;
    int rln;
    float marks;
    Student(string name,int rln,float marks){
        this->name = name;
        this->marks = marks;
        this->rln = rln;
    }
};

int main(){
    // assigning a object by using pointers

    Student *s = new Student("harsh",23,93.2);
    cout<<s->marks<<endl;
    cout<<s->rln<<endl;



    return 0;
}