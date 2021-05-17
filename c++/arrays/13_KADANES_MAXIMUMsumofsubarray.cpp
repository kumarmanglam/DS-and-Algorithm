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
//gfg sir approach
int kadanegfg(int arr[],int size){
    int mxsofar=INT_MIN,sum=0;
    for(int i=0;i<size;i++){
        sum=max(arr[i],sum+arr[i]);
        mxsofar=max(sum,mxsofar);
    }
    return mxsofar;
}

int main(){
    int arr[]={-2,-4,-8,-7,-2,-3,8,-88};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=kadane(arr,n);
    cout<<ans<<" ";
    return 0;
}