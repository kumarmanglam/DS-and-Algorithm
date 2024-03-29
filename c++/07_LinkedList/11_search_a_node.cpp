#include <iostream>
using namespace std;

struct node{
    int data;
    node*next;
    node(int x){
        data=x;
        next=NULL;
    }
};
//iterative solution
int searchnode(node*head,int x){
    node*curr=head;
    int index=1;
    while(curr!=NULL){
        if(curr->data==x){
            return index;
        }
        index++;
        curr=curr->next;
    }
    return -1;
}

//recursive soltuion
int searchrecursively(node*head,int x,int i){    
    if(head==NULL){
        return -1;
    }
    if(head->data==x){
        return i;
    }
    return searchrecursively(head->next,x,i+1);
}
//other recursive solution which avoids passing extra arguement

int searchrecur(node*head,int x){    
    if(head==NULL){
        return -1;
    }
    if(head->data==x){
        return 1;
    }
    return 1+ searchrecur(head->next,x);
}

void printlist(node*head){
    node*curr=head;
    while(curr!=NULL){
        cout<<curr->data;
        curr=curr->next;
    }
    return;
}

int main(){
    node*head=new node(89);
    head->next=new node(48);
    head->next->next=new node(20);
    head->next->next->next=new node(15);
    cout<<searchrecur(head,90);
    // cout<<searchnode(head,89);
}
