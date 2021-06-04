#include <iostream>
using namespace std;

void stockspan(int arr[],int n){
    int span;
    for(int i=0;i<n;i++){
        span=1;
        for(int j=i-1;j>=0 && arr[j]<arr[i];j--){
            span++;
        }
        cout<<span<<" ";
    }
}


int main(){
    int arr[]={13,12,15,14,16,8,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    stockspan(arr,n);
    return 0;
}
