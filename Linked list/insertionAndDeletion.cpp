#include<bits/stdc++.h>
using namespace std;

class node{

    public:
    int data;
    node* next;

    public:
    node(int data){
        this -> data=data;
        this -> next=NULL;
    }

    public:
    node(int data,node* next){
        this -> data=data;
        this -> next=next;
    }

};

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


//delete head
node* deleteHead(node* head){
    if(head == NULL) return head;

    node* temp = head;
    head=head->next;
    delete temp;
    return head;

}

//delete tail
node* deletetail(node* head){
    if(head == NULL || head->next==NULL){
        return NULL;
    }

    node* temp = head;
    while(temp -> next -> next != NULL){
        temp = temp -> next; 
    }

    delete temp -> next;
    temp -> next = nullptr;
    return head;
}

// delete kth element
node* deleteK(node* head,int k){
    if(head==NULL){
        return head;
    }
    if(k==1){
        node* temp=head;
        head=head -> next;
        delete temp;
        return head;
    }
    int cnt=0;
    node* temp = head;
    node* prev=NULL;

    while(temp!=NULL){
        cnt++;
        if(cnt==k){
            prev -> next = prev -> next -> next;
            delete temp;
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}

// deleting a particular value
node* deleteElement(node* head,int el){
    if(head==NULL){
        return head;
    }
    if(head -> data == el){
        node* temp=head;
        head=head -> next;
        delete temp;
        return head;
    }

    node* temp = head;
    node* prev=NULL;

    while(temp!=NULL){
        if(temp -> data == el){
            prev -> next = prev -> next -> next;
            delete temp;
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}

//insert at head
node* insertHead(node* head,int val){
    node* temp=new node(val);
    temp -> next=head;
    head=temp;
    return head;
}

//insert at tail
node* insertTail(node* head,int val){
    node* newnode = new node(val);
    node* temp=head;
    while(temp -> next != NULL){
        temp =temp -> next;
    }
    temp -> next=newnode;
    return head;
}

//insert at value
node* insertPosition(node* head,int k,int val){
    if(head==NULL) return new node(val);
    
    if(k==1){
        node* newnode = new node(val,head);
        return newnode;
    }

    node* temp=head;
    int cnt=0;
    while(temp!=NULL){
        cnt++;
        if(cnt==k-1){
            node* newnode = new node(val);
            newnode -> next = temp -> next;
            temp -> next = newnode;
            break;
        }
        temp = temp -> next;
    }
    return head;
}

//function for printing the list
void print(node* head){
    node* temp = head;  
    while(temp){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }cout<<endl;
}

int main(){

    vector<int> arr={2,1,3,8};
    // node* head1 = convertarr2LL(arr);
    // head1=deleteHead(head1);
    // print(head1);

    // cout<<endl;

    // node* head2 = convertarr2LL(arr);
    // head2=deletetail(head2);
    // print(head2);

    // int k;
    // cout<<"enter value of k : ";
    // cin>>k;
    // node* head3 = convertarr2LL(arr);
    // head3 = deleteK(head3,k);
    // print(head3);

    
    // int el;
    // cout<<"enter element which you want to delete : ";
    // cin>>el;
    // node* head4 = convertarr2LL(arr);
    // head4 = deleteElement(head4,el);
    // print(head4);


    // int k;
    // cout<<"enter value of k : ";
    // cin>>k;
    // int val;
    // cout<<"enter value : ";
    // cin>>val;
    node* head5=convertarr2LL(arr);
    // head5=insertHead(head5,val);
    // head5=insertTail(head5,val);
    // head5=insertPosition(head5,k,val);
    return 0;
}