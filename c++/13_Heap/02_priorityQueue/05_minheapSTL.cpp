#include <iostream>
#include <queue>
using namespace std;
//how to create a priority queue form a given a array of elements

int main(){
    int arr[]={15,10,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    priority_queue<int> pq;
    for(int i=0;i<size;i++){
        pq.push(-(arr[i]));
    }
    while(!pq.empty()){
        cout<<(-(pq.top()))<<" ";
        pq.pop();
    }
    return 0;
}
