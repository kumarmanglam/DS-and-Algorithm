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

node* insertatbegin(node *head,int x){
    node *temp=new node(x);
    temp->next=head;
    return temp;
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
    head=insertatbegin(head,8);
    head=insertatbegin(head,80);
    head=insertatbegin(head,800);
    printlist(head);
} 
