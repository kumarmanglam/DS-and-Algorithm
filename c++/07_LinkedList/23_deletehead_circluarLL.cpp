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

node* deletesecond(node* head){
    if(head==NULL|| head->next==NULL)
        return NULL;
    node* second=head->next;
    node* third=head->next->next;
    head->next=third;
    delete(second);
    return head;
}

node* deletehead(node* head){
    node* temp=head;
    if(head==NULL || head->next==NULL)
        return head;
    do{
        temp=temp->next;
    }while(temp->next!=head);

    temp->next=head->next;
    delete(head);
    return temp->next;
}

void printlist(node* head){
    node*temp=head;
    if(head==NULL){
        return ;
    }
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=head);
}

int main(){
    node* head=new node(8);
    head->next=new node(9);
    head->next->next=new node(11);
    head->next->next->next=head;
    head=deletehead(head);
    printlist(head);
}
