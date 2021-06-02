#include <iostream>
#include <unordered_set>
using namespace std;

//done --- floyd detection

struct node{
    int data;
    node* next;
    node(int x){
        data=x;
        next=NULL;
    }
};

node* oddeven(node* head){
    node* odd,*even,*curr=head;
    node*newhead=odd;
    node*conn=even;
    while(curr!=NULL){
        if(curr->data%2==0){
            if(odd==NULL){
                odd=new node(curr->data);
            }
            else{
                odd->next=new node(curr->data);
                odd=odd->next;
            } 
            curr=curr->next;
        }
        else{
            if(even==NULL){
                even=new node(curr->data);
            }
            else{
                even->next=new node(curr->data);
                even=even->next;
            }
            curr=curr->next;
        }
    }
    odd->next=conn;
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
    node* head=new node(4);
    node* first=new node(5);
    node*second=new node(6);
    node* third=new node(7);
    node*fourth=new node(8);
    head->next=first;
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=NULL;
    head=oddeven(head);
    printlist(head);
}
