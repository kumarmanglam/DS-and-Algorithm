#include <iostream>
#include <queue>
using namespace std;
//closest to origin
//this question can be done without using map



void closestorigin(int arr[10][10],int n,int k){
    priority_queue<pair<int,pair<int,int>>> heap;
    for (int i=0;i<n;i++){
        heap.push({ arr[i][0]*arr[i][0] + arr[i][1]*arr[i][1] , {arr[i][0],arr[i][1]} });
        if(heap.size()>k){
            heap.pop();
        }
    }
    
    while(!heap.empty()){
        pair <int,int> p=heap.top().second;
        cout<<p.first<< " "<<p.second;
        heap.pop();
        cout<<endl;
    }
}

int main(){
    int arr[10][10]={{1,3},{-3,2},{5,8},{0,3},{1,1}};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    
    closestorigin(arr,5,2);
    
    return 0;
}
