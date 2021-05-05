#include <iostream>
#include <climits>
using namespace std;


int kadane(int arr[],int size){
    int mxsofar=INT_MIN,sum=INT_MIN;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
        mxsofar=max(sum,mxsofar);
        if(sum<0)
            sum=0;
    }
    return mxsofar;
}
int main(){
    int arr[]={1,2,3,-2,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=kadane(arr,n);
    cout<<ans<<" ";
    return 0;
}