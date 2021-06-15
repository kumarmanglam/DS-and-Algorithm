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
        return front;
    }
    
    int getback(){
        if(isempty()){
            cout<<" deque is empty \n";
            return -1;
        }
        return (front+size-1)/cap;
    }
    
    void deletefront(){
        if(isempty()){
            cout<<" deque is empty";
            return;
        }
        front=(front+1)%cap;
        size--;
    }
    void insertrear(int x){
        if(isfull()){
            cout<< " deque is full \n";
            return ;
        }
        arr[(front+size)%cap]=x;
        size++;
    }
    void insertfront(int x){
        if(isfull()){
            cout<<" deeque is full \n";
            return ;
        }
        front=(front+cap-1)%cap;                         // we take modulo here so that we do not get negative index imp front-cap-1 gives previous index to front
        arr[front]=x;                     
        size++;
    }
    
    void deleterear(){
        if(isempty()){
            cout<<" deque is empty";
            return;
        }
        size--;
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
    deque q(4);
    q.insertfront(34);
    q.insertfront(23);
    q.insertfront(30);
    q.insertrear(48);
    q.insertrear(33);
    q.isempty();
    q.deleterear();
    
    q.display();
    return 0;
}
