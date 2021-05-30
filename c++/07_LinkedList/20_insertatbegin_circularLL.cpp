#include <iostream>
using namespace std;

struct node{
    int data;
    node*next;
    node(int x){
        data=x;
        next=NULL;
    }
};

node* insertatbegin(node* head,int x){
    node* newly=new node(x);
    if(head==NULL){
        newly->next=newly;
    }
    else{
        node*curr=head;
        while(curr->next!=head)
            curr=curr->next;
        curr->next=newly;
        newly->next=head;
        }
    return newly;
}

void printlist(node* head){
    if(head==NULL)
        return ;
    node* curr=head;
    do{
        cout<<curr->data<<" ";
        curr=curr->next;
    }while(curr!=NULL);
}


int main(){
    node* head=new node(38);
    head= insertatbegin(head,48);
    head= insertatbegin(head,58);
    head= insertatbegin(head,68);
    printlist(head);
}