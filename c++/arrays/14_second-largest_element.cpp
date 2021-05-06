#include <iostream>
using namespace std;
int secondlargest(int arr[],int n){
    int first=-1,second =-1;
    for(int i=0;i<n;i++){
        if(arr[i]>first){
            second=first;
            first=arr[i];
        }
        if(arr[i]>second and arr[i]<first){
            second=arr[i];
        }
    }
    return second;
}

int main(){
    int arr[]={3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int second=secondlargest(arr,n);
    cout<<second<<endl;

  return 0;
}