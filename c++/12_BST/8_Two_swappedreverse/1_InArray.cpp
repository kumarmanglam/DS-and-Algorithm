#include <iostream>
#include <climits>
using namespace std;
//two important examples
//inorder traversal of bst
//4 8 10 60 20 80 100
//4 60 10 20 8 80 100

int *fixswap(int arr[],int n){
    int *ptr=arr;
    int first=INT_MIN;
    int second=INT_MIN;
    int pre=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]<pre){
            if(first==INT_MIN)
                first=pre;
            second=arr[i];
        }
        pre=arr[i];
    }
    int a=arr[first];
    arr[first]=arr[second];
    arr[second]=a;
    return ptr;
}

int main(){
    int arr[]={4,8,60,20,8,80,100};
    int n=sizeof(arr)/sizeof(arr[0]);
    int *ptr;
    ptr=fixswap(arr,n);
    for(int i=0;i<n;i++)
        cout<<ptr[i]<<" ";
    return 0;
}
