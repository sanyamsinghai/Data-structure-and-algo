#include<iostream>
#include<string>
using namespace std;

//                                                                SWAP ARRAY 
// void func1(int i,int arr[],int n){
//     if(i>=n/2)return;

//     swap(arr[i],arr[n-i-1]);
//     func1(i+1,arr,n);  
// }

// int main(){
//     int n;
//     cout<<"enter size of array : ";
//     cin>>n;

//     int *arr=new int[n];

//     for(int i=0 ; i<n ; i++){
//         cin>>arr[i];
//     }

//     func1(0,arr,n);
//     for(int i=0 ; i<n ; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     delete[] arr;
//     return 0;
// }

//                                            CHECK STRING IS PALINDROM OR NOT

bool fuc1(int i,string &s){
    if(i>=s.size()/2)return true;

    if(s[i]!=s[s.size()-i-1]){
        return false;
    }

    return fuc1(i+1,s);
}

int main(){
    string s="madsm";

    cout<<fuc1(0,s);

    return 0;
}