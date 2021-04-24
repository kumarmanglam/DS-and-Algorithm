#include <iostream>

using namespace std;

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
int main()
{
    int arr[]={1,3,4,5,34,29,3,4,54,4,3,2,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=4;
    int ans=sliding_window(arr,n,k);
    cout<<"answer is "<<ans<<endl;
    return 0;
}