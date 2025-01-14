// #include <iostream>
// using namespace std;

// // struct book{
// //     int pages;
// //     int b;
// // }book1,book2;

// struct student{
//     int id;
//     string name;
//     int age;

//     void printDetails(){
//         cout<<"name : "<<name<<endl;
//         cout<<"id : "<<id<<endl;
//         cout<<"age : "<<age<<endl;
//     }

// };

// int main() {
    
//     // book1.pages=10;
//     // cout<<book1.pages;


//     student stdnt[1];

//     for(int i=0 ; i<1 ; i++){
//         cout<<"enter name : ";;
//         getline(cin,stdnt[i].name);
//         cout<<"enter id : ";
//         cin>>stdnt[i].id;
//         cout<<"enter age : ";
//         cin>>stdnt[i].age;
//         cout<<endl;
//     }
//     for(int i=0 ; i<1 ; i++){
//         stdnt[i].printDetails();
//         cout<<endl;
//     }

//     return 0;
// }


// #include<iostream>
// using namespace std;

// struct array{
//     int *a;
//     int length;
// }arr;

// int main(){

    
//     cout<<endl;
//     cout<<"enter length of array : ";
//     cin>>arr.length;

//     arr.a=new int[arr.length];

//     cout<<"enter array elements: ";
//     for(int i=0 ; i<arr.length ; i++){
//         cin>>arr.a[i];
//     }cout<<endl;

//     cout<<"array elements are : ";
//     for(int i=0 ; i<arr.length ; i++){
//         cout<<arr.a[i]<<" ";
//     }

//     return 0;
// }



#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next=NULL;
    Node* prev=NULL;

    Node(int data,Node* next,Node* prev){
        this->data=data;
        this->next=next;
        this->prev=prev;
    }

};

void printAllDetails(Node* node,Node* next,Node* prev){
    cout<<"data : "<<node->data<<endl;
    cout<<"next : "<<node->next<<endl;
    cout<<"prev : "<<node->prev<<endl;
}

void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void printCircular(Node* head){
    Node* temp=head;
    while(temp!=head){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}


int main(){

    Node* head=new Node(10,NULL,NULL);
    // print(head,NULL,NULL);

    // cout<<endl;

    Node* second=new Node(15,NULL,head);
    head->next=second;
    // print(second,NULL,head);

    // cout<<endl;

    // cout<<head->next->data;

    Node* third=new Node(17,head,second);
    second->next=third;
    head->prev=third;


    printCircular(head);    

    return 0;
}