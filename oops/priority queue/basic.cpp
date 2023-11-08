#include<iostream>
using namespace std;
int main(){
    // it a type of queue which gives data on the basis of priority of the ele
    // for example we have 3 servers and the loading of the serv is s3>s2>s1
    // so server s3 is loaded hence if we direct the user to s3 it may crash hence
    // we will direct it to s1
    // using the priority queue
    // priority queue is implimented using heaps
    // heaps is a hierarcly based data structure , it is a binary tree
    // it is not a regular binary tree , instead it is a complete binary tree
    // it stores the ele such that the priority of the parent is always higher than 
    // the priority of the child
    // complete bt = it is a special bt in which all the ele uptill the 2nd lAST level
    // are full and the last level fills all the ele left to right as tight as possible
    // without leaving a spot
    // properties of complete bt
    // half of the nodes are leaf nodes
    // left child 2*i+1
    // right child 2*i+2

    return 0;
}