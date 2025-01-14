#include<bits/stdc++.h>
using namespace std;

class node{

    public:
    int data;
    node* next;
    node* back;

    public:
    node(int data){
        this -> data=data;
        this -> next=nullptr;
        this -> back=nullptr;
    }

    public:
    node(int data,node* next,node* back){
        this -> data=data;
        this -> next=next;
        this -> back=back;
    }

};

//convert array to doubly linked list
node* ConvertArrDLL(vector<int> &arr){
    node* head=new node(arr[0]);
    node* prev=head;

    for(int i=1;i<arr.size();i++){
        node* temp=new node(arr[i],nullptr,prev);
        prev -> next=temp;
        prev=temp;
    }
    return head;
}

//for printing list
void print(node* head){
    node* temp=head;
    while(temp){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }cout<<endl;
}


//insert before head
node* InserBeforetHead(node* head,int val){
    node* newhead=new node(val,head,nullptr);

    head->back=newhead;

    return newhead;
}


//insert before tail
node* InsertBeforeTail(node* head,int val){
    
    if(head->next==NULL){
        return InserBeforetHead(head,val);
    }
    
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }

    node* prev=temp->back;
    node* newnode=new node(val,temp,prev);

    prev->next=newnode;
    temp->back=newnode;

    return head;
}


//insert before kth element
node* InsertBeforeKth(node* head,int k,int val){

    if(k==1){
        node* newnode=new node(val,head,nullptr);
        head->back=newnode;
        return newnode;
    }
    
    node* temp=head;
    int cnt=0;

    while(temp!=NULL){
        cnt++;
        if(cnt==k)break;
        temp=temp->next;
    }

    node* prev=temp->back;
    node* newnode=new node(val,temp,prev);

    prev->next=newnode;
    temp->back=newnode;

    return head;

}


//insert before node
node* InsertBeforeNode(node* node1,int val){

    node* prev=node1->back;
    node* newnode=new node(val,node1,prev);
    node1->back=newnode;
    prev->next=newnode;

}



int main(){

    vector<int>arr={1,2,4,5};
    node* head=ConvertArrDLL(arr);
    head=InsertBeforeNode(head->next,100);
    print(head);


    return 0;
}