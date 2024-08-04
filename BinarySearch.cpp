#include<iostream>
using namespace std;

//search an element in sorted array
int BinarySearch(int arr[],int n,int target){
    
        int st=0;
        int end=n-1;

        while(st<=end){

            int mid=st+(end-st)/2;

            if(arr[mid]==target){
                return mid;
            }

            else if(arr[mid]<target){
                st=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return -1;
}

int main(){

    int n;
    cout<<"enter size of an array :";
    cin>>n;

    int arr[n];

    cout<<"enter array elements in sorted order :";
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }

    int target;
    cout<<"enter target : ";
    cin>>target;

    cout<<"index of target is : "<<BinarySearch(arr,n,target);

    return 0;
}