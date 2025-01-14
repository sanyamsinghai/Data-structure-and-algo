#include<iostream>
using namespace std;

int factorial(int n){
    
    //base case
    if(n==0){
        return 1;
    }

    return n*factorial(n-1);
}

int powerOf2(int n){
    
    //base case
    if(n==0){
        return 1;
    }

    return 2*powerOf2(n-1);
}

void printcounting(int n){
    
    //base case
    if(n==0) return;

    cout<<n<<" ";
    printcounting(n-1);
}

int main(){

    int n;
    cout<<"enter a number : ";
    cin>>n;

    cout<<"factorial is : "<<factorial(n)<<endl;

    cout<<"2 to power n is : "<<powerOf2(n)<<endl;

    cout<<"counting upto n is : ";
    printcounting(n);

    return 0;
}