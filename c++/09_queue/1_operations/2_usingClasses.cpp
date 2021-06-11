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
    void enque(int x){
        if(isfull()) return;
        arr[size]=x;
        size++;
    }
    void deque(){
        if(isempty()) return ;
        for(int i=0;i<size-1;i++){
            arr[i]=arr[i+1];
        }
        size--;
    }
    int getfront() {        //returns index of first value which is always the first value1
        if(isempty()) return -1;
        else return 0;
    }
    int getrear() {         //returns index of the last value
        if(isepty()) return -1;
        else return size-1;
    }
    int size() {
        return size;
    }
};
