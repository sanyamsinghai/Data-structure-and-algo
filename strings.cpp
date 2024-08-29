#include<iostream>
using namespace std;

// to get length
int getlength(char name[]){
    int count=0;
    for(int i=0 ; name[i]!='\0' ; i++){
        count++;
    }
    return count;
}

//reverse string
void reverse(char name[],int n){
    int start=0;
    int end=n-1;

    while(start<end){
        swap(name[start++],name[end--]);
    }
}

//chech palindrome
bool check_palindrome(char name[],int n){
    int start=0;
    int end=n-1;

    while(start<=end){
        if(name[start]!=name[end]){
            return 0;
        }
        else{
            start++;
            end--;
        } 
    }
    return 1;
}

//convert uppercase character to lowercase character
char tolowercase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}


//chech palindrom (not case sensitive)
bool check_palindrome_NC(char name[],int n){
    int start=0;
    int end=n-1;

    while(start<=end){
        if( tolowercase(name[start]) != tolowercase(name[end]) ){
            return 0;
        }
        else{
            start++;
            end--;
        } 
    }
    return 1;
}


//replace spaces
string replaceSpaces(string str){
    string temp="";
    for(int i=0 ; i<str.length() ; i++){
        if(str[i]== ' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else{
            temp.push_back(str[i]);
        }
    }
    return temp;
}

int main(){

    // char name[20];
    // cout<<"enter your name : ";
    // cin>>name;
    // cout<<endl;
    // cout<<name<<endl;

    // int length=getlength(name);
    // cout<<"length is : "<<length<<endl;

    // reverse(name,length);
    // cout<<"reverse is : "<<name;
    // cout<<endl;

    // check_palindrome(name,length);
    // cout<<"palindrom or not : "<<chech_palindrome(name,length);
    // cout<<endl;

    // char ch='B';
    // cout<<"to lowercase : "<<tolowercase(ch);

    
    // cout<<"is palindrom : "<<check_palindrome_NC(name,length);


// getlne
    string str;
    cout<<"enter your name : ";
    getline(cin,str);
    cout<<str<<endl;
    cout<<endl;

    cout<<"after replacing spaces : "<<replaceSpaces(str);
    cout<<endl;

    return 0;
}
