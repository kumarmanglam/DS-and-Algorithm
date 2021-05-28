#include <iostream>
using namespace std;
//optimized solution

//function of removing duplicates
//logic is replace duplicates with uniques in order fashion
int remdup(int arr[],int n){
    int k=1;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            arr[k]=arr[i];
            k++;
        }
    }
    return k;
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int arr[]={10,20,20,30,30,39,40,40,50,60,70,70};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=remdup(arr,n);
    printArray(arr,ans);
  return 0;
}

//time complexity is o(n) :)