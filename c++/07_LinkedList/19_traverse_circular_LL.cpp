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

void printlist(node*head){
    if(head==NULL) return ;
    cout<<(head->data)<<" ";
    node*curr=head->next;
    while(curr!=head){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    return;
}

void printlis(node*head){
    if(head==NULL) return ;
    node*curr=head;
    do{
        cout<<curr->data<<" ";
        curr=curr->next;
    }while(curr!=head);
}


int main(){
    node*head=new node(89);
    head->next=new node(48);
    head->next->next=new node(20);
    head->next->next->next=head;
    printlis(head);
}
