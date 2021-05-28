//do not copy the code directly
//to create recursive function to traverse the linked list
#include <iostream>
using namespace std;

struct node{
    int data;
    node *next;
    
    node(int x){
        data=x;
        next=NULL;
    }
};

void printlist(node * head){
    if(head==NULL){
        return;
    }
    cout<<head->data<<" -> ";
    printlist(head->next);
}

int main(){
    node* head=new node(4);
    node*first=new node(8);
    node* second=new node(29);
    
    head->next=first;
    first->next=second;
    
    //second way to create 
    second->next=new node(89);
    second->next->next=new node(34);
    
    printlist(head);
}
