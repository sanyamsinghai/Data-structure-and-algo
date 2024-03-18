#include<iostream>
using namespace std;

class animal{
    public:                                       
    int health;

    public:
    void bark(){
        cout<<"barking"<<endl;
    }                                      // gs has inherited from dog, and dog has inherited from animal
};

class dog : public animal{

};

class gs : public dog{

};

int main(){
    gs object1;
    object1.health=100;
    cout<<"health is : "<<object1.health<<endl;
    object1.bark();

    return 0;
}