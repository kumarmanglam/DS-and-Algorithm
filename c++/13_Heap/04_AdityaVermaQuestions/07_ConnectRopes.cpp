#include <iostream>
#include <queue>
using namespace std;
// connect ropes at minimum cost
//we we join two minimum lengths every time

void connect(int arr[],int n){
    priority_queue<int,vector<int>,greater<int>> p;
    int cost=0;
    for(int i=0;i<n;i++){
        p.push(arr[i]);
    }
    while(p.size()>=2){
        int first=p.top();
        p.pop();
        int second=p.top();
        p.pop();
        cost=cost+first+second;
        p.push(first+second);
    }
    cout<<cost;
}


int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);

    
    connect(arr,n);
    
    return 0;
}
