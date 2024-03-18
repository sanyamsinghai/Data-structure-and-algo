#include<iostream>
using namespace std;

class father{
    public:
    int height;

    void earning(){
        cout<<"earning"<<endl;
    }
};

class mother{
    public:
    int weight;

    void cooking(){
        cout<<"cooking"<<endl;
    }
};

class child : public father,public mother{                 //child has properties of both father and mother

};

int main(){

    child c1;
    c1.height=100;
    c1.weight=75;

    cout<<"height is : "<<c1.height<<endl;
    cout<<"weight is : "<<c1.weight<<endl;

    c1.earning();
    c1.cooking();

    return 0;
}