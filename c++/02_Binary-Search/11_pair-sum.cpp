#include <iostream>
using namespace std;
bool ispair(int arr[],int n,int x){
    int left=0,right=n-1;
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

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,19};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=15;
    cout<<ispair(arr,n,x);
    return 0;
}