#include<iostream>
using namespace std;

void print(int *p1){
    cout<<*p1<<endl;
}

int main(){

    

    int num=5;

    cout<<"address of num is : "<<&num<<endl;

    int *ptr=&num;  //ptr is a pointer to int storing the address of num

    cout<<"address in ptr : "<<ptr<<endl; //address at ptr
    cout<<"value is : "<<*ptr<<endl;  //value at ptr
    cout<<endl;

    cout<<"size of integer is : "<<sizeof(num)<<endl;
    cout<<"size of pointer is : "<<sizeof(ptr)<<endl<<endl;


    (*ptr)++;
    cout<<"value is : "<<*ptr<<endl<<endl;


    int arr[10]={2,3,4,5,6};
    cout<<"address of first block : "<<arr<<endl;
    cout<<"address of first block : "<<&arr<<endl;

    cout<<"value in first block : "<<*arr<<endl;

    int *p=&arr[0];
    cout<<"value :"<<*p<<endl;
    cout<<"size of p : "<<sizeof(p)<<endl;
    cout<<"size of arr : "<<sizeof(arr)<<endl;


    char ch[6]="abcde";
    cout<<ch<<endl;
    cout<<"address : "<<&ch<<endl;

    


    //passing pointer in function
    int value=10;
    int *p1=&value;

    print(p1);
    

    // DOUBLE POINTER
    int i=5;
    int *ptr1 = &i;
    int **ptr2 = &ptr1;

    cout<<"value : "<<i<<endl;
    cout<<"value : "<<*ptr1<<endl;
    cout<<"value : "<<**ptr2<<endl;


    /*
    //PRACTICE
    int first=8;
    int second=10;
    int *ptr=&second;
    *ptr=9;    //dereferencing the value of second
    cout<<first<<" "<<second<<endl;  //output -> 8 9
    

    
    int f=8;
    int *p=&f;
    cout<<(*p)++<<" ";
    cout<<first<<endl;  //output -> 8 9
    

    int arr[]={11,21,14,25};
    cout<<*(arr)<<" "<<*(arr+1)<<endl;  // output -> 11 21


    int arr1[7]={4,5,6,7};
    cout<<arr1<<" "<<&arr1<<endl;  //output -> address of 0th element

    */


    return 0;
}