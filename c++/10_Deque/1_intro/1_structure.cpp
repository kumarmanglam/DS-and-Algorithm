#include <iostream>
using namespace std;

//wap to implement a deque using a circular array 

struct deque{
    int size,front,cap;
    int* arr;
    deque(int x){
        cap=x;
        size=0;
        front=0;
        arr=new int[cap];
    }
};

bool isfull(){
    return (size==cap);
}

bool isempty(){
    return (size==0);
}

int getfront(){
    if(isempty()){
        cout<<" deque is empty \n";
        return -1;
    }
    return arr[front];
}

int getback(){
    if(isempty()){
        cout<<" deque is empty \n";
        return -1;
    }
    return arr[(front+size-1)/cap];
}

void pushfront(int x){
    if(isfull()){
        cout<<" deeque is full \n";
        return ;
    }
    arr[front-1]=x;
    return;
}

void pushback(int x){
    if(isfull()){
        cout<< " deque is full \n";
        return ;
    }
    arr[(front+size)/cap]=x;
    return;
}

void deletefront(){
    if(isempty()){
        cout<<" deque is empty";
        return;
    }
    front=front+1;
}

void deleteback(){
    if(isempty()){
        cout<<" deque is empty";
        return;
    }
    size=size-1;
    return;
}
