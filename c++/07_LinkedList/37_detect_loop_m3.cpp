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

bool checkloop(node* head){
    node* curr=head,*temp;
    while(curr!=NULL || curr->next!=NULL){
        if(curr->next->next==temp)
            return true;
        node* nextnode=curr->next;
        curr->next=temp;
        curr=nextnode;
    }
    return false;
}

int main(){
    node* head=new node(4);
    node* first=new node(5);
    node* second=new node(6);
    node* third=new node(7);
    node* fourth=new node(8);
    head->next=first;
    first->next=second;
    second->next=third;
    third->next=fourth;
    cout<<checkloop(head);
}