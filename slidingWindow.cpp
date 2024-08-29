// Given a binary array nums and an integer k, return the maximum number of consecutive 1's in the array if you can flip at most k 0's.
#include<bits/stdc++.h>
using namespace std;

int longestOnes(string str,int k){
    int start=0;
    int end=0;
    int max_length=0;
    int zero_count=0;

    for( ; end<str.length() ; end++){
        
        if(str[end]=='0'){
            zero_count++;
        }
        
        while(zero_count>k){
            if(str[start]=='0')zero_count--;
            start++;
        }
        max_length=max(max_length,end-start+1);
    }
    return max_length;

}

int main(){

    string str;
    cout<<"enter string : ";
    cin>>str;

    int k;
    cout<<"enter value of k(max zeroes) : ";
    cin>>k;

    cout<<"max length is : "<<longestOnes(str,k);

    return 0;
}