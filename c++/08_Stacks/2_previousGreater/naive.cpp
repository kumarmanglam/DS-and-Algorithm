#include <iostream>
using namespace std;

//naive solution to find previous greater element

void previousgreater(int arr[],int n){
    cout<<-1<<" ";
    for(int i=1;i<n;i++){
        int j;
        for(j=i-1;j>=0;j--){
            if(arr[j]>arr[i]){
                cout<<arr[j]<<" ";
                break;
            }
        }
        if(j==-1){
            cout<<-1<<" ";
        }
    }
}

int main(){
    int arr[]={1,45,23,11,10,34};
    int n=sizeof(arr)/sizeof(arr[0]);
    previousgreater(arr,n);
    return 0;
}
