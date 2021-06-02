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

node* removeptr(node*ptr){
    if(ptr->next==NULL){                  //we can not change ptr address ---- problem in this case
        return NULL;
    }
    ptr->data=ptr->next->data;
    ptr->next=ptr->next->next;
    return ptr;
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
    third=removeptr(third); 
    printlist(head);
}
