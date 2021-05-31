#include <iostream>
using namespace std;


//logic-fast reaches the end of list first!!!


struct node{
    int data;
    node* next;
    node(int x){
        data=x;
        next=NULL;
    }
};

void findmiddle(node* head){
    if(head==NULL) return;
    node* slow=head,*fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    cout<<(slow->data);
}

node* insertatbegin(node*head,int x){
    node* temp=new node(x);
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
    node*head=new node(4);
    head->next=new node(8);
    head=insertatbegin(head,56);
    head=insertatbegin(head,45);
    head=insertatbegin(head,115);
    
    printlist(head);
    cout<<"\n";
    findmiddle(head);
}