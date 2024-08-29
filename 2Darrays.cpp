#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool ispresent(int arr[][4],int target,int i,int j){
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<4 ; j++){
            if(arr[i][j]==target){
                return true;
            }
        }
    }
    return false;
}

int main(){

    int arr[3][4];

    

    //taking input
    cout<<"enter elements : ";
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<4 ; j++){
            cin>>arr[i][j];
        }
    }

    //output
    for(int i=0 ; i<3 ; i++){
        int sum=0;
        for(int j=0 ; j<4 ; j++){
            cout<<arr[i][j]<< " ";
            sum+=arr[i][j];
        }
        cout<<"->sum of first row is : "<<sum;
        cout<<endl;
    }

    cout<<endl;

    int maxi=INT_MIN;
    int row;
    for(int i=0 ; i<3 ; i++){
        int sum=0;
        for(int j=0 ; j<4 ; j++){
            sum+=arr[i][j];
        }
        if(sum>maxi){
            maxi=sum;
            row=i;
        }
    }
    cout<<"maximum sum is "<<maxi<<endl;
    cout<<"max sum row is "<<row;

    // int target;
    // cout<<"enter target value : ";
    // cin>>target;

    // if(ispresent(arr,target,3,4)){
    //     cout<<"target found";
    // }
    // else{
    //     cout<<"target not found";
    // }

    

    // int arr1[3][4]={{1,2,3,4},{9,10,11,12},{5,6,7,8}};
    // for(int i=0 ; i<3 ; i++){
    //     for(int j=0 ; j<4 ; j++){
    //         cout<<arr1[i][j]<< " ";
    //     }
    //     cout<<endl;
    // }

    return 0;
}