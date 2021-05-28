
#include <iostream>
using namespace std;
struct node{
    int data;
    node *next;//node data type pointer
    node(int x){
        data=x;
        next=NULL;
    }
};

void printlist(node * head){
    node *curr=head;
    while(curr!=NULL){
        cout<<head->data<<" ";
        curr=curr->next;
    }
}
int main() {
	//code
	node *head=new node(4);
	printlist(head);
	return 0;
}
