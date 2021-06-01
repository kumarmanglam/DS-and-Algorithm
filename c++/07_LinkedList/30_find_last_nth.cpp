
#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
    node(int x){
        data=x;
        next=NULL;
    }
};

void findnthnode(node* head,int n){
    if(head==NULL) return ;
    node *first=head,*second=head;
    while(first!=NULL){
        for(int i=0;i<n;i++){
            first=first->next;
        }
        first=first->next;
        second=second->next;
    }
    cout<<second->data;
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
    cout<<"\n  ";
    findnthnode(head,2);
}
