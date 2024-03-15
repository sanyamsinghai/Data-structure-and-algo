#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class student {
    public:
    int id;
    char section;
    int classs;
    string name; 

};

int main(){

    student s1;
    s1.classs=10;
    s1.id=3110;
    s1.section='A';

    cout<<"enter name : ";
    getline(cin,s1.name);


    cout<<"name : "<<s1.name<<endl;
    cout<<"class : "<<s1.classs<<endl;
    cout<<"section : "<<s1.section<<endl;
    cout<<"id : "<<s1.id<<endl;

    return 0;
}