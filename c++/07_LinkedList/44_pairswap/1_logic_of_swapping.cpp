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
    node* newhead=head->next;               //naya head choose kiya
    head->next=head->next->next;            //link ulta kiya
    newhead->next=head;                     //naye head ko link kiya
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
