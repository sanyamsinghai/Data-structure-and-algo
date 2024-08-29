#include<iostream>
using namespace std;

int lowerBound(int arr[],int n,int target){
    int st=0;
	int end=n-1;

	int ans=n;

	while(st<=end){
		int mid=st+(end-st)/2;

		if(arr[mid]>=target){
			ans=mid;
			end=mid-1;
		}
		else{
			st=mid+1;
		}
	}
	return ans;
}

int upperBound(int arr[],int n,int target){
    int st=0;
	int end=n-1;

	int ans=n;

	while(st<=end){
		int mid=st+(end-st)/2;

		if(arr[mid]>target){
			ans=mid;
			end=mid-1;
		}
		else{
			st=mid+1;
		}
	}
	return ans;
}

int main(){

    int n;
    cout<<"enter size of an array : ";
    cin>>n;

    int arr[n];
    cout<<"enter array elements : ";
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }

    int target;
    cout<<"enter target value : ";
    cin>>target;

    // if(lowerBound(arr,n,target)==n){
    //     cout<<"not found";
    // }
    // else{
    //     cout<<"minimum index of target : "<<lowerBound(arr,n,target)<<endl;
    // }

    if(upperBound(arr,n,target)==n){
        cout<<"not found";
    }
    else{
        cout<<"index is : "<<upperBound(arr,n,target)<<endl;
    }
    

    return 0;
}