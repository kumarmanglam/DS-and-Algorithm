#include <iostream>
using namespace std;

struct queue{
    int size,cap;
    int *arr;
    queue(int c){
        cap=c;
        size=0;
        arr=new int[cap];
    }
    bool isfull(){
        return (size==cap);
    }
    bool isempty(){
        return (size==0);
    }
    void enqueue(int x){
        if(isfull()){
            cout<<"\n queue is full\n";
            return;
        }
        arr[size]=x;
        size++;
    }
    void deque(){
        if(isempty()){
            cout<<"\n queue is empty";
            return ;
        }
        for(int i=0;i<size-1;i++){
            arr[i]=arr[i+1];
        }
        size--;
    }
    int getfront(){        //returns index of first value which is always the first value1
        if(isempty()) return -1;
        else return 0;
    }
    int getrear(){         //returns index of the last value
        if(isempty()) return -1;
        else return size-1;
    }
    int sizeofqueue() {
        return size;
    }
    void display(){
        int i;
        if(isempty()){
            cout<<"\nqueue is full\n";
            return;
        }
        for(i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        return;
    }
};

int main(){
    queue q(8);
    
    q.display();
    
    q.enqueue(34);
    q.enqueue(35);
    q.enqueue(46);
     
    q.display();
    return 0;
}
