#include <iostream>
using namespace std;
//insert at begin of doubly linkedlist

struct node{
    int data;
    node*next;
    node*prev;
    node(int x){
        data=x;
        next=NULL;
        prev=NULL;
    }
};

node* insertatbegin(node*head,int x){
    node*newly=new node(x);
    newly->next=head;
    head->prev=newly;
    return newly;
}

void printlist(node*head){
    node*curr=head;
    while(curr!=NULL){
        cout<<curr->data;
        curr=curr->next;
    }
    return;
}

int main(){
    node* head=new node(89);
    head=insertatbegin(head,8);
    head=insertatbegin(head,88);
    printlist(head);
}
