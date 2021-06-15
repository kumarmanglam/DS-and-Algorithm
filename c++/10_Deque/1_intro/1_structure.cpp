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
        arr[(front+cap-1)%cap]=x;                       // we take modulo here so that we do not get negative index imp front-cap-1 gives previous index to front
        return ;
    }
    
    void pushback(int x){
        if(isfull()){
            cout<< " deque is full \n";
            return ;
        }
        arr[(front+size-1)/cap];
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
    
    void display(){
        int i=front;
        int j=front+size;
        while(i<j){
            cout<<arr[(i+cap)%cap]<<" ";
            i++;
        }
    }
};

int main(){
    deque q(5);
    q.pushback(34);
    q.pushback(23);
    q.pushfront(30);
    q.pushfront(48);
    q.display();
    return 0;
}
