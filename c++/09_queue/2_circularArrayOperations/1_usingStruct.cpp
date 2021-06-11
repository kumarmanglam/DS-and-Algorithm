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
    void enque(int x){
        if(isfull()){
            cout<<" \n queue is full \n";
            return;
        }
        int rear=(front+size-1)%cap;
        rear=(rear+1)%cap;
        arr[rear]=x;
        size++;
    }
    void deque(){
        if(isempty()){
            cout<<" \n queue is empty \n";
            return;
        }
        arr[front]=-1;
        front=(front+1)%cap;
        size--;
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
        int rear=(front+size-1)%cap;
        return arr[rear];
    }
    void display(){
        int i=front;
        int j=cap+size;
        while(i<j){
            cout<<arr[i];
        }
    }
};

int main(){
    queue q(4);
    
    q.enque(23);
    q.enque(34);
    q.enque(45);
    q.enque(50);
    q.enque(58);
    
    q.display();
}
