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

node* insertatbegin(node* head,int x){
    node* newly=new node(x);
    if(newly==NULL){                //if head is NULL return self pointing node
        newly->next=newly;
        return newly;
    }
    newly->data=head->data;         //swap the data of new node and head node
    head->data=x;
    newly->next=head->next;
    head->next=newly;
    return head;            
}

void printlist(node* head){
    node* temp=head;
    if(temp==NULL)
        return;
    do{                             //we use do while coz we have to stop at head
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=head);
    return;
}

int main(){
    node* head= new node(9);
    head->next=new node(11);
    head->next->next=head;
    head=insertatbegin(head,45);
    printlist(head);
    return 0;
}

