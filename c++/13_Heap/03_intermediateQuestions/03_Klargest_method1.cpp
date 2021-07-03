//o(n=klogn)time


#include <iostream>
#include <queue>
using namespace std;

//question is to find first maximum largest elements
//we will make max heap 
//then we will pop first k items from heap

int main(){
    int n=5;
    int cost[n]={1,12,5,111,200};
    int sum=10;
    int k=3;
    priority_queue< int> pq;
    
    int res=0;
    for(int i=0;i<n;i++)
        pq.push(cost[i]);
    
    for(int i=0;i<k;i++){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;
}
