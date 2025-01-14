#include<iostream>
#include<bits/stdc++.h>

using namespace std;

string Convert2Binary(int n){
    string temp="";
    while(n>0){
        if(n%2==1){
            temp+='1';
        }
        else{
            temp+='0';
        }
        n=n/2;
    }
    reverse(temp.begin(),temp.end());
    return temp;
}

int main(){

    string s=Convert2Binary(8);
    cout<<s<<endl;
    

    return 0;
}