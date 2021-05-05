#include <iostream>
#include <climits>
using namespace std;


int kadane(int arr[],int size){
    int mxsofar=INT_MIN,sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
        mxsofar=max(sum,mxsofar);
        if(sum<0)
            sum=0;
    }
    return mxsofar;
}
int main(){
    int arr[]={23 ,41 ,84, -8 ,42, -54, 1 ,2 ,28 ,49 ,-32 ,-16 ,-33, -44 ,-100, -30, 68 ,-47 ,59 ,-94, 35 ,-18};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=kadane(arr,n);
    cout<<ans<<" ";
    return 0;
}