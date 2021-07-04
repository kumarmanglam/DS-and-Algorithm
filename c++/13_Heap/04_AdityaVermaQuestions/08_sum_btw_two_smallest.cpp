
#include <iostream>
#include <queue>
using namespace std;

//sum of elements between k1 smallest k2 smallest 
//naive approach
int Kthsmallest(int arr[],int n,int k){
    priority_queue<int > heap;
    
    for(int i=0;i<n;i++){
        heap.push(arr[i]);
        if(heap.size()>k)
            heap.pop();
    }
    return heap.top();
}

int sumbtw(int arr[],int n,int k,int m){
    int sum1=Kthsmallest(arr,n,k);
    int sum2=Kthsmallest(arr,n,m);
    int sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]>sum1 && arr[i]<sum2){
            sum+=arr[i];
        }
    }
    return sum;
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    cout<<sumbtw(arr,n,3,6);
    return 0;
}
