#include<iostream>
using namespace std;

int Convert2Decimal(string n){
    int len=n.length(),p2=1,num=0;
    for(int i=len-1 ; i>=0 ; i--){
        if(n[i]=='1'){
            num=num+p2;
        }
        p2=p2*2;
    }
    return num;
}

int main(){

    int deci=Convert2Decimal("1101");
    cout<<deci<<endl;

    return 0;
}