#include<iostream>
using namespace std;

bool isSorted(int arr[],int size){
    //base case
    if(size==0 || size==1){
        return true;
    }

    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool remainingPart=isSorted(arr+1,size-1);
        return remainingPart;
    }
}


//for linear search
bool linearSearch(int arr[],int size,int key){
    //base case
    if(size==0){    // we have traversed whole array and key not found return false
        return false;
    }
    
    if(arr[0]==key){
        return true;
    }
    else{
        bool remaining=linearSearch(arr+1,size-1,key);
        return remaining;
    }

}

//for binary search
bool binarySearch(int arr[],int low,int high,int key){
    //base case
    if(low>high){
        return false;
    }

    int mid=low + (high-low)/2;
    if(arr[mid]==key){
        return true;
    }

    if(arr[mid]>key){
        return binarySearch(arr,low,mid-1,key);
    }
    else{
        return binarySearch(arr,mid+1,high,key);
    }
}

//reverse string
void Reverse(string& s,int i,int j){
    //base case
    if(i>j) return;

    swap(s[i],s[j]);
    i++;
    j--;

    Reverse(s,i,j);
}



int main(){

    int arr[]={1,2,3,4,3,18};
    int size=6;

    // bool ans=isSorted(arr,size);
    // if(ans){
    //     cout<<"Array is Sorted";
    // }
    // else{
    //     cout<<"Array is not Sorted";
    // }



    // int key=3;
    // bool ans=linearSearch(arr,size,key);
    // if(ans){
    //     cout<<"found";
    // }
    // else{
    //     cout<<"not found";
    // }



    // int key=10;
    // int ans=binarySearch(arr,0,5,key);

    // if(ans){
    //     cout<<"found";
    // }
    // else{
    //     cout<<"not found";
    // }


    string str="name";
    int i=0;
    int n=str.length()-1;

    cout<<"string before reverse - "<<str<<endl;

    Reverse(str,i,n);

    cout<<"string after reverse - "<<str<<endl;



    return 0;
}