#include<iostream>
using namespace std;

class A{
    public:
    void func(){
        cout<<"function of A"<<endl;
    }
};

class B{
    public:
    void func(){
        cout<<"function of B"<<endl;
    }
};

class C:public A,public B{
    public:
    int health;
};

int main(){        //  :: ->scope resolution operator

    C obj;
    obj.A::func();          // obj is calling function of A
    obj.B::func();          // obj is calling function of B

    return 0;
}

