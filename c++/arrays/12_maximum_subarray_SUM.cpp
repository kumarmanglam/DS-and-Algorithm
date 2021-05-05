//Kadane's Algorithm
#include <iostream>
#include <climits>
using namespace std;
int maxiSubSum(int arr[],int n){
    int mx=INT_MIN,sum=INT_MIN;
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=i;j<n;j++){
            sum=sum+arr[j];
            mx=max(sum,mx);
        }
    }
    return mx;
}
int main(){
    int arr[]={1,2,3,-2,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans;
    ans=maxiSubSum(arr,n);
    cout<<ans<<endl;
    return 0;
}