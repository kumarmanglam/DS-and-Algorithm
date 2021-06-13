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
    node *front,*rear,int size;
    queue(){
        front=NULL;
        rear=NULL;
        size=0;
    }
    void enque(int x){
        node* temp=new node(x);
        size++;
        if(front==NULL){
            front=rear=temp;
            return;
        }
        rear->next=temp;
        rear=temp;
    }
    void deque(){
        if(front==NULL)return;
        size--;
        node* temp=front;
        front=fornt->next;
        if(front==NULL){
            rear=NULL;
        }
        delete(temp);                       //memory deallocation
    }
    int getfront(){
        if(front!=NULL) return front->data;
        return -1;
    }
    int getrear(){
        if(rear!=NULL)return rear->data;
        return -1;
    }
};
