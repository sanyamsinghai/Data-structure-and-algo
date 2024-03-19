#include<iostream>
using namespace std;

class A{
    public:
    void function1(){
        cout<<"function one"<<endl;
    }
};

class B:public A{                  // B has inherited from A
    public:
    void function2(){
        cout<<"function two"<<endl;
    }
};

class C:public A{                 //C has inherited from A
    public:
    void function3(){
        cout<<"function three"<<endl;
    }
};

int main(){

    A object1;
    B object2;
    C object3;

    //object1 can access only function1
    object1.function1();  
    cout<<endl;         


    //object2 can access function1 and function2
    object2.function1();          
    object2.function2();
    cout<<endl;

    //object3 can access function3 and function2 only  because object3 does not have any relation with object2
    object3.function1();
    object3.function3();
    cout<<endl;

    return 0;
}