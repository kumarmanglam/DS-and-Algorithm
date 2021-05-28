//Kadane's Algorithm
#include <iostream>
#include <climits>
using namespace std;
//my  naive approach
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
//dp approach
int maxSubArraySum(int a[], int size)
{
    int max_so_far = a[0];
    int sum= a[0];
    for (int i = 1; i < size; i++)
    {
        sum = max(a[i], sum+a[i]);
        max_so_far = max(max_so_far, sum);
    }
    return max_so_far;
}
int main(){
    int arr[]={1,2,3,-2,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans;
    ans=maxiSubSum(arr,n);
    cout<<ans<<endl;
    return 0;
}