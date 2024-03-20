#include<iostream>
using namespace std;

class animal{
    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};

class dog:public animal{            
    public:
    void speak(){                   //we have modified function in child class
        cout<<"barking"<<endl;    
    }
};

int main(){
    dog d;
    animal a;
    a.speak();
    d.speak();

    return 0;
}