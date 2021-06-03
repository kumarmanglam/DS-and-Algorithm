#include <iostream>
#include <unordered_set>
using namespace std;

//logic to swap to two nodes of first three nodes
//important

struct node{
    int data;
    node* next;
    node(int x){
        data=x;
        next=NULL;
    }
};

node* allpairswap(node* head){
    if(head->next==NULL)
        return NULL;
    node* curr=head,*prevnode=head;
    node*secondnode=head->next;
    while(curr!=NULL || curr->next!=NULL){
        node* copycurr;
        node*newcurr=curr->next->next;                  //agle iteration ka curr node
        prevnode->next=curr->next;                      //--1---pichle last node ka next linked to second node of pair
        curr->next->next=curr;                          //--2---
        curr->next=newcurr;                             //--3---
        prevnode=copycurr;
        curr=newcurr;
    }
    return secondnode;
}



void printlist(node* head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    node* head=new node(1);
    head->next=new node(2);
    head->next->next=new node(3);
    head=allpairswap(head);
    printlist(head);
}