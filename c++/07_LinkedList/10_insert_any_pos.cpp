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
//update condition for invalid index input
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
    if(temp==NULL){                     // temp=newly; should not be added in this code because it is case which handles invalid case input
        return head;
    }
    newly->next=temp->next;                     //first we need to link second bridge node to newly node valid for end of the linked list also
    temp->next=newly;
    return head;
}

void printlist(node* head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    node*head=new node(10);
    head->next=new node(20);
    head=insertatindex(head,77,7);
    printlist(head);
}
