#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
    node(int x){
        data =x;
        next=NULL;
    }
};

node* insertatbegin(node* head,int x){
    if(head==NULL)
        return head;
    node* newly=new node(head->data);
    node*second=head->next;
    head->next=newly;
    newly->next=second;
    head->data=x;
    return head;
}

void printlist(node* head){
    node* temp=head;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=head);
}

int main(){
    node* head=new node(34);
    head->next=new node(33);
    head->next->next=head;
    printlist(head);
    cout<<"  after insertion  ";
    head= insertatbegin(head,890);
    printlist(head);
}