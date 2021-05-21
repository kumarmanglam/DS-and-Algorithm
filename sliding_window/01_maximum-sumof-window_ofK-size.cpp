#include <iostream>
#include <climits>
using namespace std;
//efficient solution by aditya verma
int sliding_window(int arr[],int n,int k)
{
    int sum=0,mx=0,i=0,j=0;
    while (j<n)
    {
        sum=sum+arr[j];
        if ((j-i+1)<k)
            j++;
        else if((j-i+1)>=k)
        {
            mx=max(mx,sum);
            sum=sum-arr[i];
            i++;
            j++;
        }
    }
    return mx;
}
//efficient solution by gfg
int sliding(int arr[],int n,int k){
    int cursum=0,mx=INT_MIN;
    for(int i=0;i<k;i++){
        cursum+=arr[i];
    }
    for(int i=k;i<n;i++){
        cursum+=(arr[i]-arr[i-k]);
        mx=max(cursum,mx);
    }
    return mx;
}
int main()
{
    int arr[]={2,5,1,8,2,9,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=4;
    int ans=sliding_window(arr,n,3);
    cout<<"answer is "<<ans<<endl;
    return 0;
}