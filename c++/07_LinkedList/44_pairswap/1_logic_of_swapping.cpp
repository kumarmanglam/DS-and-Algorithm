#include <iostream>
#include <unordered_set>
using namespace std;

//logic to swap to two nodes of first three nodes
//important

struct node{
    int data;
    node* next;
    node(int x){
        data=x;
        next=NULL;
    }
};

node* pairwap(node* head){
    node* newhead=head->next;
    head->next=head->next->next;
    newhead->next=head;
    return newhead;
}

void printlist(node* head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    node* head=new node(1);
    head->next=new node(2);
    head->next->next=new node(3);
    head=pairwap(head);
    printlist(head);
}
