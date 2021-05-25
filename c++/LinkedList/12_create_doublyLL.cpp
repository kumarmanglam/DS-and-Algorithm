#include <iostream>
using namespace std;
//create a function which create a doubly linked list 10-20-30

struct node{
    int data;
    node*prev;
    node*next;
    node(int x){
        data=x;
        prev=NULL;
        next=NULL;
    }
};


//creating doubly linked in main() function
int main(){
    node*first=new node(9);
    node*second=new node(89);
    node*third=new node(90);
    first->next=second;
    second->next=third;
    second->prev=first;
    third->prev=second;
    
    //testing
    cout<<first->next->data<<" ";
    cout<<second->prev->data<<" ";
    cout<<third->prev->data<<" ";
    
}
