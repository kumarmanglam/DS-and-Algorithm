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
int searchrecursively(node*head,int x,int i){    //got segmentation fault in recursive function
    if(head==NULL){
        return -1;
    }
    if(head->data==x){
        return i;
    }
    return searchrecursively(head->next,x,i+1);
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
    cout<<searchrecursively(head,48,1);
    // cout<<searchnode(head,89);
}
