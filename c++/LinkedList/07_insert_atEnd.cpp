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
node* insertatend(node *head,int x){
    node * start=head;
    while(start!=NULL){
        start=start->next;
    }
    node* temp=new node(x);
    start->next=temp;
    return head;
}

void printlist(node * head){
    node *curr=head;
    while(curr!=NULL){
        cout<<head->data<<" ";
        curr=curr->next;
    }
    return;
}
int main(){
    node* head=new node(8);
    head->next=new node(9);
    head->next->next=new node(89);
    head=insertatend(head,34);
    printlist(head);
}
