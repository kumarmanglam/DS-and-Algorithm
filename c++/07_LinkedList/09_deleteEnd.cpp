//delete last node of singly linked list 

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

node* deletelast(node* head){
    if(head==NULL)
        return NULL;
    node*temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=NULL;
    return head;
}

void printlist(node*head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }
}

int main(){
    node*head=new node(8);
    head->next=new node(4);
    head->next->next=new node(3);
    head=deletelast(head);
    printlist(head);
}
