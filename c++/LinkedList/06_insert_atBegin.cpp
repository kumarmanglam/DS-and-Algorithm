//do not copy the code directly
//insert at begin of linked list;

#include <iostream>
using namespace std;

struct node{
    int data;
    node *next;
    
    node(int x){
        data=x;
        next=NULL;
    }
};

void printlist(node * head){
    if(head==NULL){
        return;
    }
    cout<<head->data<<" -> ";
    printlist(head->next);
}

node* insert(node *head, int x){
    node *newly=new node(x);        //created a node to data x
    node *temp=head;                //copied address of head to another pointer temp
    head=newly;                     //linked address of newnode(newly) to head
    newly->next=temp->next;         //made previous first node to new node newly 
    return newly;
}

int main(){
    node* head=new node(4);
    node*first=new node(8);
    node* second=new node(29);
    
    head->next=first;
    first->next=second;
    
    //second way to create 
    second->next=new node(89);
    second->next->next=new node(34);
    head=insert(head,800);
    printlist(head);
}    
