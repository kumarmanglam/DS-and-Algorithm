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
//we have to care of memory deallocation
node * deletebegin(node*head){
    if(head==NULL)  
        return NULL;
    else{
        node*temp=head->next;
        delete head;
        return temp;
    }
}
int main() {
    node*head=new node(1);
    head->next=new node(2);
    head->next->next=new node(3);
    head=deletebegin(head);
    cout<<head->data;
	return 0;
}



// java program
// node *deletehead(node head){
//     if(head==null)
//         return null;
//     return head->next;
