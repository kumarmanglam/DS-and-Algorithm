#include <iostream>
using namespace std;

struct node{
    int data;
    node* link;
    node(int x){
        data=x;
        link=NULL;
    }
};

node* insertatbegin(node* head,int x){
    node*temp=new node(x);
    temp->link=head;
    return temp;
}

node* reverselist(node*first){
    node*head=first;
    node*pre=NULL;
    node*next=NULL;
    while(head!=NULL){
        next=head->link;
        head->link=pre;
        pre=head;
        head=next;
    }
    return pre;
}

void printlist(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->link;}
    return;
}

int main(){
    node*head=new node(40);
    head=insertatbegin(head,34);
    head=insertatbegin(head,30);
    head=insertatbegin(head,20);
    printlist(head);
    cout<<"\n";
    head=reverselist(head);
    printlist(head);
    return 0;
}
