#include <iostream>
using namespace std;

struct queue{
    int size;
    int front;
    int cap;
    int *arr;
    queue(int capacity){
        size=0;
        front=0;
        cap=capacity;
        arr= new int[capacity];  //this is how we allocate fixed size to an array
    }
    bool isfull(){
        return (size==cap);
    }
    bool isempty(){
        return (size==0);
    }
    int getfront(){
        if(isempty()){
            cout<<" \n queue is empty \n ";
            return -1;
        }
        return arr[front];
    }
    int getrear(){
        if(isempty()){
            cout<<" \n queue is empty \n";
            return -1;
        }
        return arr[(front+size-1)%cap];
    }
    void enque(int p){
        if(isfull()){
            cout<<" \n queue is full \n";
            return;
        }
        int rear=(front+size-1)%cap;
        rear=(rear+1)%cap;
        arr[rear]=p;
        size++;
    }
    void deque(){
        if(isempty()){
            cout<<" \n queue is empty \n";
            return;
        }
        front=(front+1)%cap;
        size--;
    }

    void display(){
        int i=front;
        int j=front+size;
        while(i<j){
            cout<<arr[(i+cap)%cap]<<" ";
            i++;
        }
        cout<<"\n";
    }
};

int main(){
    queue q(4);
    
    q.enque(23);
    q.enque(34);
    q.enque(45);
    q.enque(50);
    q.deque();
    // q.deque();
    // q.deque();
    q.enque(34);
    // cout<<q.getfront();
    // cout<<" ";
    // cout<<q.getrear();
    
    q.display();
}
