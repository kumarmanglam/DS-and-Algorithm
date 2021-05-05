#include <iostream>
using namespace std;
int maxiof1s(int arr[],int n){
    int mx=0,i=0,count =0;
    while (i<n){
        if(arr[i]==1)
            count=1;
        while(arr[i]==arr[i+1] && arr[i]==1 && i<n){
            count++;
            i++;
        }
        mx=max(mx,count);
        i++;
    }
    return mx;
}
int main(){
    int arr[]={1,0,1,0,0,0,1,1,1,1,1,1,0,0,0,1,1,1,1,1,1,1,1,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int mx=maxiof1s(arr,n);
    cout<<mx<<endl;
  return 0;
}