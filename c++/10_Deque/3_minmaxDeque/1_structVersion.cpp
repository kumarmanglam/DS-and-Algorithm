//Design a Data Structure with Min and Max operations

#include <iostream>
using namespace std;

//wap to implement a deque using a circular array 
//fronts will store the minimums and maxs will store the maximums
struct deque{
    int size,front,cap,max=0,min=1000;
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
    void insertmin(int x){
        if(isfull()){
            cout<<" queue is full \n";
            return;
        }
        if(x>max){max=x;};
        if(x<min){min=x;};
        front=(front+cap-1)%cap;
        arr[front]=x;
        size++;
    }
    
    void insertmax(int x){
        if(isfull()){
            cout<<" queue is full \n";
            return;
        }
        if(x>max){max=x;};
        if(x<min){min=x;};
        int newrear=(front+size)%cap;
        arr[newrear]=x;
        size++;
    }
    
    int extractmin(){
        int newmin=min;
        front=(front+cap+1)%cap;
        min=arr[front];
        size--;
        return newmin;
    }
    
    int extractmax(){
        int newmax=max;
        size--;
        return newmax;
    }
    
    int getmax(){
        return max;
    }
    int getmin(){
        return min;
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
    q.insertmin(34);
    q.insertmin(23);
    q.insertmax(39);
    q.insertmax(48);
    q.insertmax(89);
    q.isempty();
    q.extractmax();
    cout<<q.getmin()<<"\n";
    cout<<q.getmax()<<"\n";
    q.display();
    return 0;
}
