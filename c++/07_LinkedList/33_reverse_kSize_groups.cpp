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

node* reverseksized(node* head){
    int i=0;
    node* currnode=head,*prenode=NULL,*nextnode=NULL;
    while(i<k && currnode!=NULL){
        nextnode=currnode->next;            //storing next node of currnode node
        currnode->next=prevnode;            //making currnode node next to previous node
        prenode=currnode;                   //taking prenode one node forward
        currnode=nextnode;                  //taking currnode node forward
    }
    if(nextnode!=NULL){
        node* resthead=reverseksized(nextnode,k);
        head->next=resthead;
    }
    return prevnode;                        //prevnode is new head
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
