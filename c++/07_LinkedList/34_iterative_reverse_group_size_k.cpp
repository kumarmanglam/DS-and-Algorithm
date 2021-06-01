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

node* iterativereverse(node* head,int k){
    node* temp=head;
    while(temp!=NULL){
        node* curr=head;*next=NULL;*prev=NULL;
        int count=0;
        while(curr!=head && count<k){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            count++;
        }
        if()
    }
}