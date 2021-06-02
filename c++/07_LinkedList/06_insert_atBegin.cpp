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

node* oddeven(node* head){
    node* odd=NULL,*even=NULL,*curr=head;
    node*oddhead;
    node*oddtail=NULL;
    node*evenhead;
    while(curr!=NULL){
        if((curr->data)%2!=0){
            if(odd==NULL){
                odd=new node(curr->data);
                oddhead=odd;
            }
            else{
                odd->next=new node(curr->data);
                oddtail=odd;
                odd=odd->next;
            }
            curr=curr->next;
        }
        else{
            if(even==NULL){
                even=new node(curr->data);
                evenhead=even;
            }
            else{
                even->next=new node(curr->data);
                even=even->next;
            }
            curr=curr->next;
        }
    }
    odd->next=evenhead;
    return oddhead;
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
    node* head=new node(1);
    node* first=new node(3);
    node*second=new node(5);
    node* third=new node(2);
    node*fourth=new node(11);
    head->next=first;
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=NULL;
    head=oddeven(head);
    printlist(head);//
}
