#include <iostream>
using namespace std;
//naive logic 1
int remdup(int arr[],int n){
    int temp[n];
    temp[0]=arr[0];
    int res=1;
    for(int i=1;i<n;i++){
        if(temp[res-1]!=arr[i]){
            temp[res]=arr[i];
            res++;
        }
    }
    //copying elements to original array
    for(int i=0;i<res;i++)
        arr[i]=temp[i];
    return res;
}
//naive logic 2
int naive2remdup(int arr[],int n){
    int temp[n];
    temp[0]=arr[0];
    int k=1;
    for(int i=1;i<n;i++){
        if (arr[i]>arr[i-1]){
            temp[k]=arr[i];
            k++;
        }
    }
        for(int i=0;i<k;i++)
        arr[i]=temp[i];
    return k;
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){

    int arr[]={10,20,20,30,30,39,40,40,50,60,70,70};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=naive2remdup(arr,n);
    printArray(arr,ans);
  return 0;
}