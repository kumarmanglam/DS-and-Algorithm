#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

struct queue{
    node *front,*rear;
    queue(){
        front=NULL;rear=NULL;
    }
    void enque(int x){
        node* temp=new node(x);
        if(front==NULL){
            front=rear=temp;
            return;
        }
        rear->next=temp;
        rear=temp;
    }
    void deque(){
        if(front==NULL)return;
        node* temp=front;
        front=fornt->next;
        if(front==NULL){
            rear=NULL;
        }
        delete(temp);                       //memory deallocation
    }
};
