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
        return (size==full);
    }
    bool isempty(){
        return (size==0);
    }
    void enque(int x){
        if(isfull())return;
        arr[size]=x;
        size++;
    }
    void deque(){
        if(isempty()) return ;
        for(int i=0;i<size-1;i++){
            arr[i]=arr[i+1];
        }
        size++;
    }
    int getfront() {
        if(isempty()) return -1;
        return (arr[size]);
    }
    int getrear() {
        if(isepty()) return -1;
        return (arr[size]);
    }
    int size() {
        return size;
    }
};
