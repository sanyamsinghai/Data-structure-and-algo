#include<iostream>
using namespace std;

int func(int n){
    if(n<=1)return n;

    return (func(n-1)+func(n-2));
}

int main(){
    int n;
    cout<<"enter an integer : ";
    cin>>n;
    func(n);

    return 0;
}