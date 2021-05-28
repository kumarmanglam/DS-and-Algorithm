#include <iostream>
using namespace std;
int maxidiff(int arr[],int size){
    int mx;
    for(int i=1;i<size;i++){
        int b=arr[i];
        for(int j=0;j<i;j++){
            int a=arr[j];
            if (a<b){
                mx=b-a;
            }
        }
    }
    return mx;
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={6,8,4,9,11,1,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<maxidiff(arr,size)<<endl;
    return 0;
}