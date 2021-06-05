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

// void removeloop(node* head) 
// { 
//     node *slow = head, *fast = head; 
  
//     while (fast!=NULL && fast->next!=NULL) { 
//         slow = slow->next; 
//         fast = fast->next->next; 
//         if (slow == fast) { 
//             break; 
//         } 
//     } 
//     if(slow!=fast)
//         return;
//     slow=head;
//     while(slow->next!=fast->next){
//         slow=slow->next;
//         fast=fast->next;
//     }
//     fast->next=NULL;
// }

void detectRemoveLoop(Node* head) 
{ 
    Node *slow = head, *fast = head; 
  
    while (fast!=NULL && fast->next!=NULL) { 
        slow = slow->next; 
        fast = fast->next->next; 
        if (slow == fast) { 
            break; 
        } 
    } 
    if(slow!=fast)
        return;
    slow=head;
    while(slow->next!=fast->next){
        slow=slow->next;
        fast=fast->next;
    }
    fast->next=NULL;
}


void printlist(node* head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    node* head=new node(4);
    node* first=new node(5);
    node*second=new node(6);
    node* third=new node(7);
    node*fourth=new node(8);
    node*fifth=new node(9);
    head->next=first;
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=first;
    removeloop(head);
    printlist(head);
}
void printlist(node* head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    node* head=new node(4);
    node* first=new node(5);
    node*second=new node(6);
    node* third=new node(7);
    node*fourth=new node(8);
    node*fifth=new node(9);
    head->next=first;
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=first;
    removeloop(head);
    printlist(head);
}
