#include <iostream>
using namespace std;

//naive solution to find previous greater element

void previousgreater(int arr[],int n){
    cout<<arr[0]<<" ";
    for(int i=1;i<n;i++){
        for(int j=i-1;j>=0;j--){
            if(arr[j]>=arr[i]){
                cout<<arr[j]<<" ";
                break;
            }
        }
    }
}

int main(){
    int arr[]={1,45,23,11,10,34};
    int n=sizeof(arr)/sizeof(arr[0]);
    previousgreater(arr,n);
    return 0;
}
