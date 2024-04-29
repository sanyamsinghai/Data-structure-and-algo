#include<bits/stdc++.h>
using namespace std;

void Insertion_sort(int arr[],int n){
    for(int i=1 ; i<n ; i++){
        int sorted=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>sorted){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=sorted;
    }
}

int main(){

    int n;
    cout<<"enter size of array : ";
    cin>>n;
    cout<<"enter array elements :";
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    cout<<endl;

    Insertion_sort(arr,n);  
    cout<<"after sorting : ";
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}