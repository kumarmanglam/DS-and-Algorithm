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
node* deleteheadeff(node* head){
    if(head==NULL || head->next==NULL)
        return NULL;
    head->data=head->next->data;
    node* temp=head->next;
    head->next=head->next->next;
    delete(temp);
    return head;
}

node* deletekth(node* head,int k){
    if(head==NULL) return head;
    if(k==1) return deleteheadeff(head);
    node* curr=head;
    for(int i=0;i<k-2;i++)
        curr=curr->next;
    node* temp=curr->next;
    curr->next=curr->next->next;
    delete temp;
    return head;
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
    head=deletekth(head,1);
    printlist(head);
}