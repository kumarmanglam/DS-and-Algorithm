#include <iostream>
using namespace std;
//effecient approach
int search_rotated(int arr[],int n,int x){
    int low=0, high=n-1;
    while (low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x){
            return mid+1;
        }
        if(arr[low]<arr[mid]){
            // left half is sorted
            //ye sorted h isme h ya nahi ye decide karlo phle
            if(x>=arr[low] && x<arr[mid])
                high=mid-1;
            else 
                low=mid+1;
        }
        else{
            //right half is sorted
            //ye sorted h isme h ya nahi ye decide krlo phle 
            if(x>arr[mid] && x<=arr[high])
                low=mid+1;
            else 
                high=mid-1;
        }
    }
    return -1;
}
int main(){
    int arr[]={4,5,6,7,8,9,1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<search_rotated(arr,n,31);

  return 0;
}