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
<<<<<<< HEAD
    node *prevnode,*curr;
    prevnode=NULL;
    if(head==NULL||head->next==NULL)
        return head;
    curr=head;
=======
    if(head==NULL||head->next==NULL) return head;
    node *prevnode=NULL,*curr=head;
>>>>>>> bea19ff8090a0d6e649658924d027a19c30b2440
    while(curr!=NULL){
        prevnode=curr->prev;
        curr->prev=curr->next;
        curr->next=prevnode;
        curr=curr->prev;
    }
    return prevnode->prev;
<<<<<<< HEAD
    
=======
>>>>>>> bea19ff8090a0d6e649658924d027a19c30b2440
}

void printlist(node* head){
    node* temp=head;
    while(temp!=NULL){
<<<<<<< HEAD
        cout<<temp->data;
=======
        cout<<temp->data<<" ";
>>>>>>> bea19ff8090a0d6e649658924d027a19c30b2440
        temp=temp->next;
    }
}

int main(){
<<<<<<< HEAD
    node* head=new node(1);
    head=insertatbegin(head,4);
    head=insertatbegin(head,8);
    head=insertatbegin(head,10);
    printlist(head);
    cout<<" before reverse";
    head=reversedoubly(head);
    printlist(head);
=======
    node* temp;
    node* head=new node(1);
    head=insertatbegin(head,4);
    head=insertatbegin(head,8);
    head=insertatbegin(head,9);
    // printlist(head);
    // cout<<"before reverse";
    temp=reversedoubly(head);       
    printlist(temp);
>>>>>>> bea19ff8090a0d6e649658924d027a19c30b2440
}
