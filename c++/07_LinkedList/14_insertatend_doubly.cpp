#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
    node* prev;
    node(int x){
        data=x;
        next=NULL;
        prev=NULL;
    }
};

node* insertatbegin(node* head,int x){
    node* newly=new node(x);
    if(head==NULL)
        return head;
    newly->next=head;
    head->prev=newly;
    return newly;
}

node* insertatend(node* head,int x){
    node* newly=new node(x);
    node* temp=head;
    if(head==NULL)
        return newly;
    while(temp->next!=NULL)
        temp=temp->next;
    temp->next=newly;
    newly->prev=temp;
    return head;
}

void printlist(node * head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }
}

int main(){
    node*head=new node(78);
    head=insertatend(head,90);
    head=insertatend(head,56);
    printlist(head);
}
