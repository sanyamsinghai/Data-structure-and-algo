//                                                       FUNCTION OVERLOADING
/*
#include<iostream>
using namespace std;
class A{
    public:

    void sayhello(){
        cout<<"hello"<<endl;
    }

//same function with different auguments
    void sayhello(string name){   
        cout<<"hello"<<endl;
    }

//same function with different auguments
    int sayhello(string name,int n){
        cout<<"hello"<<endl;
        return 1;
    }
};

int main(){
    A object1;

    object1.sayhello();
    object1.sayhello("sanyam");
    object1.sayhello("sanyamsinghai",1);


    return 0;
}
*/

//                                                  OPERATOR OVERLOADING
#include<iostream>
using namespace std;

class A{
public:
int a,b;

public:
int add(){
    return a+b;
}

void operator+ (A &obj){
    cout<<"hello sanyam"<<endl;
}

};

int main(){
    A obj1,obj2;

    obj1+obj2;

    return 0;
}