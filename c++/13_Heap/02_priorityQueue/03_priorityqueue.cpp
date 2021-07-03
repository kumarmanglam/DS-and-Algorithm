#include <iostream>
#include <queue>
using namespace std;
//how to create a priority queue form a given a array of elements
int main(){
    int arr[]={10,15,5};
    priority_queue<int>pq(arr,arr+3);
    while(pq.empty()==false){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;
}
