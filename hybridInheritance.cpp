#include<iostream>
using namespace std;

class A{
    public:
    int health;

    void function1(){
        cout<<"function1"<<endl;
    }
};

class B:public A{                // B has inherited from A
    public:
    int height;
};

class C{    
    public:
    int age;
};

class D:public B,public C{              //   D has inherited from both B and C

};

int main(){

    B object1;
    object1.function1();
    cout<<object1.health<<endl;
    cout<<object1.height<<endl;
    cout<<endl;

    D object2;
    cout<<object2.age<<endl;
    object2.function1();
    cout<<object2.health<<endl;
    cout<<object2.height<<endl;
    cout<<endl;

    return  0;
}