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
node* insertatindex(node*head,int data,int i){
    node*newly=new node(data);              //new node
    if(i==1){                               //if insert is at beginning
        newly->next=head;
        return newly;
    }
    node*temp=head;                         //temp copy of head
    int count=1;
    while(count<i-1 && temp!=NULL){     //we have to run the loop till we reach the position minus two position coz pichle iteration m hi hmne temp to temp=temp_next kr diya tha
        temp=temp->next;
        count++;
    }
    if(temp==NULL){                   
        return NULL;
    }
    newly->next=temp->next;                     //first we need to link second bridge node to newly node valid for end of the linked list also
    temp->next=newly;
    return head;
}
int main(){
    node*head=new node(10);
    head->next=new node (20);
    head->next->next=new node(30);
    head->next->next->next==new node(40);
    head=insertatindex(head,7777,1);
    printlist(head);
}
