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
    node* temp=new node(x);
    temp->next=head;
    if(head==NULL){
        return temp;
    }
    head->prev=temp;
    return temp;
}

node* deletefirstnode(node* head){
    if(head==NULL or head->next==NULL)
        return NULL;
    node* secondnode=head->next;
    delete(head);
    return secondnode;
}

void printlist(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    node* head=new node(89);
    head=insertatbegin(head,890);
    head=insertatbegin(head,8900);
    head=insertatbegin(head,89000);
    head=deletefirstnode(head);
    printlist(head);
}
