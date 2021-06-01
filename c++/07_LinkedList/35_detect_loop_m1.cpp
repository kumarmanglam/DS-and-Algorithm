#include <iostream>
using namespace std;

//some bug in normal linked list

struct node{
    int data;
    node* next;
    node(int x){
        data=x;
        next=NULL;
    }
};

bool checkloop(node*head){
    node* curr=head;
    while(curr!=NULL){
        node* temp=curr->next;
        node* check=head;
        while(check!=curr){
            if(check==temp){
                return true;
            }
            check=check->next;
        }
        temp=temp->next;
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
    fourth->next=second;
    cout<<fourth->data;
    cout<<checkloop(head);
}