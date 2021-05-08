#include <iostream>
using namespace std;

int lastiter(int arr[],int n,int x)
{
	int low = 0, high = n - 1;

	while (low <= high)   
	{
		int mid = (low + high) / 2;
		if (arr[mid] > x)
			high = mid - 1;
		else if(arr[mid]<x)
			low = mid + 1;
        else{
            if(mid==n-1 || arr[mid+1]!=arr[mid]){
                return mid;
            }
            else{
                low=mid+1;
            }
        }
	}
	return -1;
}
int main()
{
    int arr[]={10,10,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=lastiter(arr,n,10);
    cout<<ans<<endl;
    return 0;
}
