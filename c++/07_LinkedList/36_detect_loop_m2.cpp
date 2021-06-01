#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
    bool visited;
    node(int x){
        data=x;
        next=NULL;
        visited=false;
    }
};

bool checkloop(node* head){
    node* curr=head;
    while(curr!=NULL){
        if(curr->visited==true)
            return true;
        curr->visited=true;
        curr=curr->next;
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
    fourth->next=NULL;
    cout<<"Answer is : ";
    cout<<checkloop(head);
}