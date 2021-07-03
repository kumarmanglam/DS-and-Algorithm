#include <iostream>
#include <queue>
using namespace std;

//logic is touse min heap of constant size

//to find largest k+1 lragest elements
//1 build minheap of k elements
//2 insert n-k elements to heap accordingly
//3 print contents of min heap
void firstelements(int arr[],int n,int k){
    priority_queue<int,vector<int>,greater<int>> minheap;
    for(int i=0;i<k;i++){
        minheap.push(arr[i]);
    }
    for(int i=k;i<n;i++){
        if(arr[i]>minheap.top()){
            minheap.pop();
            minheap.push(arr[i]);
        }
    }
    while(!minheap.empty()){
        cout<<minheap.top()<<" ";
        minheap.pop();
    }
}

int main(){
    int n=5;
    int arr[n]={1,12,5,111,200};
    int k=3;
    
    firstelements(arr,n,k);
    
 
    return 0;
}
