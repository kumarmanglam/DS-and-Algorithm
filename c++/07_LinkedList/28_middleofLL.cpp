#include <iostream>
using namespace std;

struct node{
    int data;
    node*next;
    node(int x){
        data=x;
        next=NULL;
    }
};

node* insertatend(node *head,int x){
    node* temp=new node(x);                     //creating a temp node
    if(head==NULL){                             //if list is empty return temp
        return temp;
    }
    node * start=head;                          //copy of head
    while(start->next!=NULL){                   //reaching the end :) (make sure that start pointer does not point to NULL in the last)
        start=start->next;
    }
    start->next=temp;                           //linking last node to temp
    return head;                                
}

int middleofll(node* head){
    if(head==NULL)
        return 0;
    node*temp=head;
    int length=0;
    while(temp!=NULL){
        length++;
        temp=temp->next;
    }
    int  mid;
    mid=length/2;
    int i=0;
    temp=head;
    while(i<mid){
        temp=temp->next;
        i++;
    }
    return temp->data;
}

void printlist(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    node* head=new node(10);
    head->next=new node(20);
    // head->next->next=new node(30);
    // head=insertatend(head,90);
    // head=insertatend(head,67);
    // head=insertatend(head,45);
    
    cout<<middleofll(head);
    
}
