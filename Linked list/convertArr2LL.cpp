#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{

    public:
    int data;
    node* next;

    node(int data){
        this -> data =data;
        this -> next=NULL;
    }

};

// convert array to linked list
node* convertarr2LL(vector<int> &arr){   // we cannot return an entire linked list so we return head 
    node* head = new node(arr[0]);
    node *mover = head;
    
    for(int i=1 ; i<arr.size() ; i++){
        node* temp = new node(arr[i]);
        mover -> next=temp;
        mover=temp;
    }
    return head;
}


//length of linked list
int lengthofLL(node* head){
    int cnt=0;
    node* temp = head;
    while(temp){  // or while(temp != NULL)
        temp=temp->next;
        cnt++;
    }
    return cnt;
}

int main(){

    vector<int> arr={2,1,3,8};

    node * head=convertarr2LL(arr);
    cout<<head -> data<<endl;

    //print the linked list
    node* temp = head;
    while(temp){  // or while(temp != NULL)
        cout<<temp -> data<<" ";
        temp=temp->next;
    }
    cout<<endl;

    cout<<"length of linked list is : "<<lengthofLL(head)<<endl;

    return 0;
}