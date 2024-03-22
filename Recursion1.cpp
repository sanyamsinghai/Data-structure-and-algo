#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//printing 1 to n

int func1(int i,int n){
    if(i>n)return i;            //->first function

    cout<<i<<" ";
    func1(i+1,n);
}


//printing n to 1

int func2(int i,int n){               // ->second function
    if(i<1)return i;

    cout<<i<<" ";
    func2(i-1,n);
}


//sum of n numbers

int func3(int i,int sum){
    if(i<1){
        cout<<sum;                // ->third function
        return sum;
    }
    func3(i-1,sum+i);
    
}


//sum of n numbers
int func4(int n){
    if(n==0)return 0;          // ->fourth function 

    return(n+func4(n-1));
}


int main(){

    int n;
    cout<<"enter a number : ";
    cin>>n;
    // cout<<endl;

    cout<<"1 to n : ";
    func1(1,n);    // ->first function
    cout<<endl;

    cout<<"n to 1 : ";
    func2(n,n);    // ->second function
    cout<<endl;

    cout<<"sum : ";
    func3(n,0);    // ->third function sum
    cout<<endl;
    
    int s4=func4(n);
    cout<<"sum is "<<s4;  // ->fourth function
    cout<<endl;

    return 0;
}