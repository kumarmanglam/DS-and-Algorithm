#include <iostream>
using namespace std;

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

node* insertatbegin(node* head,int x){
    node* newly=new node(x);
    if(head==NULL){
        newly->next=newly;
        newly->prev=newly;
        return newly;
    }
    head->prev->next=newly;
    newly->prev=head->prev;//
    newly->next=head;//
    head->prev=newly;//
    return newly;
}

node* insertatend(node* head,int x){
    node*newly=new node(x);
    if(head==NULL){
        newly->next=newly;
        newly->prev=newly;
        return newly;
    }
    node* end=head->prev;
    end->next=newly;
    newly->prev=end;
    newly->next=head;
    head->prev=newly;
    return head;
}

void printlist(node*head){
    if(head==NULL)
        return ;
    node* curr=head;
    do{
        cout<<curr->data<<" ";
        curr=curr->next;
    }while(curr!=head);
    return ;
}

int main(){
    node* head=new node(89);
    head->next=new node(45);
    head->prev=head->next;
    head->next->prev=head;
    head=insertatend(head,55);
    printlist(head);
}