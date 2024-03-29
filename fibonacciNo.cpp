#include<iostream>
using namespace std;

int func(int n){
    if(n<=1)return n;

    return (func(n-1)+func(n-2));
}

int main(){
    int n;
    cout<<"fibonacci series upto : ";
    cin>>n;

    cout<<"series : ";
    for(int i=1;i<=n;i++){
        cout<<func(i)<<" ";
    }

    cout<<endl;

    cout<<n<<" term is : ";
    cout<<func(n)<<endl;

    return 0;
}