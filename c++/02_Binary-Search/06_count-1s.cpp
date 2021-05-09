#include <iostream>
using namespace std;
int firstiter(int arr[],int n){
    int low=0;
    int high=n-1;
    int mid=(high+low)/2;
    while(high>low){
        if(arr[mid]==1){
            if(mid==0 || arr[mid-1]!=1){
                return mid;
            }
        }
        else if(arr[mid]<1){
            low=mid+1;
        }
    }
    return -1;
}
int no1s(int arr[],int n){
    if(firstiter(arr,n) == -1){
        return -1;
    }
    else return n-firstiter(arr,n);
}
int main(){
    int arr[]={0,0,0,1,1,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<no1s(arr,n)<<endl;
  return 0;
}