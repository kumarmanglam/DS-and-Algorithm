
#include <iostream>
#include <queue>
using namespace std;

//sum of elements between k1 smallest k2 smallest 
//sum of numbers between k1 smallest and k2 smallest * redundant method
void sums(int arr[],int n,int k,int m){
    priority_queue<int,vector<int>,greater<int> > heap;
    for(int i=0;i<n;i++){
        heap.push(arr[i]);
    }
    int j=0;
    for(;j<k;j++){
        heap.pop();
    }
    int sum=0;
    for(;j<m-1;j++){
        sum+=heap.top();
        heap.pop();
    }
    cout<<sum;
}

int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    sums(arr,n,3,6);
    return 0;
}
