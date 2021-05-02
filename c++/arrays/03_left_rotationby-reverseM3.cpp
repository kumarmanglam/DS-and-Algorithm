#include <iostream>
using namespace std;

void reverseSE(int arr[],int start,int end){
    for(int i=0;i<=(end-start)/2;i++){
        swap(arr[start+i-1],arr[end-i-1]);
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void leftrotationByReverse(int arr[],int d,int size){
    reverseSE(arr,1,d);
    reverseSE(arr,d+1,size);
    reverseSE(arr,1,size);
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int d=3;
    int size=sizeof(arr)/sizeof(arr[0]);
    leftrotationByReverse(arr,d,size);
    printArray(arr,size);
    return 0;
}