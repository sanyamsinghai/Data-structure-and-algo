#include<iostream>
using namespace std;

//macro
#define PI 3.14

// void print(int arr[],int size,int start=0){
//     for(int i=start ; i<size ; i++){
//         cout<<arr[i]<<" ";
//     }
// }

int main(){

    //Macro
    double r=5.5;
    double area= PI * r * r;
    cout<<"area : "<<area<<endl;

    // int arr[5]={1,2,3,4,5};
    // int size=5;
    // print(arr,size);
    // cout<<endl;
    // print(arr,size,3);

    return 0;
}