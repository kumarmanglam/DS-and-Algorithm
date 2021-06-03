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

int findlen(node* head){
    node*temp=head;
    int len=0;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}

bool intersection(node* head,node* first){
    int len1=0,len2=0,d=0;
    bool flag=false;
    len1=findlen(head);
    len2=findlen(first);
    if(len1>len2){
        flag=true;              //flag true means head list is longer
        d=len1-len2;
    }
    else{
        d=len2-len1;
    }
    if(flag==true){
        node* curr=head;
        node* temp=first;
        int i=0;
        while(i<d){
            curr=curr->next;
        }
        while(curr!=NULL){
            if(curr==temp){
                return true;
            }
            curr=curr->next;
            temp=temp->next;
        }
    }
    else{
        node* curr=first;
        node* temp=head;
        int i=0;
        while(i<d){
            curr=curr->next;
        }
        while(curr!=NULL){
            if(curr==temp){
                return true;
            }
            curr=curr->next;
            temp=temp->next;
        }
    }
    return false;
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
    head->next=first;
    first->next=second;
    node* start=new node(10);
    start->next=new node(11);
    start->next->next=new node(16);
    start->next->next->next=new node(17);
    start->next->next->next->next=new node(19);
    cout<<intersection(start,head);
}
