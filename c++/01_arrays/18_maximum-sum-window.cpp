#include <iostream>
#include <climits>
using namespace std;
//naive technique
int maxsum(int arr[],int n,int k){
    int mx=INT_MIN;
    for(int i=0;i<n-k;i++){
        int sum=0;
        for(int j=i;j<i+k;j++){
            sum+=arr[j];
        }
        mx=max(sum,mx);
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
//efficient solution by aditya verma
int sliding_window(int arr[],int n,int k)
{
    int sum=0,mx=0,i=0,j=0;
    while (j<n)
    {
        sum+=arr[j];
        if ((j-i+1)<k)
            j++;
        else if((j-i+1)>=k)
        {
            mx=max(mx,sum);
            sum-=arr[i];
            i++;
            j++;
        }
    }
    return mx;
}
int main(){
    int arr[]={3,4,2,3,4,5,3,5,6,4,6,4,34,3,23,2,2};
    int k=2;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<sliding(arr,n,k)<<endl;
  return 0;
}