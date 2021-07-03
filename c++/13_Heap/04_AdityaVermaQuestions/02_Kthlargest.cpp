#include <iostream>
#include <queue>
using namespace std;
//use minheap
int kthsmallest(int arr[],int n,int k){
    priority_queue < int, vector<int>, greater<int> > pq;
    
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>3){
            pq.pop();
        }
    }
    return pq.top();
}

int main(){
    int arr[]={34,76,15,35,10,20,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    cout<<kthsmallest(arr,n,k);
    return 0;
}
