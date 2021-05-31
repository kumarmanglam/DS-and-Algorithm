#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
    node(int x){
        data=x;
        next=NULL;
    }
};

//my code
node* insertatend(node* head,int x){
    node* newly=new node(x);
    if(head==NULL){
        newly->next=newly;
        return newly;
    }
    newly->data=head->data;
    head->data=x;
    newly->next=head->next;
    head->next=newly;
    return newly;
}


//naive solution 
node* insertatendnaive(node* head,int x){
    node* temp=head;
    node* newly=new node(x);
    if(head==NULL){
        newly->next=newly;
        return newly;
    }
    do{
        temp=temp->next;
    }while(temp->next!=head);
    temp->next=newly;
    newly->next=head;
    return head;
}

void printlist(node* head){
    node* temp=head;
    if(temp==NULL)
        return;
    do{                             //we use do while coz we have to stop at head
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=head);
    return;
}


int main(){
    node* head=new node(8);
    head->next=new node(9);
    head->next->next=new node(11);
    head->next->next->next=head;
    head=insertatendnaive(head,33);
    printlist(head);
}

