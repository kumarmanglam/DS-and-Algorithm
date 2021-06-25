#include <iostream>
using namespace std;

int *changearray(int arr[],int n){
    int *ptr=arr;
    int a=arr[3];
    arr[3]=arr[5];
    arr[5]=a;
    return ptr;
}
void swapelements(int arr[],int n){
    int *ptr=arr;
    int a=arr[3];
    arr[3]=arr[5];
    arr[5]=a;
    return;
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int *ptr;
    ptr=changearray(arr,8);
    for(int i=0;i<8;i++){
        cout<<ptr[i]<<" ";
    }
    return 0;
}
