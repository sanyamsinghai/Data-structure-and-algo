#include<iostream>
using namespace std;

class stimpl{
    public:

    int top=-1;
    int st[10];

    void push(int x){
        if(top>=9){
            cout<<"overload";
        }

        top=top+1;
        st[top]=x;
    }

    int peek(){
        if(top==-1){
            cout<<"stack is empty";
            return 0;
        } 
        int x=st[top];
        return x;
    }

    void pop(){
        if(top==-1){
            cout<<"stack is empty";
        }
        top=top-1;
    }

    int size(){
        return top+1;
    }
};

int main(){

    stimpl s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    cout<<"top element is : "<<s1.peek()<<endl;
    s1.pop();
    cout<<"after poping out top element is : "<<s1.peek()<<endl;
    cout<<"size is : "<<s1.size()<<endl;
    


    return 0;
}