#include<iostream>
using namespace std;

void func1(int i,int arr[],int n){
    if(i>=n/2)return;

    swap(arr[i],arr[n-i-1]);
    func1(i+1,arr,n);  
}

int main(){
    int n;
    cout<<"enter size of array : ";
    cin>>n;

    int *arr=new int[n];

    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }

    func1(0,arr,n);
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    delete[] arr;
    return 0;
}