#include <iostream>
using namespace std;
//GFG code
int onesinBN(int arr[],int n){
    int low=0;
    int high=n-1;
    while(low<=high){  
        int mid=(high+low)/2;
        if(arr[mid]==1){
            if(mid==0 || arr[mid-1]==0){
                return n-mid;
            }
            else {
                high=mid-1;
            }
        }
        else{
            low=mid+1;
        }
    }
    return 0;
}
//my code
int firstiter(int arr[],int n){
    int low=0;
    int high=n-1;
    while(low<=high){  
        int mid=(high+low)/2;
        if(arr[mid]==1){
            if(mid==0 || arr[mid-1]==0){
                return mid;
            }
            else {
                high=mid-1;
            }
        }
        else{
            low=mid+1;
        }
    }
    return 0;
}
int no1s(int arr[],int n){
    if(firstiter(arr,n) == -1){
        return -1;
    }
    else return n-firstiter(arr,n);
}
int main(){
    int arr[]={0,1,1,1,1,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<onesinBN(arr,n)<<endl;
  return 0;
}