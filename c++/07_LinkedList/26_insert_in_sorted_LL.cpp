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

node* insertinsorted(node* head,int x){
    node* newly=new node(x);
    if(head==NULL)
        return newly;
    node*temp=head;
    if((head->data)>x){
            newly->next=head;
            return newly;
        }
    while((temp->next!=NULL)&&((temp->next->data)<x)){
        temp=temp->next;
    }
    newly->next=temp->next;
    temp->next=newly;
    return head;
}

void printlist(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    node* head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head= insertinsorted(head,35);
    printlist(head);
    
}
