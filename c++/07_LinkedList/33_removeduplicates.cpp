
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

node* removedu(node* head){
    node* curr=head;
    while(curr!=NULL && curr->next!=NULL){
        if(curr->data==curr->next->data){
            curr->next=curr->next->next;
        }
        else{
            curr=curr->next;
        }
    }
    return head;
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
    head->next=new node(4);
    head=insertatbegin(head,4);
    head=insertatbegin(head,15);
    head=insertatbegin(head,15);
    printlist(head);
    cout<<"\n";
    head=removedu(head);
    printlist(head);
}
