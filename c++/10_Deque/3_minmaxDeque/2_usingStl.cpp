#include <iostream>
#include <deque>
using namespace std;


struct mydeque{
    deque<int>dq;
    
    void insertmin(int x){
        dq.push_front(x);
    }
    
    void insertmax(int x){
        dq.push_back(x);
    }
    
    int getmin(){
        return dq.front();
    }
    
    int getmax(){
        return dq.back();
    }
    
    int extractmin(){
        return dq.pop_front();
    }
    
    int extractmax(){
        return dq.pop_back();
    }
};




int main(){
    mydeque q(7);
    q.insertmin(34);
    q.insertmin(23);
    q.insertmax(39);
    q.insertmax(48);
    q.insertmax(89);
    q.extractmax();
    cout<<q.getmin()<<"\n";
    cout<<q.getmax()<<"\n";
    return 0;
}
