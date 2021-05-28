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

//change the head only when linked list is empty
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

void printlist(node* head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return;
}

int main(){
    node* head=new node(4);
    head=insertatend(head,9);
    head=insertatend(head,91);
    head=insertatend(head,92);
    head=insertatend(head,93);
    printlist(head);
}
