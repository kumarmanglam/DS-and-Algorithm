#include <iostream>
using namespace std;
//Naive solution is to linearly search for the element 

//this is efficient solution 
int iterBS(int arr[], int n, int x)
{
    int i = 0;
    int j = n - 1;
    while (i <= j)
    {
        int mid = (i + j) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] > x)
        {
            j = mid - 1;
        }
        else
        {
            i = mid + 1;
        }
    }
    return -1;
}
int lowerbound(int arr[],int n,int x){
    int ans=iterBS(arr,n,x);
    while (ans>=0 && arr[ans-1]==arr[ans]){
        ans--;
    }
    return ans;
}
int main()
{
    int arr[]={1,2,3,4,5,10,10,20,20,40};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=lowerbound(arr,n,10);
    cout<<ans<<endl;
    return 0;
}
