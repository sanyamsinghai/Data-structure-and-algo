#include<iostream>
using namespace std;

class Node{
    public:

    int data;
    Node* next=NULL;

    Node(int data){
        this->data=data;
        this->next=next;
    }

};

class stkImp{
    public:

    Node* top;
    int size=0;

    void push(int x){
        Node* newnode=new Node(x);
        newnode->next=top;
        top=newnode;
        size=size+1;
    }

    void pop(){
        Node* temp=top;
        top=top->next;
        delete temp;
        size=size-1;
    }

    int peek(){
        return top->data;
    }

    int sizeofStack(){
        return size;
    }

};

int main(){
    
    stkImp s1;

    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    cout<<"top element is : "<<s1.peek()<<endl;
    cout<<"size is : "<<s1.sizeofStack()<<endl;
    s1.pop();
    cout<<"top element is : "<<s1.peek()<<endl;
    cout<<"size is : "<<s1.sizeofStack()<<endl;


    return 0;
}