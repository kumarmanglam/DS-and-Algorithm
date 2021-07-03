
#include <iostream>
using namespace std;

class minheap{
    int arr[];
    int size;
    int capacity;
    minheap(int c){
        arr[]=new int[c];
        size=0;
        capacity=c;
    }
    int left(int i){return (2*i+1);
    int right(int i){return (2*i+2);
    int parent(int i){return (i-1)/2;
    
    
    insert(int x){
        if(size==capacity)return ;
        size++;
        arr[size-1]=x;
        for(int i=size-1;i!=0&&arr[parent[i])>arr[i]){
            swap(arr[i],arr[parent(i)]);
            i=parent(i);
        }
    }
}

