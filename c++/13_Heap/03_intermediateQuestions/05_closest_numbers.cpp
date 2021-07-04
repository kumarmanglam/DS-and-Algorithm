#include <iostream>
#include <queue>
using namespace std;
//k smallest numbers
//we will use max heap
//if difference between number and array element is small then we will replace the root of heap!!!
void closestnumbers(int arr[],int n,int k,int x){
    int diff;
    priority_queue<pair<int,int>> pq;
    for (int i=0;i<k;i++){
        diff=abs(arr[i]-x);
        pq.push({diff,arr[i]});
    }
    for(int i=k;i<n;i++){
        diff=abs(arr[i]-x);
        if(pq.top().first()>diff);
        pq.pop();
        pq.push({diff,arr[i]});
    }
    
    for(int i=0;i<k;i++){
        cout<<pq.top().second();
        pq.pop();
    }
}

int main(){
    int arr[]={34,76,15,35,10,20,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=5;
    nearlysorted(arr,n,k);
    
    return 0;
}
