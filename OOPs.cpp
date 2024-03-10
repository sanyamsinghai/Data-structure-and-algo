#include<iostream>
using namespace std;


//encapsulation

    class hero{
        private:
        int health;
        int weight;

        public:
        int gethealth(){
            return this->health;
        }

        void sethealth(int h){
            this->health=h;
        }
    };

int main(){
    hero h1;

    h1.sethealth(75);
    cout<<"health is : "<<h1.gethealth()<<endl;
    
    return 0;
}