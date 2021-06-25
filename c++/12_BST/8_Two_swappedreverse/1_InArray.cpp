
#include <iostream>
#include <climits>
using namespace std;
//two important examples
//inorder traversal of bst
//4 8 10 60 20 80 100
//4 60 10 20 8 80 100

void fixswap(int arr[],int n){
    int first=-1;
    int second=-1;
    int pre=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]<pre){
            if(first==-1){
                first=i-1;
            }
            second=i;
        }
        pre=arr[i];
    }
    cout<<"hello "<<first<<" "<<second<<"\n";
    int a=arr[first];
    arr[first]=arr[second];
    arr[second]=a;
    return;
}

int main(){
    int arr[]={4,60,10,20,8,80,100};
    int n=sizeof(arr)/sizeof(arr[0]);
    fixswap(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
