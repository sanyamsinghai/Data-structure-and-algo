#include<iostream>
using namespace std;

class Stack{
    public:
    int top;
    int arr[1000];

    Stack(){
        top=-1;
    }

    void push(int x){
        if(top>=999){
            cout<<"overflow";
        }
        else{
            top++;
            arr[top]=x;
        }
    }

    int pop(){
        if(top==-1){
            cout<<"empty stack";
            return 0;
        }
        return arr[top--];
    }

    int TOP(){

        if(top==-1){
            return 0;
        }

        return arr[top];
    }

    int size(){
        return top+1;
    }

};

int main(){

    Stack s1;
    s1.push(10);
    s1.push(1);
    s1.push(10);
    s1.push(5);
    s1.push(19);

    cout<<"top element is : "<<s1.TOP()<<endl;
    cout<<"poped element is : "<<s1.pop()<<endl;
    cout<<"top element is : "<<s1.pop()<<endl;
    cout<<"size of the stack is : "<<s1.size()<<endl;
    

    return 0;
}