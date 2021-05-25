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

node * deletebegin(node*head){
    node*temp=head;
    temp=head->next;
    return temp;
}

int main() {
    node*head=new node(1);
    head->next=new node(2);
    head->next->next=new node(3);
    head=deletebegin(head);
    cout<<head->data;
	return 0;
}
