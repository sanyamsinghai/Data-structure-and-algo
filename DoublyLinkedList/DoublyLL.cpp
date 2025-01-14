#include<bits/stdc++.h>
using namespace std;

class node{

    public:
    int data;
    node* next;
    node* back;

    public:
    node(int data){
        this -> data=data;
        this -> next=nullptr;
        this -> back=nullptr;
    }

    public:
    node(int data,node* next,node* back){
        this -> data=data;
        this -> next=next;
        this -> back=back;
    }

};

//convert array to doubly linked list
node* ConvertArrDLL(vector<int> &arr){
    node* head=new node(arr[0]);
    node* prev=head;

    for(int i=1;i<arr.size();i++){
        node* temp=new node(arr[i],nullptr,prev);
        prev -> next=temp;
        prev=temp;
    }
    return head;
}

//for printing list
void print(node* head){
    node* temp=head;
    while(temp){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }cout<<endl;
}

int main(){

    vector<int>arr={1,2,4,5};
    node* head=ConvertArrDLL(arr);
    print(head);


    return 0;
}