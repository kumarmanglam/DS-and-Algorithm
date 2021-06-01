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

bool checkloop(node*head){
    node*fast=head,*slow=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
            return true;
    }
    return false;
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
    cout<<checkloop(head);
}
