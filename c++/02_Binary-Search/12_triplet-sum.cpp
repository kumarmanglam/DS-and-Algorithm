#include <iostream>
using namespace std;
//o(n) time
bool ispair(int arr[],int left,int right,int x){
    while(left<right){
        if((arr[left]+arr[right])==x)
            return true;
        else if(arr[left]+arr[right]>x)
            right--;
        else
            left--;
    }
    return false;
}


//O(n^2) time
bool triplet(int arr[],int n,int x){
    for(int i=0;i<n;i++){
        if(ispair(arr,i+1,n-1,x-arr[i]))
            return true;
    }
    return false;
}


int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,32,55,77,88,99};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=77;
    cout<<triplet(arr,n,16);
    return 0;
}
//we can also use hashing 