#include <iostream>
using namespace std;

struct node{
    int data;
    node* prev;
    node* next;
    node(int x){
        data=x;
        prev=NULL;
        next=NULL;
    }
};

node* insertatbegin(node*head,int x){
    node* temp=new node(x);
    temp->next=head;
    if(head==NULL)
        return temp;
    head->prev=head;
    return temp;
}

node* reversedoubly(node* head){
    if(head==NULL||head->next==NULL) return head;
    node *prevnode=NULL,*curr=head;
    while(curr!=NULL){
        prevnode=curr->prev;
        curr->prev=curr->next;
        curr->next=prevnode;
        curr=curr->prev;
    }
    return prevnode->prev;
}

void printlist(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    node* temp;
    node* head=new node(1);
    head=insertatbegin(head,4);
    head=insertatbegin(head,8);
    head=insertatbegin(head,9);
    // printlist(head);
    // cout<<"before reverse";
    temp=reversedoubly(head);       
    printlist(temp);
}
