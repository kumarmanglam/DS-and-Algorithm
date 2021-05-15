#include <iostream>
using namespace std;
//find the point where circuit is broken
int pointof(int arr[],int n){
    int i=1;
    int j=n-1;
    if (n==1)
        return arr[i];
    while(i<=j){
        int mid=(i+j)/2;
        if(arr[mid-1]==1 && arr[mid]==0)
            return mid;
        else if(arr[mid-1]==1 && arr[mid]==1){
            i=mid+1;
        }
        else if(arr[mid-1]==0 && arr[mid]==0){
            j=mid-1;
        }
    }
    return -1;
}


int main(){
    int arr[]={1,1,1,1,1,0,0,0};
    cout<<pointof(arr,8);
    return 0;
}