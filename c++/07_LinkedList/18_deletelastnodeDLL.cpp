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
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

//gfg 
node* deletelast(node* head){
    if(head==NULL)
        return NULL;
    if(head->next==NULL){
        delete (head);
        return head;
    }
    node*temp=head;
    while(temp->next!=NULL)
        temp=temp->next;
    temp->prev->next=NULL;
    delete(temp);
    return head;
}

int main(){
    node*head=new node(78);
    head=insertatend(head,90);
    head=insertatend(head,56);
    head=deletelast(head);
    printlist(head);
}
