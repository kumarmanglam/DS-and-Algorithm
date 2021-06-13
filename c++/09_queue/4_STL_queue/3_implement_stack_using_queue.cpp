#include <iostream>
#include <queue>
using namespace std;

//implement stack using queue
//there are various methods to implement stack using queue

struct stack{
    queue <int> q1,q2;
    int top(){
        return q1.front();
    }
    int size(){
        return q1.size();
    }
    int pop(){
        return q1.pop();
    }
    int push(int x){
        while(q1.front()!=NULL){
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(x);
        while(q2.front()!=NULL){
            q1.push()(q2.front());
            q2.pop();
        }
    }
}
