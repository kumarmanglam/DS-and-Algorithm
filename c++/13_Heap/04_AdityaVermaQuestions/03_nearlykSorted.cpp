#include <iostream>
#include <queue>
using namespace std;
//use minheap
//sort the nearly sorted array

void nearlysorted(int arr[],int n,int k){
    priority_queue <int, vector<int>, greater<int> > pq; //this is minheap
    int index=0;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k){
            arr[index]=pq.top();
            pq.pop();
        }
    }
    while(!pq.empty()){
        arr[index++]=pq.top();
        pq.pop();
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return;
}

int main(){
    int arr[]={34,76,15,35,10,20,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=5;
    nearlysorted(arr,n,k);
    
    return 0;
}
