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


//delete head
node* DeleteHead(node* head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }

    node* prev=head;
    head=head->next;

    head->back=nullptr;
    prev->next=nullptr;
    delete prev;
    return head;
}

node* DeleteTail(node* head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }

    node* tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }

    node* newtail=tail->back;
    newtail->next=nullptr;
    tail->back=nullptr;
    delete tail;
    return head;
}

node* deleteKth(node* head,int k){
    if(head==NULL){
        return NULL;
    }
    
    node* temp=head;
    int cnt=0;
    while(temp!=NULL){
        cnt++;
        if(cnt==k){
            break;
        }
        temp=temp->next;
    }

    node* prev=temp->back;
    node* front=temp->next;

    if(prev==NULL && front==NULL){
        return NULL;
    }
    else if(prev==NULL){
        return DeleteHead(head);
    }
    else if(front==NULL){
        return DeleteTail(head);
    }

    prev->next=front;
    front->back=prev;

    temp->next=nullptr;
    temp->back=nullptr;
    delete temp;

    return head;
}

//delete node
void DeleteNode(node* temp){
    node* prev=temp->back;
    node* front=temp->next;

    if(front==NULL){
        prev->next=nullptr;
        temp->next=temp->back=nullptr;
        delete temp;
        return;
    }

    prev->next=front;
    front->back=prev;

    temp->next=temp->back=nullptr; 
    delete temp;
    return;   
}

int main(){

    vector<int>arr={1,2,4,5};
    node* head=ConvertArrDLL(arr);
    DeleteNode(head->next);
    print(head);


    return 0;
}