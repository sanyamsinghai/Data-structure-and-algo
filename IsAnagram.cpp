#include<bits/stdc++.h>
using namespace std;

bool IsAnagram(string s1,string s2){
    vector<int> freq(26,0);

    // if lengths are different then return false
    if(s1.length()!=s2.length()){
        return false;
    }

    for(int i=0 ; i<s1.length() ; i++){
        freq[s1[i]-'a']++; //for s1,incrementing freq of char
        freq[s2[i]-'a']--; //for s2,decrementing freq of char
    }

    for(int i=0 ; i<26 ; i++){
        if(freq[i]!=0){   //if freq of all the char are 0 then return true
            return false;
        }
    }
    return true;
}

int main(){

    string s1,s2;
    cout<<"enter first string : ";
    cin>>s1;

    cout<<"enter second string : ";
    cin>>s2;

    if(IsAnagram(s1,s2)){
        cout<<"strings are anagram";
    }
    else{
        cout<<"strings are not anagram";
    }

    return 0;
}