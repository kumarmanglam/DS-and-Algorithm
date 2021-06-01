#include <iostream>
#include <vector>
using namespace std;

struct node {
    int data;
    node* next;
    node(int x){
        data=x;
        next=NULL;
    }
};

node* reversell(node* temp,node* prev){
    node*buff=temp;
    if(temp==NULL){
        return prev;
    }
    node*nxt=temp->next;
    temp->next=prev;
    prev=buff;
    reversell(nxt,buff);
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
    head=reversell(head,NULL);
    printlist(head);
}
