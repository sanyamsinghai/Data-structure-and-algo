#include<iostream>
using namespace std;


//Inheritance

    class human{
        public:
        int health;
        int weight;
        int age;

        int gethealth(){
            return this->health;
        }

        void sethealth(int h){
            this->health=h;
        }
    };

    class male:public human{
        string color;



    };
    

int main(){
    male object1;

    object1.sethealth(75);
    cout<<"health is : "<<object1.gethealth()<<endl;
    
    return 0;
}