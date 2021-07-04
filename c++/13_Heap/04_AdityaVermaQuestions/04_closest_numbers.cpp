#include <iostream>
#include <queue>
using namespace std;
//k smallest numbers
//we will use max heap
//if difference between number and array element is small then we will replace the root of heap!!!
//Aditya verma method
//print k closest number to x
void clossestnumbers(int arr[],int n,int k,int x){
    priority_queue<pair<int,int>> pq;
    for (int i=0;i<n;i++){
        pq.push({abs(arr[i]-x),arr[i]});
        if(pq.size()>k)
            pq.pop();
    }
    for(int i=0;i<k;i++){
        cout<<pq.top().second<<" ";
        pq.pop();
    }
    
}

int main(){
    int arr[]={9,8,7,5,4,3,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    clossestnumbers(arr,n,k,4);
    
    return 0;
}
