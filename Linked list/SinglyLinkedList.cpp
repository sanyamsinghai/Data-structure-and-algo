#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{

    public:
    int data;
    node* next;

    public:
    node(int data1){
        this -> data =data1;
        this -> next=NULL;
    }

    public:
    node(int data1,node* next1){
        this -> data = data1;
        this -> next = next1;
    }

};


int main(){

    node* node1 = new node(5,nullptr);
    cout<<node1 ->data<<endl;
    cout<<node1 ->next<<endl;

    return 0;
}