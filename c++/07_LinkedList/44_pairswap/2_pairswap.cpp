#include <bits/stdc++.h> 
using namespace std; 

struct node{
    int data;
    node* next;
    node(int x){
        data=x;
        next=NULL;
    }
};

void printlist(node *head){
    node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }cout<<endl;
}

node *pairwiseSwap(node *head){
    if(head==NULL||head->next==NULL)
        return head;
    node *curr=head->next->next;
    node *prev=head;
    head=head->next;        //dealing with first two nodes
    head->next=prev;
    while(curr!=NULL&&curr->next!=NULL){
        prev->next=curr->next;               //--1---pichle last node ka next linked to second node of pair
        prev=curr;
        node *next=curr->next->next;        //agle iteration ka curr node
        curr->next->next=curr;              //--2---  link ulta    
        curr=next;
    }
    prev->next=curr;
    return head;
}

int main() 
{ 
	node *head=new node(1);
	head->next=new node(2);
	head->next->next=new node(3);
	head->next->next->next=new node(4);
	head->next->next->next->next=new node(5);
	printlist(head);
	head=pairwiseSwap(head);
	printlist(head);
	return 0;
} 