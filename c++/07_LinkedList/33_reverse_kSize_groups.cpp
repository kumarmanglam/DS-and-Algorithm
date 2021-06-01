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

node* reverseksized(node* head,int k){
    int i=0;
    node* currnode=head,*prevnode=NULL,*nextnode;
    while(i<k && currnode!=NULL){
        nextnode=currnode->next;            //storing next node of currnode node
        currnode->next=prevnode;            //making currnode node next to previous node
        prevnode=currnode;                   //taking prenode one node forward
        currnode=nextnode;                  //taking currnode node forward
        i++;
    }                  
    if(nextnode!=NULL)
        head->next=reverseksized(nextnode,k);
    
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
    head->next=new node(5);
    head=insertatbegin(head,3);
    head=insertatbegin(head,2);
    head=insertatbegin(head,1);
    printlist(head);
    cout<<"\n";
    head=reverseksized(head,2);
    printlist(head);
}
